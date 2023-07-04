#include "Student.h"
#include <iostream>

int main()
{
    Student student1("Mohammad");
    Student student2("Ali");
    Student student3("Zahra");

    Course course1("Introduction to Programming");
    Course course2("Data Structures");
    Course course3("Introduction to Algorithm");

    course1.enrollStudent(&student1);
    course1.enrollStudent(&student2);
    course2.enrollStudent(&student2);
    course2.enrollStudent(&student3);
    course3.enrollStudent(&student1);
    course3.enrollStudent(&student3);

    student1.enrollCourse(&course1);
    student1.enrollCourse(&course3);
    student3.enrollCourse(&course3);
    student3.enrollCourse(&course2);
    student2.enrollCourse(&course1);
    student2.enrollCourse(&course2);


    student1.displayCourses();
    student2.displayCourses();
    student3.displayCourses();

    course1.displayStudents();
    course2.displayStudents();
    course3.displayStudents();

    return 0;
}
