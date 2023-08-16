//
// Created by Janne Nowak on 16.08.23.
//

#pragma once

#include "Human.h"

class Student : public Human {
    long MatrikelNummer;
public:
    Student(string Name, byte Alter, long MNR);

    void reden(string text) override;
    void essen() override;
    void trinken() override;

    long getMatrikelNummer() const;
    void setMatrikelNummer(long MNR);
};
