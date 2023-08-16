//
// Created by Janne Nowak on 16.08.23.
//

#include "Human.h"

#include <utility>

#include "string"

using namespace std;

string Human::getName() {
    return name;
}

void Human::setName(string tmpName) {
    name = std::move(tmpName);
}

byte Human::getAlter() {
    return alter;
}

void Human::setAlter(byte tmpAlter) {
    alter = tmpAlter;
}
