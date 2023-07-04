#pragma once
#ifndef STUDENT_H
#define STUDENT_H
#include "Course.h"
#include <vector>
class Course;

class Student
{
private:
	std::string name;
	std::vector	<Course*> courses;
public:
	Student(const std::string& name);
	std::string getName() const;
	void enrollCourse(Course* course);
	void displayCourses() const;

};

#endif // !STUDENT_H
