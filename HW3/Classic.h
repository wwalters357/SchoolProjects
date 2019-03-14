
#ifndef HW3_CLASSIC_H
#define HW3_CLASSIC_H

#include "cd.h"
#include <iostream>
#include <string>

class Classic : public Cd{
private:
    char work[50];
public:
    Classic(const char * s3, const char * s1, const char * s2, int i, double d);
    Classic();
    Classic & operator = (const Classic & d);
};


#endif //HW3_CLASSIC_H
