/* A circle of radius r is inside a square of side a (the circle sits completely inside the square without touching its edges). Find the area of the shaded region -- the
part inside the square but outside the circle. Use pi = 3.14 */
#include<iostream>
using namespace std;
int main(){
    float a,r,area_sq,area_cir;
    cout<<"Enter side of square: ";
    cin>>a;
    cout<<"\nRadius of circle should be less than "<<a<<endl;
    cout<<"\nEnter radius of circle: ";
    cin>>r;
    if(r<a){
        area_sq = a*a;
        area_cir = 3.14*r*r;
        cout<<"\nRemaining area of square is: "<<abs(area_sq - area_cir);
    }
    else{
        cout<<"\nRadius of circle should be less than to length of side of square";
    }
}