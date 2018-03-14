#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include "student.h"

using namespace std;

void readStudentFile(vector<Student>& students, string& fileName);

int main()
{
	vector<Student> students;
	string fileName;

	cout << "Input File Name : " << endl;
	cin >> fileName;
	
	readStudentFile(students, fileName);

	for(auto student : students)
	{
		cout << "Name    : " << student.GetName() << endl;
		cout << "UID     : " << student.GetUID() << endl;
		cout << "Average : " << student.GetAverage() << endl;
	}

	return 0;	
}

void readStudentFile(vector<Student>& students, string& fileName)
{
	ifstream infile(fileName);
	string line;

	while(getline(infile, line))
	{
		istringstream iss(line);
		string name, uid;
		double score;

		iss >> name >> uid;

		Student student(name, uid);

		while(iss >> score)
		{
			student.ScoreInput(score);
		}

		students.push_back(student);
	}
}
