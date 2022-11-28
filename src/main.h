#include <jsonizer.cpp>
#include <myQueue.cpp>
#include <refactorData.cpp>

class mstd
{
public:
    //
    class mQueue
    {
    private:
        int size = 1;
        std::vector<std::string> data;
        mQueue(int l)
        {
            size = l;
        }
    public:
        void startDataSet();
        std::vector<std::string> manageDataSet(const char *newEntry);
        bool isEmpty();
    };
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
    std::string refactor();
};