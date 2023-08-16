//
// Created by Janne Nowak on 16.08.23.
//

#include "Student.h"

#include <iostream>
#include <utility>

Student::Student(std::string Name, std::byte Alter, long MNR) {
    name = std::move(Name);
    alter = Alter;

    MatrikelNummer = MNR;
}

long Student::getMatrikelNummer() const {
    return MatrikelNummer;
}

void Student::setMatrikelNummer(long MNR) {
    MatrikelNummer = MNR;
}

void Student::reden(std::string text) {
    cout << text << endl;
}

void Student::essen() {
    cout << "Student: Mhm....Lecker Lecker" << endl;
}

void Student::trinken() {
    cout << "Student: Schlürf... Schlürf" << endl;
}