//Jay Bacchus
// Project 3- Road.cpp
//Professor Tong Yi
//Implement constructors and methods in Road.hpp.

#include "Road.hpp"
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

Road::Road() {
    blocks.resize(70,' ');
}


Road::Road(int length) {
    if (length < 1) {
        length = 70;
    }
    blocks.resize(length, ' ');
}

void Road::mark(int index, char ch) {
    if (index >= 0 && index < blocks.size()) {
        blocks[index] = ch;
    }
}

void Road::display() const {
    for (char block : blocks) {
        cout << block;
    }
    cout << endl;
}



int Road::length() const {
    return blocks.size();
}
