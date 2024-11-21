#include "assosiationa.h"

AssosiationA::AssosiationA(ClassB value):objectB(value)
{
}
//getter
string AssosiationA::getBinfo()
{
    return objectB.getInfo();
}
//setter
void AssosiationA::setBinfo(string value)
{
    objectB.setInfo(value);
}
