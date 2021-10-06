#ifndef UniversityStaff_H
#define UniversityStaff_H
#include<iostream>
#include<string>
using std::string;
using std::istream;
using std::ostream;
class UniversityStaff{
    private:
        string name;
    public:
        UniversityStaff();
        UniversityStaff(string theName);
        UniversityStaff(const UniversityStaff& theObject);
        string getName() const;
        UniversityStaff& operator=(const UniversityStaff& rtSide);
        friend istream& operator>>(istream& inStream, UniversityStaff& staffObject);
        friend ostream& operator<<(ostream& outStream, const UniversityStaff& staffObject);
};
#endif