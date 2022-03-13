#pragma once


#include <iostream>
#include "Entities.h"
using namespace std;


void ShowMenu() {
	system("cls");
	cout << endl;
	cout << "         __ -Choose- __" << endl << endl;
	cout << "  ____________________________" << endl;
	cout << endl;
	cout << " |  1 --> Show All Teachers.. |" << endl;
	cout << " |  2 --> Create Group..      |" << endl;
	cout << " |  3 --> Show Groups..       |" << endl;
	cout << "  ____________________________" << endl;
}



Teacher** teachers = new Teacher * [] {
	new Teacher{
		new char[] {"John Johnlu"},
		new char[] {"Programmer"},
		new char[] {"2"}
	},
		new Teacher{
			new char[] {"Allison Allisonzade"},
			new char[] {"IT"},
			new char[] {"3"}
	},
		new Teacher{
			new char[] {"Richard Richardli"},
			new char[] {"Designer"},
			new char[] {"5"}
	}
};



Student** students = new Student * [] {
	new Student{
		new char[] {"Aysel Ayselzade"},
		new char[] {"Designer"},
		20
	},
		new Student{
			new char[] {"Akif Akifli"},
			new char[] {"Programmer"},
			19
	},

};


Director** directors = new Director * [] {
	new Director{
		new char[] {"David Davidzade"},
		new char[] {"Director"},
		new char[] {"34"}
	}
};



void ShowTeacher(Teacher* teacher) {
	cout << endl;
	cout << "  Teacher's Id {" << teacher->id << "}" << endl << endl;
	cout << "  Teacher's fullname --> " << teacher->fullname << endl;
	cout << "  Teacher's speciality --> " << teacher->speciality << endl;
	cout << "  Teacher's experience --> " << teacher->experience << endl;
}

void ShowAllTeachers(Academy* academy) {
	cout << endl;
	for (size_t i = 0; i < academy->teachers_count; i++)
	{
		ShowTeacher(teachers[i]);
	}
}



void ShowStudent(Student* student) {
	cout << endl;
	cout << "  Student's fullname --> " << student->fullname << endl;
	cout << "  Student's speciality --> " << student->class_specialty << endl;
	cout << "  Student's age --> " << student->age << endl;
}


void ShowAllStudentsInAcademy(Academy* academy) {
	cout << endl;
	for (size_t i = 0; i < academy->groups[i]->students_count; i++)
	{
		ShowStudent(students[i]);
	}
}


void ShowAllStudentsInGroup(Group* group) {
	cout << endl;
	for (size_t i = 0; i < group->students_count; i++)
	{
		ShowStudent(students[i]);
	}
}


void ShowAllGroups(Academy* academy) {
	cout << endl;
	for (size_t i = 0; i < academy->groups_count; i++)
	{
		cout << " Group No {" << i + 1 << "}." << endl;
		cout << "  Group's name --> " << academy->groups[i]->group_name << endl;
		cout << "  Group's specialty --> " << academy->groups[i]->speciality << endl;
		cout << "  Group's teacher -->";
		ShowTeacher(academy->groups[i]->teacher);
		cout << endl;
		cout << "  Group's students --> ";
		ShowAllStudentsInGroup(academy->groups[i]);
		cout << endl;
	}
}