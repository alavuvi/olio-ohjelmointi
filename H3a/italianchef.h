#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"

class ItalianChef : public Chef {
public:
    ItalianChef(string chefName);
    ~ItalianChef();
    void makePasta() const;
    string getName() const;
};

#endif // ITALIANCHEF_H
