#pragma once
#include "Link.h"
#include <functional>

class LinkedList 
{
public:
    LinkedList();
    ~LinkedList();

    void insert(double value);
    int size() const;
    bool contains(double element) const; 
    void processEachLink(std::function<void(Link*)> aFunction);

private:
    Link* head;
};