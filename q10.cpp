/* A shopkeeper applies a discount of d% on the marked price m, and then charges a tax of t% on the discounted price. Take m, d, and t (all doubles) as input and print 
the final amount the customer pays. 
Discounted Price = m - (d/100) * m      Final price = Discounted Price * (1 + (t/100)) */
#include<iostream>
using namespace std;
int main(){
    double d,m,t,dp=0,fp=0;
    cout<<"Enter marked price: ";
    cin>>m;
    cout<<"Enter discount percentage: ";
    cin>>d;
    cout<<"Enter tax percentage: ";
    cin>>t;
    dp = m - ((d/100) * m);
    cout<<"Discounted price is: "<<dp<<endl;
    fp = dp * (1 + (t/100));
    cout<<"Final price is: "<<fp<<endl;
}