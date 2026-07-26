/* Writer the program to calculate radius of sphere. Use pi = 3.14. V = (4/3)*pi*r*r*r  */
#include<iostream>
using namespace std;
int main(){
    float v,r;
    // const float pi = 3.14;
    cout<<"Enter the radius of sphere: ";
    cin>>r;
    v = (4.0/3.0)*3.14*r*r*r;
    cout<<v;
}