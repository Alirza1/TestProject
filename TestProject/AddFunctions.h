#pragma once

#include <iostream>
#include "Entities.h"
using namespace std;

void AddGroupToAcademy(Academy*& academy, Group*& new_group)
{
	int groups_count = academy->groups_count;
	Group** new_groups = new Group*[groups_count+1]{};
	for (int x = 0; x < groups_count; x++)
	{
		new_groups[x] = academy->groups[x];
	}
	new_groups[groups_count] = new_group;
	new_groups = academy->groups;
	academy->groups = nullptr;
	academy->groups_count++;
}

void AddStudentToGroup(Group*& group, Student*& student)
{
	int students_count = group->students_count;
	Student** new_students = new Student*[students_count + 1]{};
	for (int x = 0; x < students_count; x++)
	{
		new_students[x] = group->students[x];
	}
	new_students[students_count] = student;
	group->students = new_students;
	new_students = nullptr;
	group->students_count++;
}
