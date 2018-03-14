#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Student
{
public:
	Student(string&, string&);

	void ScoreInput(double&);

	string GetName();
	string GetUID();
	double GetAverage();

protected:
	void ComputeAverage();

private:
	string name;
	string UID;
	vector<double> score;
	double average;
};

#endif
