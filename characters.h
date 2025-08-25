#ifndef CHARACTERS_H   
#define CHARACTERS_H
#include <iostream>
#include <cstdlib>  
#include <ctime>  
#include <string>
#include "Weopon.h"

using namespace std;
class Robots;   // Forward declaration

class Characters {
protected:
    string name;

public:
    Characters();   
    Characters(string name); 

    string get_name();  
  virtual void attack(class Robots &r1, Weopon we) = 0;
   
};

class Robots : public Characters{
private:
int health=100;

public:
Robots ();
Robots(string name, Weopon w1, Weopon w2, Weopon w3);
Weopon w[3];

int get_health();
string get_name();
 void attack(Robots &r1, Weopon we) override;
};

#endif
