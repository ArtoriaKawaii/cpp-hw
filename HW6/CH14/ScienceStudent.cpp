#include"ScienceStudent.h"

ScienceStudent::ScienceStudent() : Student(){}
ScienceStudent::ScienceStudent(string universityName, string registrationNumber, UniversityStaff proctor, string course, string graduate) : Student(universityName, registrationNumber, proctor){
    this->course = course;
    this->graduate = graduate;
}
ScienceStudent::ScienceStudent(const ScienceStudent& scienceStudent) : Student(scienceStudent){
    course = scienceStudent.course;
    graduate = scienceStudent.graduate;
}
ScienceStudent& ScienceStudent::operator=(const ScienceStudent& scienceStudent){
    Student::operator=(scienceStudent);
    course = scienceStudent.course;
    graduate = scienceStudent.graduate;
    return *this;
}
ostream& operator<<(ostream& os, const ScienceStudent& scienceStudent){
    os << scienceStudent.universityName << endl;
    os << scienceStudent.registrationNumber << endl;
    os << scienceStudent.proctor << endl;
    os << scienceStudent.course << endl;
    os << scienceStudent.graduate << endl;
    return os;
}