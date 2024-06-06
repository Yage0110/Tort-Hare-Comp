//Jay Bacchus
// Project 3- Hare.cpp
//Professor Tong Yi
//Implement constructors and methods in Hare.hpp.

#include "Hare.hpp"
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

Hare::Hare(){
    position = 0;
    patterns ={0,0,9,9,-12,1,1,1,-2,-2};
}
Hare::Hare(vector<int> patterns, int position){
   for(int i = 0; i<patterns.size();i++){
    this -> patterns.push_back(patterns[i]);
   }
   this->position = position;
}

Hare::Hare(int* arr, int size, int position){
    this->patterns.assign(arr, arr + size);
    this->position = position;
}

void Hare::move(){
    int index = rand() % patterns.size();
    int stepsToMove = patterns[index];
    position += stepsToMove;
    
}

int Hare::getPosition() const{
    return position;
} 

void Hare::setPosition(int newPosition) {
    position = newPosition;
}