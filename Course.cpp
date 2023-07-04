#include "Course.h"
#include <iostream>

Course::Course(const std::string& name) : name(name)
{
}

std::string Course::getName() const
{
    return name;
}

void Course::enrollStudent(Student* student)
{
    students.push_back(student);
}

void Course::displayStudents()
{
    std::cout << "Students enrolled in " << name << ":\n";
    for (const auto& student : students)
        std::cout << "- " << student->getName() << std::endl;
}
