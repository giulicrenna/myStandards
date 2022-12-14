#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <stdio.h>
#include <math.h>
#include <fstream>
#include <sstream>

class mstd
{
public:
    //
    class JSONIZER
    {
    private:
        bool isSecond = false;
        std::string tempString = "";
        std::vector<std::string> configVector;

    public:
        std::string readFileIntoString(const std::string &path);
        std::vector<std::string> toVECTOR(std::string charArray);
        std::string toSJSON(std::vector<std::string> myVector);
    };
    //
    static std::string refactor(int time);
    static const int strToIntVal(std::string arr);
    static std::string subString(std::string str, int start, int end);
    static std::vector<std::string> strip(const char *str, char Token);
    static int indexOf(const char *str, char token);
    static bool isnot_In(std::string val, std::vector<char> commonCharacters);
};

class mStructures
{
public:
    //
    class mQueue
    {
    public:
        int size = 1;
        std::vector<std::string> data;

        mQueue(int l);
        void startDataSet();
        std::vector<std::string> manageDataSet(const char *newEntry);
        bool isEmpty();
        std::vector<std::string> giveDataSet();
        void cleanDataSet();
    };
};

class mAlgorithms
{
public:
    static bool bSearch(std::vector<int> data, int target, int low, int high);
    static bool bSearch(int data[], int target, int low, int high);
};
