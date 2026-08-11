//7-swap data of two int variables using call by reference
#include <iostream>
using namespace std;
int swap(int &, int &);
int main() {
    int x, y;
    cout<<"Enter two numbers: "<<endl;
    cin>>x>>y;
    cout<<"Before swapping: x = "<<x<<", y = "<<y<<endl;
    swap(x, y);
    cout<<"After swapping: x = "<<x<<", y = "<<y<<endl;
    return 0;
}
int swap(int &a,int &b) {
int temp;
    temp = a;
    a = b;
    b = temp;
    return 0;
}