#include<iostream>
using namespace std;
int main(){
    float l,b,h;
    cout<<"Enter Length : ";
    cin>>l;
    cout<<"Enter Breadth : ";
    cin>>b;
    cout<<"Enter Height : ";
    cin>>h;
    float tsa = 2*(l*b + b*h + h*l);
    cout<<"Total Surface Area of cuboid is : "<<tsa;
}