#pragma once
#include<iostream>
using namespace std;

struct Director {
	char* fullname;
	char* speciality;
	char* experience;

};

struct Teacher {
	char* fullname;
	char* speciality;
	char* experience;
	int id = 0;
};


struct Student {
	char* fullname;
	char* class_specialty;
	int age;
};


struct Group {
	char* group_name;
	char* speciality;
	Teacher* teacher;
	Student** students;
	int students_count = 0;
};


struct Academy {
	Director* director;
	Teacher** teachers;
	int teachers_count = 0;
	Group** groups;
	Academy* academy;
	int groups_count = 0;
};

