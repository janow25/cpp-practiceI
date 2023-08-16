#include <iostream>
#include "string"

#include "Student.h"
#include "IUStudent.h"
#include "Prof.h"

using namespace std;

int main() {

    Student student = Student("Fritz", static_cast<byte>(6), 1209432);

    student.essen();
    student.trinken();

    cout << "Student: " << student.getName() << " Alter: " << static_cast<int>(student.getAlter()) << " MNR: " << student.getMatrikelNummer() << endl;

    IUStudent iustudent = IUStudent("Jörg", static_cast<byte>(31), 1209433, "Orange");

    iustudent.essen();
    iustudent.trinken();
    iustudent.hoodieTragen();

    cout << "Student: " << iustudent.getName() << " Alter: " << static_cast<int>(iustudent.getAlter()) << " MNR: " << iustudent.getMatrikelNummer() << endl;

    Prof prof = Prof("Ivo", static_cast<byte>(33), {"C++", "C++ Performance"});

    prof.essen();
    prof.trinken();

    cout << "Prof: " << prof.getName() << " Alter: " << static_cast<int>(prof.getAlter()) << " Modules: " << prof.getModulesAsString() << endl;

    return 0;
}
