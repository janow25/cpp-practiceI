//
// Created by Janne Nowak on 16.08.23.
//

#include "IUStudent.h"

#include <utility>
#include <iostream>


IUStudent::IUStudent(std::string Name, std::byte Alter, long MNR, string hoodieFarbe) : Student(Name, Alter, MNR) {
    iuHoodieFarbe = std::move(hoodieFarbe);
}

void IUStudent::hoodieTragen() {
    cout << name << " zieht den IU-Hoodie in " << iuHoodieFarbe << " an" << endl;
}