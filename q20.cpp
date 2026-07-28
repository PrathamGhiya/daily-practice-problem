/* (Concept Booster: Electric Bill Multi-Tier Grid Pricing)
An energy cooperative charges electricity rates dynamically depending on consumer usage units.
Write a program to compute total charges based on the input consumption units:

First 100 units: $1.50 per unit

Next 200 units (101 to 300): $2.50 per unit

Above 300 units: $4.00 per unit

An additional structural safety surcharge of 15% is appended to the total amount generated. Find the net bill payable. */
#include<iostream>
#include<format>
using namespace std;

int main(){
    float unit,charge,total;
    cout<<"Enter ur consumption units: ";
    cin>>unit;
    if(unit > 300){
        charge = (100*1.50) + (200*2.50) + ((unit-300)*4.00);
    }
    else if(unit > 100){
        charge = (100*1.50) + ((unit-100)*2.50);
    }
    else{
        charge = unit*1.50;
    }
    float surcharge = charge*0.15;
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"Basic bill: $"<<charge<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"Surcharge: $"<<surcharge<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"Net Bill: $"<<charge + surcharge<<endl;
}