#ifndef MYQUEUE_H
#define MYQUEUE_H
#include <vector>

class mQueue
{
public:
    int size = 1;
    std::vector<std::string> data;
    mQueue(int l)
    {
        size = l;
    }
    void startDataSet()
    {
        for (int cursor = size; cursor != 0; cursor--)
        {
            data.push_back("None");
        }
    }
    std::vector<std::string> manageDataSet(const char *newEntry)
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
    bool isEmpty()
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
    std::vector<std::string> giveDataSet()
    {
        return data;
    }
    void cleanDataSet(){
        for (int cursor = 0; cursor != size; cursor++)
        {
            data[cursor] = "None";
        }
    }
};

#endif