//
// Created by Janne Nowak on 16.08.23.
//

#include "Prof.h"

#include "iostream"
#include "string"
#include <numeric>

#include <utility>

Prof::Prof(std::string Name, std::byte Alter, moduleType mods) {
    name = std::move(Name);
    alter = Alter;
    modules = std::move(mods);
}

moduleType Prof::getModules() {
    return modules;
}

string Prof::getModulesAsString() {
    string str = accumulate(modules.begin() + 1, modules.end(), modules[0],
        [](const std::string& a, const string& b){
            return a + ", " + b;
        });

    return "[" + str + "]";
}

void Prof::setModules(moduleType mods) {
    modules = std::move(mods);
}

void Prof::reden(std::string text) {
    cout << text << endl;
}

void Prof::essen() {
    cout << "Prof: Mhm....Lecker Lecker" << endl;
}

void Prof::trinken() {
    cout << "Prof: Schlürf... Schlürf" << endl;
}