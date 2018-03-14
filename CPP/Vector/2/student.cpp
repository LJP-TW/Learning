#include "student.h"

Student::Student(string& n, string& i)
{
	name = n;
	UID = i;
}

void Student::ScoreInput(double& d)
{
	if(d > 100 || d < 0)
	{
		cout << "Score Error : Out of range(0~100)" << endl;
		return;
	}
	score.push_back(d);
}

void Student::ComputeAverage()
{
	double all = 0;
	int size = 0;
	for(double d : score)
	{
		all += d;
		++size;
	}

	average = all / size;
}

string Student::GetName()
{
	return name;
}

string Student::GetUID()
{
	return UID;
}

double Student::GetAverage()
{
	ComputeAverage();
	return average;
}
