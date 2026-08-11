//10-add two numbers with different data types using function overloading
#include <iostream>
using namespace std;
int add(int , int );
double add(double , double );

int main(){
    int a, b;
    double x, y;
    cout<<"Enter two integers: ";
    cin>>a>>b;
    cout<<"Sum of "<<a<<" and "<<b<<" is: "<<add(a,b)<<endl;
    cout<<"Enter two double precision numbers: ";
    cin>>x>>y;
    cout<<"Sum of "<<x<<" and "<<y<<" is: "<<add(x,y)<<endl;
    return 0;
}
int add(int a, int b){
    return a + b;
}
double add(double x, double y){
    return x + y;
}