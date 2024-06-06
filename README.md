# Hare and Tortoise Competition Simulation

## Overview
This project simulates a race between a hare and a tortoise on a road represented by blocks. The race continues until either the hare or the tortoise reaches the end of the road. The outcome is displayed, indicating which animal won or if it was a tie.

## Project Structure
The project consists of several components:

- **Competition.hpp, Competition.cpp**: Implements the `Competition` class which orchestrates the race and displays the outcome.
- **Hare.hpp, Hare.cpp**: Implements the `Hare` class which models the hare's behavior and movement patterns.
- **Tortoise.hpp, Tortoise.cpp**: Implements the `Tortoise` class which models the tortoise's behavior and movement patterns.
- **Road.hpp, Road.cpp**: Implements the `Road` class which represents the road with blocks and provides methods to mark and display the road.
- **Hare_main.cpp**: Test program that tests the `Hare` class functionalities.


## Classes

### Competition Class
The `Competition` class coordinates the race between the hare and the tortoise:
- **Constructor**: 
  - `Competition()`: Default constructor.
  - `Competition(Hare coney, Tortoise cooter, int length)`: Non-default constructor with parameters for hare, tortoise, and road length.
- **Methods**:
  - `void play()`: Method that runs the simulation of the race, displaying each round's state and the final outcome.

### Hare Class
The `Hare` class models the behavior of the hare:
- **Constructors**:
  - `Hare()`: Default constructor that initializes default movement patterns.
  - `Hare(std::vector<int> patterns, int position)`: Constructor that takes a vector of movement patterns and an initial position.
  - `Hare(int* arr, int size, int position)`: Constructor that takes an array of movement patterns, size, and an initial position.
- **Methods**:
  - `void move()`: Moves the hare based on a random movement pattern.
  - `int getPosition() const`: Returns the current position of the hare.
  - `void setPosition(int position)`: Sets the position of the hare.

### Tortoise Class
The `Tortoise` class models the behavior of the tortoise:
- **Constructors**:
  - `Tortoise()`: Default constructor that initializes default movement patterns.
  - `Tortoise(std::vector<int> patterns, int position)`: Constructor that takes a vector of movement patterns and an initial position.
  - `Tortoise(int* arr, int size, int position)`: Constructor that takes an array of movement patterns, size, and an initial position.
- **Methods**:
  - `void move()`: Moves the tortoise based on a random movement pattern.
  - `int getPosition() const`: Returns the current position of the tortoise.
  - `void setPosition(int position)`: Sets the position of the tortoise.

### Road Class
The `Road` class represents the road on which the race takes place:
- **Constructors**:
  - `Road()`: Default constructor that initializes a road with 70 blocks.
  - `Road(int length)`: Constructor that initializes a road with a specified number of blocks.
- **Methods**:
  - `void mark(int index, char ch)`: Marks a specific block on the road with a character (either 'H' for hare or 'T' for tortoise).
  - `void display() const`: Displays the current state of the road.
  - `int length() const`: Returns the length (number of blocks) of the road.

## Compilation and Usage

### Compilation
To compile the test program, use the following command:
```bash
g++ -std=c++11 Hare_main.cpp Hare.cpp -o hare_tester
```
To run the test program with different options to test the Hare class:
```bash
./hare_tester [option]
```
Replace [option] with one of the following options:

- A: Test default constructor of Hare.
- B: Test constructor Hare(std::vector<int> patterns, int position).
- C: Test constructor Hare(int* arr, int size, int position).
- D: Test the move() method of Hare.
- E: Test the getPosition() method of Hare.
- F: Test the setPosition(int position) method of Hare.

To compile the program, use the following command:
```bash
g++ -std=c++11 Competition.cpp Hare.cpp Tortoise.cpp Road.cpp -o competition_simulator
```
To run the simulation program:

```bash
./competition_simulator
```
