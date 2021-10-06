#ifndef ScienceStudent_H
#define ScienceStudent_H
#include<iostream>
#include<string>
#include"Student.h"
using std::ostream;
using std::string;
using std::endl;
class ScienceStudent : public Student{
    private:
        string course;
        string graduate;//Undergraduate or Postgraduate
    public:
        ScienceStudent();
        ScienceStudent(string universityName, string registrationNumber, UniversityStaff proctor, string course, string graduate);
        ScienceStudent(const ScienceStudent& scienceStudent);
        ScienceStudent& operator=(const ScienceStudent& scienceStudent);
        friend ostream& operator<<(ostream& os, const ScienceStudent& scienceStudent);
};
#endif