/* Given the no. of sides n of a simple polygon and the sum of all its interior angles S, write a program to check if the user has provided valid dimensional 
specifications. Use the strustural formula: 
S = (n-2) * 180(degree) */
#include<iostream>
using namespace std;
int main(){
    int n,S;
    cout<<"Enter no. of sides of polygon: ";
    cin>>n;
    cout<<"Enter sum of its interior angles: ";
    cin>>S;
    cout<<((S==(n-2)*180) ? "Valid dimensional specification" : "Invalid dimendional specification");
}