#include"Student.h"

Student::Student(){}
Student::Student(string universityName, string registrationNumber, UniversityStaff proctor){
    this->universityName = universityName;
    this->registrationNumber = registrationNumber;
    this->proctor = proctor;
}
Student::Student(const Student& student){
    universityName = student.universityName;
    registrationNumber = student.registrationNumber;
    proctor = student.proctor;
}
Student& Student::operator=(const Student& student){
    universityName = student.universityName;
    registrationNumber = student.registrationNumber;
    proctor = student.proctor;
    return *this;
}
ostream& operator<<(ostream& os, const Student& student){
    os << student.universityName << endl;
    os << student.registrationNumber << endl;
    os << student.proctor << endl;
    return os;
}