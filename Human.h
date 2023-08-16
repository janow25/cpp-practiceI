//
// Created by Janne Nowak on 16.08.23.
//

#pragma once

#include "string"

using namespace std;

class Human {
protected:
    string name;
    byte alter;
public:
    virtual void reden(string text) {};
    virtual void essen() {};
    virtual void trinken() {};

    string getName();
    void setName(string tmpName);
    byte getAlter();
    void setAlter(byte tmpAlter);
};
