#include <iostream>
#include <sstream>
#include "LinkedList.h"

void fancyPrint(Link *link)
{

    // Current address
    std::stringstream ss;
    ss << link << std::endl;
    std::string c = ss.str().substr(10, 4);

    // Next address
    std::string n;
    if (link->next != nullptr)
    {
        ss.str("");
        ss << link->next << std::endl;
        n = ss.str().substr(10, 4);
    }
    else
    {
        n = "nullptr";
    }
    ss.str("");

    ss << "@ " << c << std::endl
       << "┏━━━━━━━━━━━━━━━━┓" << std::endl
       << "┃                ┃" << std::endl
       << "┃ Value: " << *link;
    while (ss.str().length() <= 103)
        ss << " ";   ss << "┃" << std::endl
       << "┃ Next: " << n;
    while (ss.str().length() <= 126)
        ss << " ";   ss << "┃" << std::endl
       << "┃                ┃" << std::endl
       << "┗━━━━━━━━━━━━━━━━┛" << std::endl<<std::endl;

    std::cout << ss.str();
}

int main()
{
    LinkedList list;
    list.insert(37.0);
    list.insert(100.25);
    list.insert(1117.5);
    list.insert(-17.5);
    list.insert(-17.5);
    list.processEachLink(fancyPrint);
    return 0;
}