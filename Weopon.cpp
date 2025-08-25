  
#include "Weopon.h"


Weopon:: Weopon() {

}
string Weopon:: get_name() {
   return name;

}
int Weopon:: get_demage() {
   return demage;

}   
int Weopon:: get_accuracy() {
   return accuracy;

}
Weopon :: Weopon (string name ,int demage,int accuracy){
    this->accuracy=accuracy;
    this->demage=demage;
    this->name=name;
}
bool Weopon:: shot (int accuracy){
 srand(time(0));
    int num = (rand() % 100) + 1;
if (num>accuracy)return false;
else return true;
}






