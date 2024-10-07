#pragma once

#include <iostream>

class Link
{
public:
    Link();
    Link(double val);

    double value;
    Link *next;
    Link* point;

    ~Link()
    {
    };
};

std::ostream &operator<<(std::ostream &os, const Link &link);