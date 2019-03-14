#include <iostream>
#include "Cd.cpp"

using namespace std;

class Classic: public Cd
{
private:
    string primary;
public:
    Classic() = default;

    Classic(const char *s3, const char * s1, const char* s2, int n, double x):Cd(s1,s2,n,x),primary(s3) {
    }

    Classic(const Classic& copy):Cd(copy) {
        primary = copy.primary;
    }

    ~Classic() override = default;

    virtual void Report() const {
        cout << primary << endl;
        Cd::Report();
    }

    Classic& operator=(const Classic& copy) {
        primary = copy.primary;
        this->Cd::operator=(copy);
        return *this;
    }
};