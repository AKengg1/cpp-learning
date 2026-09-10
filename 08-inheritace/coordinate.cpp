#include<iostream>
#include<cmath>
using namespace std;
class Coordinate
{
    private:
        int x;
        int y;
    public:
    void setCoordinate(int a,int b)
    {
        x=a;
        y=b;
    }
    double getDistance()
    {
        return sqrt(x*x+y*y);
    }
    double getDistance(Coordinate c)
    {
        int dx=x-c.x;
        int dy=y-c.y;
        return sqrt(dx*dx+dy*dy);
    }
};
int main()
{
    Coordinate c1,c2;
    c1.setCoordinate(3,4);
    c2.setCoordinate(6,8);
    cout<<"Distance from origin: "<<c1.getDistance()<<endl;
    cout<<"Distance between two points: "<<c1.getDistance(c2)<<endl;
    return 0;
}