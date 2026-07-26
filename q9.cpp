/* Take an amount in Rupees (double) and convert it to Dollars, given that 1 Dollar = 100 Rupees */
#include<iostream>
using namespace std;
int main(){
    double rs;
    cout<<"Enter amount in Rupees: ";
    cin>>rs;
    cout<<rs/100<<" Dollars";
}