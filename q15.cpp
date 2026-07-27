/* Write a menu-driven application using a C++ switch-case structure that accepts an integer number representing a month (1 to 12). Print the corresponding month's 
standard calendar name. If the input falls outside the standard scope, default cleanly with an error flag message. */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a month no.(1-12): ";
    cin>>n;
    switch(n){
        case 1: 
            cout<<"January";
            break;
        case 2: 
            cout<<"February";
            break;
        case 3: 
            cout<<"March";
            break;
        case 4: 
            cout<<"April";
            break;
        case 5: 
            cout<<"May";
            break;
        case 6: 
            cout<<"June";
            break;
        case 7: 
            cout<<"July";
            break;
        case 8: 
            cout<<"August";
            break;
        case 9: 
            cout<<"September";
            break;
        case 10: 
            cout<<"October";
            break;
        case 11: 
            cout<<"November";
            break;
        case 12: 
            cout<<"December";
            break;
        default:
            cout<<"Error";
            break;
    }
}