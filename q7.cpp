/* Take two integers a and b (b!=0)  as input. Print the result of ceiling integer division of a by b.
Formula for positive integers: (a+b-1)/b */
#include<iostream>
#include<format>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter 1st no.: ";
    cin>>a;
    cout<<"Enter 2nd no.: ";
    cin>>b;
    cout<<format("\nCeiling integer division of {} and {} is: {}",a,b,(a+b-1)/b);
}