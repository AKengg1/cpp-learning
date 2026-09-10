#include<iostream>
#include<string>
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
class Shape{
    private:
string shapeName;
    public:
    void setShapeName(string name){
        shapeName=name;
    }
    string getShapeName(){
        return shapeName;
    }

}
class StraightLine:public Shape{
    private:
        Coordinate start;
        Coordinate end;
    public:
    void setLine(int a,int b, int c,int d){
        start.setCoordinate(a,b);
        end.setCoordinate(c,d);
    }
    double getDistance(){
        return start.getDistance(end);
    }
    void showLine(){
        cout<<"Shape Name: "<<getShapeName()<<endl;
        cout<<"Distance: "<<getDistance()<<endl;
    }
};

int main()
{
    StraightLine line;
    line.setShapeName("Straight Line");
    line.setLine(3,4,6,8);
    line.showLine();
    return 0;
}