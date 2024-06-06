//Jay Bacchus
// Project 3- Tortoise.cpp
//Professor Tong Yi
//Implement constructors and methods in Tortoise.hpp.

#include "Tortoise.hpp"
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

Tortoise::Tortoise() {
    position = 0;
    patterns ={3,3,3,3,3,-6,-6,1,1,1};
}

Tortoise::Tortoise(int* arr, int size, int position) {
    this->patterns.assign(arr, arr + size);
    this->position = position;
}

Tortoise::Tortoise(std::vector<int> patterns, int position) {
    for(int i = 0; i<patterns.size();i++){
    this -> patterns.push_back(patterns[i]);
    }
    this->position = position;
}

void Tortoise::move() {
    int index = rand() % patterns.size();
    int stepsToMove = patterns[index];
    position += stepsToMove;
}

int Tortoise::getPosition() const {
    return position;
}

void Tortoise::setPosition(int position) {
    this->position = position;
}