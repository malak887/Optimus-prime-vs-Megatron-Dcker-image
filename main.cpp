#include<iostream>
#include "characters.h"
#include "Weopon.h"
using namespace std;
void display_weopons(Robots r){
    cout<<r.get_name()<<"'s Weopons:"<<endl;
    for(int i=0;i<3;i++){
        cout<<i+1<<". "<<r.w[i].get_name()<<" (Damage: "<<r.w[i].get_demage()<<", Accuracy: "<<r.w[i].get_accuracy()<<"%)"<<endl;
    }
}
void display_health(Robots r1){
    cout<<r1.get_name()<<"'s health: "<<r1.get_health()<<endl;
  
}
bool ifloser(Robots r1, Robots r2){
    if(r1.get_health()<=0){
        cout<<"///////////////////////////////////////////////"<<endl;
        cout<<r1.get_name()<<" has been defeated!"<<endl;
        cout<<r2.get_name()<<" wins the battle!"<<endl;
        cout<<"///////////////////////////////////////////////"<<endl;
        return true;
    }
    return false;}
int main() { 
    Robots Optimus("Optimus Prime", Weopon("Ion rifl", 6, 100), Weopon("Energon swords", 12, 80), Weopon("Shoulder canon", 45, 25));
    Robots Megatron("Megatron", Weopon("Fusion cannon", 9, 90), Weopon("Tank Mode", 60, 15), Weopon("Fusion Sword", 18, 70));
   cout<<"Welcome to the battle between Optimus Prime and Megatron!"<<endl;
   cout<<"Each robot has 3 weopons to choose from:"<<endl; 
    cout<<"Optimus Primes Weopons:"<<endl;
   display_weopons(Optimus);
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Optimus Primes Weopons:"<<endl;
    display_weopons(Megatron);
    cout<<"-----------------------------------------------"<<endl;  
    bool turn=true; //true for optimus, false for megatron
    while(Optimus.get_health()>0 && Megatron.get_health()>0){
        if(turn){
            int choice;
            cout<<Optimus.get_name()<<"'s turn."<<endl;
            display_health(Optimus);
          cout<<  " Choose a weopon (1-3): "<<endl;
             display_weopons(Optimus);
            cin>>choice;
            if(choice<1 || choice>3){
                cout<<"Invalid choice. Try again."<<endl;
                continue;
            }
       Optimus.attack(Megatron, Optimus.w[choice-1]);
            if(  ifloser(Megatron, Optimus))break;
          
        }
        else{
            int choice;
            cout<<Megatron.get_name()<<"'s turn."<<endl;
            display_health(Megatron);
            cout<<  " Choose a weopon (1-3): "<<endl;
             display_weopons(Megatron);
            cin>>choice;
            if(choice<1 || choice>3){
                cout<<"Invalid choice. Try again."<<endl;
                continue;
            }
            Megatron.attack(Optimus,Megatron.w[choice-1]);
             if(  ifloser(Optimus, Megatron))break;

        }
           turn =!turn;
}
     
  
    return 0;
}