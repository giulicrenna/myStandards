#ifndef MYQUEUE_H
#define MYQUEUE_H
#include <../src/mStandars.h>

mStructures::mQueue::mQueue(int l)
{
    size = l;
}

void mStructures::mQueue::startDataSet()
{
    for (int cursor = size; cursor != 0; cursor--)
    {
        data.push_back("None");
    }
}
std::vector<std::string> mStructures::mQueue::manageDataSet(const char *newEntry)
{
    for (int cursor = 0; cursor != size; cursor++)
    {
        if (data[cursor] == "None")
        {
            data[cursor] = newEntry;
        }
        else
        {
            if (cursor != size - 1)
            {
                data[cursor] = data[cursor + 1];
            }
            else
            {
                data[cursor] = newEntry;
            }
        }
    }
    return data;
}
bool mStructures::mQueue::isEmpty()
{
    bool isEmpty;
    for (int cursor = 0; cursor != size; cursor++)
    {
        if (data.at(cursor) != "None")
        {
            isEmpty = true;
            return isEmpty;
        }
    }
    isEmpty = false;
    return isEmpty;
}
std::vector<std::string> mStructures::mQueue::giveDataSet()
{
    return data;
}
void mStructures::mQueue::cleanDataSet()
{
    for (int cursor = 0; cursor != size; cursor++)
    {
        data[cursor] = "None";
    }
}

#endif