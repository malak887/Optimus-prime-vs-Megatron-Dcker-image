#include "characters.h"
#include <iostream>
using namespace std;
 Characters::Characters(){}

Characters::Characters(string name) {
this->name=name;
   
}

string Characters::get_name() {
   return name;
}

