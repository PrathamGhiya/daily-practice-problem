/* Take two integers input from the user. Determine and print whether their multiplication product is positive, negative, or zero without calculating the absolute 
numeric valuation value if possible. */
#include<iostream>
using namespace std;
int main(){
    int a,b,pro;
    cout<<"Enter 1st no.: ";
    cin>>a;
    cout<<"Enter 2nd no.: ";
    cin>>b;
    pro = a*b;
    if(pro>0) cout<<"Positive";
    else if(pro<0) cout<<"Negative";
    else cout<<"Zero";
}