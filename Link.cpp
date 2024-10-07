#include "Link.h"
#include <iomanip>
Link::Link(double val) : value(val), next(nullptr)
{
}
std::ostream& operator<<(std::ostream& os, const Link& link) 
{
    os << std::fixed << std::setprecision(2) << link.value;
    return os;
}
