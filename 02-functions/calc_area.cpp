//8-calculating area of circle rectangle and triangle by using function overloading
#include <iostream>
using namespace std;
int area(int );
int area(int , int );
int area(float , float );
int main(){
int r,l,b;
float base, h;
cout<<"Enter radius of circle: ";
cin>>r;
cout<<"Area of circle is: "<<area(r)<<endl;
cout<<"Enter length and breadth of rectangle: ";
cin>>l>>b;
cout<<"Area of rectangle is: "<<area(l,b)<<endl;
cout<<"Enter base and height of triangle: ";
cin>>base>>h;
cout<<"Area of triangle is: "<<area(base,h)<<endl;
return 0;
}

int area(int r){
    return 3.14*r*r;
}
int area(int l, int b){
    return l*b;
}
int area(float b, float h){
    return 0.5*b*h;
}