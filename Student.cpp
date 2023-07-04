#include "Student.h"
#include <iostream>

Student::Student(const std::string& name): name(name)
{
}

std::string Student::getName() const
{
    return name;
}

void Student::enrollCourse(Course* course)
{
    courses.push_back(course);
}

void Student::displayCourses() const
{
    std::cout << "Courses enrolled by " << name << std::endl;
    for (const auto& course : courses) {
        std::cout << "- " << course->getName() << std::endl;
    }
}
