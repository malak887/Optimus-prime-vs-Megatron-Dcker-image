
#include "characters.h"
#include "Weopon.h"
#include<iostream>
using namespace std;

 Robots::Robots (){

}
Robots::Robots(string name, Weopon w1, Weopon w2, Weopon w3) {
this->name=name;
this->w[0]=w1;
this->w[1]=w2;  
this->w[2]=w3;
}

int Robots:: get_health() {
   return health;

}
string  Robots::get_name() {
   return name;
}

void Robots::attack(Robots &r1, Weopon we) {
    if (we.shot(we.get_accuracy())) {
        r1.health -= we.get_demage();
        cout << "Shot successful! " << r1.get_name()  << " takes " << we.get_demage() << " damage." << endl;
    } else {
        cout << "Shot missed!" << endl;
    }
}
