//
// Created by Janne Nowak on 16.08.23.
//

#pragma once

#include "Student.h"

#include "string"

using namespace std;

class IUStudent : public Student {
    string iuHoodieFarbe;

public:
    IUStudent(std::string Name, std::byte Alter, long MNR, string hoodieFarbe);
    void hoodieTragen();
};
