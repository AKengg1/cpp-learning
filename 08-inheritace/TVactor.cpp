#include <iostream>
#include <string>
using namespace std;
class Actor
{
private:
    string name;
    int age;

public:
    void setActor(string n, int a)
    {
        name = n;
        age = a;
    }
    void getActor()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class TVActor : public Actor
{
private:
    int noOfTVShows;

public:
    void setNoOfTVShows(int no)
    {
        noOfTVShows = no;
    }
    void getNoOfTVShows()
    {
        cout << "No of TV Shows: " << noOfTVShows << endl;
    }
    void setTVActor(string n, int a, int no)
    {
        setActor(n, a);
        noOfTVShows = no;
    }
    void showTVActor()
    {
        getActor();
        cout << "No of TV Shows: " << noOfTVShows << endl;
    }
};
class MovieActor : public Actor
{
private:
    int noOfMovies;

public:
    void setNoOfMovies(int no)
    {
        noOfMovies = no;
    }
    void getNoOfMovies()
    {
        cout << "No of Movies: " << noOfMovies << endl;
    }
    void setMovieActor(string n, int a, int no)
    {
        setActor(n, a);
        noOfMovies = no;
    }
    void showMovieActor()
    {
        getActor();
        cout << "No of Movies: " << noOfMovies << endl;
    }
};
class AllScreenActor : public TVActor, public MovieActor
{
public:
    void setActorData(string n, int a, int noTV, int noMovie)
    {
        setTVActor(n, a, noTV);
        setMovieActor(n, a, noMovie);
    }
    void showActorData()
    {
        showTVActor();
        getNoOfMovies();
    }
};
int main()
{
    AllScreenActor a1;
    a1.setActorData("John", 30, 5, 10);
    a1.showActorData();
    return 0;
}