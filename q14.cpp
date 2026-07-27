/* Take two integers as input. If exactly one of them is odd, print "One is odd". If both are odd, print "Both are odd". If neither of them is odd, print "None is odd". 
Use conditional constructs effectively. */
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter 1st no.:  ";
    cin>>a;
    cout<<"Enter 2nd no.: ";
    cin>>b;
    if(a%2!=0 && b%2!=0) cout<<"Both are odd";
    else if(a%2!=0 || b%2!=0) cout<<"One is odd";
    else cout<<"None is odd";
}