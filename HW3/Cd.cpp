#include<iostream>
using namespace std;

class Cd { //represents a CD disk
private:
    string performers;
    string label;
    int selections{}; //number of selections
    double playtime{}; // playing time in minutes

public:
    Cd(const char * s1, const char * s2, int n, double x) :performers(s1),label(s2),selections(n),playtime(x) {
    }

    Cd() = default;

    Cd(const Cd& copy)
    {
        performers = copy.performers;
        label = copy.label;
        selections = copy.selections;
        playtime = copy.playtime;
    }

    virtual ~Cd() = default;

    virtual void Report() const {

        cout<<performers<<endl;
        cout<<label<<endl;
        cout<<selections<<endl;
        cout<<playtime<<endl;
    } // reports all CD data

    virtual Cd & operator=(const Cd & d)= default;
};
