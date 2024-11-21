#include "classb.h"

ClassB::ClassB() {}

//getter
string ClassB::getInfo() const
{
    return info;
}
//setter
void ClassB::setInfo(string newInfo)
{
    info = newInfo;
}
