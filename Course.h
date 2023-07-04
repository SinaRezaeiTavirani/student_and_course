#pragma once
#ifndef COURSE_H
#define COURSE_H
#include <string>
#include "Student.h"
#include <vector>




class Student;


class Course
{
private:
	std::string name;
	std::vector<Student*> students;
public:
	Course(const std::string& name);
	std::string getName() const;
	void enrollStudent(Student* student);
	void displayStudents();
};

#endif // !COURSE_H
