# Optimus-Prime vs Megatron

**Epic C++ showdown simulation** of two legendary Transformers rivals: Optimus Prime and Megatron. This project models their characteristics, weapons, and battle logic in a structured, object-oriented C++ program.

---

##  Table of Contents
- [About](#about)  
- [Project Structure](#project-structure)  
- [Building & Running](#building--running)  
- [Design & Architecture](#design--architecture)
- [Usage Example](#usage-example)  
  


---

## About
This program simulates a battle between Optimus Prime and Megatron using C++ classes and logic. 
---

## Project Structure

1. # main.cpp : 
 Entry point – runs the battle simulation
2. # characters.h :
 Character class declarations  and Robot class declaration
3. # characters.cpp : 
Character class implementations
4. # robots.cpp :
Robot-specific logic 
5. # weapon.h :
 Weapon class declaration
6. # weapon.cpp :
 Weapon class implementation
7. # README.md : 
Project documentation


## Building & Running:
To run the source file:
``
g++ main.cpp characters.cpp Robots.cpp Weopon.cpp -o main
``

``
./main
``

## Design & Architecture

1. Characters (Abstract Base Class)
  - Represents a general character in the battle.
  - Attributes:
    - string name → character’s name
  - Methods:
    - get_name() → returns the name
    - attack(Robots &r1, Weopon we) → pure virtual, implemented by subclasses

- Robots (Subclass of Characters)
  - Represents battle robots (Optimus Prime, Megatron).
  - Attributes:
    - int health = 100 → initial health
    - Weopon w[3] → array of 3 weapons
  - Methods:
    - Constructor → initializes name and weapons
    - get_health() → returns current health
    - get_name() → overridden from Characters
    - attack(Robots &r1, Weopon we) → executes attack on another robot:
      - If shot hits → reduces opponent’s health
      - If missed → prints "Shot missed!"

- Weopon Class
  - Represents a robot’s weapon.
  - Attributes:
    - string name → weapon name
    - int damage → attack damage
    - int accuracy → hit probability (percentage)
  - Methods:
    - get_name(), get_damage(), get_accuracy()
    - shot(int accuracy) → generates random number to check hit success

- Main.cpp (Battle Simulation)
  - Creates two robots (Optimus Prime & Megatron) with 3 weapons each
  - Displays robots’ weapons and health
  - Runs a turn-based battle loop:
  - Each turn, one robot selects a weapon and attacks
  - Health decreases if attack hits
  - When a robot’s health ≤ 0 → the opponent is declared the winner

## Usage Example: 
```
Welcome to the battle between Optimus Prime and Megatron!
Each robot has 3 weopons to choose from:
Optimus Primes Weopons:
Optimus Prime's Weopons:
1. Ion rifl (Damage: 6, Accuracy: 100%)
2. Energon swords (Damage: 12, Accuracy: 80%)
3. Shoulder canon (Damage: 45, Accuracy: 25%)
-----------------------------------------------
Optimus Primes Weopons:
Megatron's Weopons:
1. Fusion cannon (Damage: 9, Accuracy: 90%)
2. Tank Mode (Damage: 60, Accuracy: 15%)
3. Fusion Sword (Damage: 18, Accuracy: 70%)
-----------------------------------------------
Optimus Prime's turn.
Optimus Prime's health: 100
 Choose a weopon (1-3): 
Optimus Prime's Weopons:
1. Ion rifl (Damage: 6, Accuracy: 100%)
2. Energon swords (Damage: 12, Accuracy: 80%)
3. Shoulder canon (Damage: 45, Accuracy: 25%)
3
Shot successful! Megatron takes 45 damage.
Megatron's turn.
Megatron's health: 55
 Choose a weopon (1-3):
Megatron's Weopons:
1. Fusion cannon (Damage: 9, Accuracy: 90%)
2. Tank Mode (Damage: 60, Accuracy: 15%)
3. Fusion Sword (Damage: 18, Accuracy: 70%)
2
Shot missed!
Optimus Prime's turn.
Optimus Prime's health: 100
 Choose a weopon (1-3):
Optimus Prime's Weopons:
1. Ion rifl (Damage: 6, Accuracy: 100%)
2. Energon swords (Damage: 12, Accuracy: 80%)
3. Shoulder canon (Damage: 45, Accuracy: 25%)
3
Shot successful! Megatron takes 45 damage.
Megatron's turn.
Megatron's health: 55
 Choose a weopon (1-3):
Megatron's Weopons:
1. Fusion cannon (Damage: 9, Accuracy: 90%)
2. Tank Mode (Damage: 60, Accuracy: 15%)
3. Fusion Sword (Damage: 18, Accuracy: 70%)
2
Shot missed!
Optimus Prime's turn.
Optimus Prime's health: 100
 Choose a weopon (1-3):
Optimus Prime's Weopons:
1. Ion rifl (Damage: 6, Accuracy: 100%)
2. Energon swords (Damage: 12, Accuracy: 80%)
Megatron's turn.
Megatron's health: 55
 Choose a weopon (1-3):
Megatron's Weopons:
1. Fusion cannon (Damage: 9, Accuracy: 90%)
2. Tank Mode (Damage: 60, Accuracy: 15%)
3. Fusion Sword (Damage: 18, Accuracy: 70%)
2
Shot missed!
Optimus Prime's turn.
Optimus Prime's health: 100
 Choose a weopon (1-3):
Optimus Prime's Weopons:
1. Ion rifl (Damage: 6, Accuracy: 100%)
2. Energon swords (Damage: 12, Accuracy: 80%)
Shot missed!
Optimus Prime's turn.
Optimus Prime's health: 100
 Choose a weopon (1-3):
Optimus Prime's Weopons:
1. Ion rifl (Damage: 6, Accuracy: 100%)
2. Energon swords (Damage: 12, Accuracy: 80%)
 Choose a weopon (1-3):
Optimus Prime's Weopons:
1. Ion rifl (Damage: 6, Accuracy: 100%)
2. Energon swords (Damage: 12, Accuracy: 80%)
3. Shoulder canon (Damage: 45, Accuracy: 25%)
3
Shot missed!
Megatron's turn.
Megatron's health: 55
 Choose a weopon (1-3): 
Megatron's Weopons:
1. Fusion cannon (Damage: 9, Accuracy: 90%)
2. Tank Mode (Damage: 60, Accuracy: 15%)
3. Fusion Sword (Damage: 18, Accuracy: 70%)
3
Shot missed!
Optimus Prime's turn.
Optimus Prime's health: 100
 Choose a weopon (1-3): 
Optimus Prime's Weopons:
1. Ion rifl (Damage: 6, Accuracy: 100%)
2. Energon swords (Damage: 12, Accuracy: 80%)
3. Shoulder canon (Damage: 45, Accuracy: 25%)
1
Shot successful! Megatron takes 6 damage.
Megatron's turn.
Megatron's health: 49
 Choose a weopon (1-3):
Megatron's Weopons:
1. Fusion cannon (Damage: 9, Accuracy: 90%)
2. Tank Mode (Damage: 60, Accuracy: 15%)
3. Fusion Sword (Damage: 18, Accuracy: 70%)
2
Shot missed!
Optimus Prime's turn.
Optimus Prime's health: 100
 Choose a weopon (1-3):
Optimus Prime's Weopons:
1. Ion rifl (Damage: 6, Accuracy: 100%)
2. Energon swords (Damage: 12, Accuracy: 80%)
3. Shoulder canon (Damage: 45, Accuracy: 25%)
3
Shot missed!
Megatron's turn.
Megatron's health: 49
 Choose a weopon (1-3):
Megatron's Weopons:
1. Fusion cannon (Damage: 9, Accuracy: 90%)
2. Tank Mode (Damage: 60, Accuracy: 15%)
3. Fusion Sword (Damage: 18, Accuracy: 70%)
3
Shot missed!
Optimus Prime's turn.
Optimus Prime's health: 100
 Choose a weopon (1-3):
Optimus Prime's Weopons:
1. Ion rifl (Damage: 6, Accuracy: 100%)
2. Energon swords (Damage: 12, Accuracy: 80%)
3. Shoulder canon (Damage: 45, Accuracy: 25%)
3
Shot missed!
Megatron's turn.
Megatron's health: 49
 Choose a weopon (1-3):
Megatron's Weopons:
1. Fusion cannon (Damage: 9, Accuracy: 90%)
2. Tank Mode (Damage: 60, Accuracy: 15%)
3. Fusion Sword (Damage: 18, Accuracy: 70%)
2
Shot missed!
Optimus Prime's turn.
Optimus Prime's health: 100
 Choose a weopon (1-3):
Optimus Prime's Weopons:
1. Ion rifl (Damage: 6, Accuracy: 100%)
2. Energon swords (Damage: 12, Accuracy: 80%)
3. Shoulder canon (Damage: 45, Accuracy: 25%)
1
Shot successful! Megatron takes 6 damage.
Megatron's turn.
Megatron's health: 43
 Choose a weopon (1-3):
Megatron's Weopons:
1. Fusion cannon (Damage: 9, Accuracy: 90%)
2. Tank Mode (Damage: 60, Accuracy: 15%)
3. Fusion Sword (Damage: 18, Accuracy: 70%)
3
Shot successful! Optimus Prime takes 18 damage.
Optimus Prime's turn.
Optimus Prime's health: 82
 Choose a weopon (1-3):
Optimus Prime's Weopons:
1. Ion rifl (Damage: 6, Accuracy: 100%)
2. Energon swords (Damage: 12, Accuracy: 80%)
3. Shoulder canon (Damage: 45, Accuracy: 25%)
2
Shot successful! Megatron takes 12 damage.
Megatron's turn.
Megatron's health: 31
 Choose a weopon (1-3):
Megatron's Weopons:
1. Fusion cannon (Damage: 9, Accuracy: 90%)
2. Tank Mode (Damage: 60, Accuracy: 15%)
3. Fusion Sword (Damage: 18, Accuracy: 70%)
1
Shot successful! Optimus Prime takes 9 damage.
Optimus Prime's turn.
Optimus Prime's health: 73
 Choose a weopon (1-3):
Optimus Prime's Weopons:
1. Ion rifl (Damage: 6, Accuracy: 100%)
2. Energon swords (Damage: 12, Accuracy: 80%)
3. Shoulder canon (Damage: 45, Accuracy: 25%)
3
Shot successful! Megatron takes 45 damage.
Megatron has been defeated!
Optimus Prime wins the battle!

```

