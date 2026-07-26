/* Take an integer n as input. Print the minimum non-negative integer that must be added to n to make it exactly divisible by 7. Use the modulus operator */
#include<iostream>
using namespace std;
int main(){
    int n,i=0;
    cout<<"Enter a no.: ";
    cin>>n;
    int temp = n;
    while(temp%7!=0){
        i++;
        temp++;
    }
    cout<<"Minimum non-negative integer that must be added to make "<<n<<" divisible by 7 is: "<<i;
}