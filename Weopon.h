#ifndef WEOPON_H   
#define WEOPON_H

#include <iostream>
#include <cstdlib>  
#include <ctime>  
#include <string>
using namespace std;

class Weopon {

  
private:
int demage;
int accuracy;
public:
string name;
string get_name();
int get_demage();
int get_accuracy();
Weopon();

Weopon (string name ,int demage,int accuracy);
bool shot (int accuracy);
};


#endif
