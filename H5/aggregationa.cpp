#include "aggregationa.h"

AggregationA::AggregationA(ClassB &value):refB(value)
{
}
//getter
string AggregationA::getBinfo()
{
    return refB.getInfo();
}
//setter
void AggregationA::setBinfo(string value)
{
    refB.setInfo(value);
}
