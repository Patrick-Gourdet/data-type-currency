//
// Created by pgourdet on 4/9/2018.
//

#ifndef CURRENCY_CURRENCY_H
#define CURRENCY_CURRENCY_H
#include <string>

class currency {
    enum signType{plus,minus};
    float dollar;
    float cents;
    std::string sign;
public:
    currency(){};
    currency(std::string,int);
    ~currency(){};
    currency(std::string,int, float);
    void setDollarAmount(float);
    float getDollarAmont();
    currency addDollar(currency,currency);
    currency multiplyDollar(currency,currency);
    currency divideDollar(currency,currency);
    currency& incremmentDollar();
};


#endif //CURRENCY_CURRENCY_H
