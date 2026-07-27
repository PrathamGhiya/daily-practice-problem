/* (Concept Booster: Upper/Lower Boundary constraints)
Take a character input from the keyboard. Write a conditional structure to evaluate whether the provided letter is an uppercase English alphabet (A-Z), a lowercase 
alphabet (a-z), a numerical digit (0-9), or a special symbolic character. */
#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"Enter any uppercase or lowercase alphabet, a numerical digit or a special character: ";
    cin>>a;
    a=(int)a;
    if((a>=32 && a<=47) || (a>=58 && a<=64) || (a>=91 && a<=96) || (a>=123 && a<=126)){
        cout<<"Special character...";
    }
    else if(a>=48 && a<=57){
        cout<<"Numerical value...";
    }
    else if(a>=65 && a<=90){
        cout<<"Uppercase alphabet...";
    }
    else if(a>=97 && a<=122){
        cout<<"Lowercase alphabet...";
    }
}