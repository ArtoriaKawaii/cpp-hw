#include"UniversityStaff.h"
#include"Student.h"
#include"ScienceStudent.h"
using std::cout;
using std::endl;
int main(){
    Student test1("NSYSU", "B123012345", UniversityStaff("John"));
    cout << "Student Test1(constructed) Data :\n" << test1 << endl;
    Student test2;
    test2 = test1;
    cout << "Student Test2(assigned) Data :\n" << test2 << endl;
    test2 = Student(test1);
    cout << "Student Test2(copy constructed) Data :\n" << test2 << endl;
    ScienceStudent test3("NTU", "C222012345", UniversityStaff("Curry"), "Math", "Undergraduate");
    cout << "ScienceStudent Test1(constructed) Data :\n" << test3 << endl;
    ScienceStudent test4;
    test4 = test3;
    cout << "ScienceStudent Test2(assigned) Data :\n" << test4 << endl;
    test4 = ScienceStudent(test3);
    cout << "ScienceStudent Test2(copy constructed) Data :\n" << test4 << endl;
    return 0;
}
