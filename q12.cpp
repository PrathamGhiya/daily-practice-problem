/* Take a positive integer from the user and check if it is divisible by both 3 and 5. Do not use the logical AND (&&) operator inside your conditional test statement.
(Hint: Think about how mathematical properties like the LCM can reduce multi-step rules) */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no.: ";
    cin>>n;
    cout<<((n%15==0) ? "Divisible by both 3 and 5" : "Not divisible by both 3 and 5");
}