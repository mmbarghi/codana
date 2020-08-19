#ifndef SHORTTERMLEGAL_H
#define SHORTTERMLEGAL_H
#include"shorttermpersonal.h"
#include "user.h"

class shorttermlegal : public shortTermPersonal
{
public:
    shorttermlegal();
private:
    user *allUser;
};

#endif // SHORTTERMLEGAL_H
