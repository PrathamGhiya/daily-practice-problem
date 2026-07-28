/* (Concept Booster: Triangle Categorization Code)
Take three numerical values denoting the side dimensions (a,b,c) of a shape. First, use a vali-dation structure to test whether these segments can structurally assemble 
into a valid triangle (a+b>c, b+c>a, and c+a>b). If valid, further categorize the object as an Equilateral, Isosceles, or Scalene triangle. */
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st side: ";
    cin>>a;
    cout<<"Enter 2nd side: ";
    cin>>b;
    cout<<"Enter 3rd side: ";
    cin>>c;
    if(a+b>c && b+c>a && c+a>b){
        if(a==b && b==c){
            cout<<"The triangle is an Equilateral Triangle.";
        }
        else if(a==b || b==c || c==a){
            cout<<"The triangle is an Isosceles Triangle.";
        }
        else{
            cout<<"The triangle is a Scalene Triangle.";
        }
    }
    else{
        cout<<"Please enter a valid Triangle.";
    }
}