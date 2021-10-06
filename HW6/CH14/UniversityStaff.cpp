#include"UniversityStaff.h"

UniversityStaff::UniversityStaff(){}
UniversityStaff::UniversityStaff(string theName){
    name = theName;
}
UniversityStaff::UniversityStaff(const UniversityStaff& theObject){
    name = theObject.name;
}
string UniversityStaff::getName() const{
    return name;
}
UniversityStaff& UniversityStaff::operator=(const UniversityStaff& rtSide){
    name = rtSide.name;
    return *this;
}
//Didn't use
istream& operator>>(istream& inStream, UniversityStaff& staffObject){
    inStream >> staffObject.name;
    return inStream;
}
ostream& operator<<(ostream& outStream, const UniversityStaff& staffObject){
    outStream << staffObject.name;
    return outStream;
}