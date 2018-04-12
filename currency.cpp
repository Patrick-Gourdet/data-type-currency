//
// Created by pgourdet on 4/9/2018.
//

#include "currency.h"

currency::currency(signType sign, std::string curr, float tDollars, float tCents) {
    setValue(sign,"$",tDollars,tCents);
}