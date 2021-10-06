#ifndef Student_H
#define Student_H
#include<iostream>
#include<string>
#include"UniversityStaff.h"
using std::ostream;
using std::string;
using std::endl;
class Student{
    protected:
        string universityName;
        string registrationNumber;
        UniversityStaff proctor;
    public:
        Student();
        Student(string universityName, string registrationNumber, UniversityStaff proctor);
        Student(const Student& student);
        Student& operator=(const Student& student);
        friend ostream& operator<<(ostream& os, const Student& student);
};
#endif