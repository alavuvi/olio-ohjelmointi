#ifndef CHEF_H
#define CHEF_H
#include <string>
using namespace std;

class Chef {
protected:
    string name;
public:
    Chef(string chefName);
    ~Chef();
    void makeSalad() const;
    void makeSoup() const;
};

#endif // CHEF_H
