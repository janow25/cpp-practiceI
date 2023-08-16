//
// Created by Janne Nowak on 16.08.23.
//

#pragma once

#include "Human.h"

#include "vector"
#include "string"

using namespace std;

using moduleType = vector<string>;

class Prof : public Human {
    moduleType modules;
public:
    Prof(string Name, byte Alter, moduleType mods);

    void reden(string text);
    void essen();
    void trinken();

    moduleType getModules();
    string getModulesAsString();
    void setModules(moduleType mods);
};
