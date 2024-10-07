#include "LinkedList.h"

LinkedList::LinkedList() : head(nullptr)
{
}

LinkedList::~LinkedList()
{
    Link *current = head;
    while (current != nullptr)
    {
        Link *next = current->next;
        delete current;
        current = next;
    }
}

void LinkedList::insert(double value)
{

    if (head == nullptr)
    {
        head = new Link(value);
    }
    else
    {

        Link *current = head;

        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = new Link(value);
    }
}

bool LinkedList::contains(double element) const
{
    if (head == nullptr)
    {
        return false;
    }
    else
    {

        Link *current = head;

        while (current->next != nullptr)
        {
            if (current->value == element)
            {
                return true;
            }
            current = current->next;
        }
        return false;
    }
}

int LinkedList::size() const
{
    if (head == nullptr)
    {
        return 0;
    }
    else
    {
        int size = 1;
        Link *current = head;

        while (current->next != nullptr)
        {
            size++;
            current = current->next;
        }
        return size;
    }
}

void LinkedList::processEachLink(std::function<void(Link *)> aFunction)
{
     if (head == nullptr)
    {
        std::cerr << "Hi" << std::endl;
    }
    else
    {

        Link *current = head;
        while (current != nullptr)
        {
            aFunction(current);
            current = current->next;
        }

    }
}