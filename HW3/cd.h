

#ifndef HW3_CD_H
#define HW3_CD_H

#endif //HW3_CD_H

class Cd{
private:

    char performance[50];
    char label[20];
    int selections; // number of selections
    double playtime; //playing time in minutes

public:
    //Cd(char *s1, char * s2, int n, double x);
    Cd(const Cd & d);
    Cd();
    ~Cd();
    void Report() const; // reports all CD data
    Cd & operator = (const Cd & d);

    Cd(const char *s1, const char *s2, int n, double x);
};

