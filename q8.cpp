/* Compute the Kinetic Energy of a moving object. Take the Mass m (in kg, double) and Velocity v (in m/s, double) as input from the user. Be careful about integer vs.
double division when applying the fraction coefficient. */
#include<iostream>
using namespace std;
int main(){
    double m,v,ke;
    cout<<"Enter the mass of object: ";
    cin>>m;
    cout<<"Enter the velocity of object: ";
    cin>>v;
    ke = 0.5*m*v*v;
    cout<<"Kinetic Energy of the object is: "<<ke;
}