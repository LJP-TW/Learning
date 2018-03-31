sortedStudent = []
sortedTeacher = []
selectTeacher = []

finished = []
student = []
teacher = []

def getTeacherIndex(teacherName):
    for i in range(0, len(teacher)):
        if teacherName == teacher[i][0]:
            return i

def isTeacherSelectable(teacherName):
    for i in range(0, len(teacher)):
        if teacherName == teacher[i][0]:
            return True
    return False

def removeTeacher(teacherName):
    for i in range(0, len(teacher)):
        if teacherName == teacher[i][0]:
            teacher.remove(teacher[i])
            break

# Handling Input
userInput = input().replace('\r', '').split(',')
sortedTeacher = sorted(userInput)
while sortedTeacher == sorted(userInput):
    student.append(userInput)
    userInput = input().replace('\r', '').split(',')

sortedStudent = sorted(userInput)

teacher.append(userInput)
for i in range(1, len(sortedTeacher)):
    userInput = input().replace('\r', '').split(',')
    teacher.append(userInput)


# Adding name to student/teacher[0]
for i in range(0, len(sortedStudent)):
    student[i].insert(0, sortedStudent[i])
    
for i in range(0, len(sortedTeacher)):
    teacher[i].insert(0, sortedTeacher[i])


# Init finished list, if the student selected a teacher successfully, the finished[studentIndex] will be true
for i in range(0, len(sortedStudent)):
    finished.append(False)

for i in range(0, len(sortedStudent)):
    selectTeacher.append(sortedStudent[i])

# The student index
index = 0
# The order of teacher selected by student
layer = 1
while False in finished:
    if layer >= len(student[0]):
        break
    if index >= len(sortedStudent):
        index = 0
        layer += 1
    if finished[index] == True:
        index += 1
        continue

    duplicatedFlag = False
    breakDoubleForFlag = False
    teacherName = student[index][layer]
    if isTeacherSelectable(teacherName) == False:
        index += 1
        continue
    for i in range(0, len(student)):
        if i == index:
            continue
        if teacherName == student[i][layer]:
            duplicatedFlag = True
            break

    if duplicatedFlag == False:
        studentIndex = sortedStudent.index(student[index][0])
        selectTeacher[studentIndex] = teacherName
        finished[studentIndex] = True
        index += 1
        removeTeacher(teacherName)
    else:
        index = getTeacherIndex(teacherName)
        for i in range(1, len(teacher[index])):
            for j in range(0, len(student)):
                if teacher[index][i] == student[j][0] and student[j][layer] == teacher[index][0]:
                    studentIndex = sortedStudent.index(student[j][0])
                    if finished[studentIndex] == True:
                        continue

                    selectTeacher[studentIndex] = teacherName
                    finished[studentIndex] = True
                    index += 1
                    removeTeacher(teacherName)
                    breakDoubleForFlag = True
                    break
            if breakDoubleForFlag == True:
                break

for i in range(0, len(selectTeacher)):
    if finished[i] == True:
        print('{}->{}'.format(sortedStudent[i], selectTeacher[i]))
    else:
        print('{}->none'.format(sortedStudent[i]))
