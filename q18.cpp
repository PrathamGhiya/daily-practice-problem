/* (Concept Booster: Coordinate System Analysis)
Given the three coordinate points A(x1,y1), B(x2,y2), and C(x3,y3) as floating-point inputs, write a program to determine if all three points sit sequentially on the 
same straight line (collinear points). Use the slope comparison formulation:
(x3 - x2) * (y2 - y1) == (y3 - y2) * (x2 - x1) */
#include<iostream>
// #include<cmath>
using namespace std;
int main(){
    float x1,x2,x3,y1,y2,y3;
    cout<<"Enter value of x1 and y1: ";
    cin>>x1>>y1;
    cout<<"Enter value of x2 and y2: ";
    cin>>x2>>y2;
    cout<<"Enter value of x3 and y3: ";
    cin>>x3>>y3;
    cout<<(abs((x3 - x2) * (y2 - y1) == (y3 - y2) * (x2 - x1)) ? "Collinear points" : "Non-Collinear points");
}