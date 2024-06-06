//Jay Bacchus
// Project 3- Competition.cpp
//Professor Tong Yi
//Implement constructors and methods in Competition.hpp.

#include "Competition.hpp"
#include <iostream>
#include <cstdlib>
using namespace std;

// Default Constructor
Competition::Competition()
    : rabbit(), tor(), lane() {} // Initializes lane with default length 

// Non-Default Constructor
Competition::Competition(Hare coney, Tortoise cooter, int length)
    : rabbit(coney), tor(cooter), lane(length) {} // Initializes lane with specified length

// Method play defines the competition logic
void Competition::play() {
    int lastBlock = lane.length() - 1; // Use the length method to determine the last block index
    int round = 1;

    while (rabbit.getPosition() < lastBlock && tor.getPosition() < lastBlock) {
        // Rabbit's move
        rabbit.move();
        if (rabbit.getPosition() < 0) {
            rabbit.setPosition(0); // Place rabbit at the start if it moves before the first block
        } else if (rabbit.getPosition() > lastBlock) {
            rabbit.setPosition(lastBlock); // Place rabbit at the last block if it moves past the last block
        }
        lane.mark(rabbit.getPosition(), 'H'); // Correct method call to mark the position with 'H'

        // Tortoise's move
        tor.move();
        if (tor.getPosition() < 0) {
            tor.setPosition(0);
        } else if (tor.getPosition() > lastBlock) {
            tor.setPosition(lastBlock);
        }
        lane.mark(tor.getPosition(), 'T'); // Mark the position with 'T'

        // Display round details
        cout << "Round " << round << ": ";
        lane.display(); // Prints the current state of the road

        // Check if both are on the same block
        if (rabbit.getPosition() == tor.getPosition()) {
            cout << "Ouch. Tortoise bites hare." << endl;
        }

        for (int i = 0; i < lane.length(); i++) {
            lane.mark(i, ' '); // Reset each block to a space
        }
        round++;
    }

    // Determine the winner
    if (rabbit.getPosition() >= lastBlock) {
        cout << "Yuck. Hare wins!" << endl;
    } else if (tor.getPosition() >= lastBlock) {
        cout << "Yay!!! Tortoise wins." << endl;
    } else {
        cout << "It is a tie." << endl;
    }
}
