/* (Concept Booster: Leap Year Calculation Rule)
Write a program that takes a positive integer representing a year (e.g., 2024) and checks whether it is a leap year or not. Your logical conditions must accurately check 
for standard four-year intervals while handling century-year bounds correctly (100 and 400 rules). */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a year: ";
    cin>>n;
    cout<<((n%400==0) || (n%4==0 && n%100!=0) ? "Leap year" : "Not a Leap year");
}