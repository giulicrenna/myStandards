#include <jsonizer.cpp>
#include <myQueue.cpp>
#include <refactorData.cpp>
#include <binarySearch.cpp>

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
    std::string refactor();
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
        mQueue(int l)
        {
            size = l;
        }

        void startDataSet();
        std::vector<std::string> manageDataSet(const char *newEntry);
        bool isEmpty();
    };
};

class mAlgorithms
{
public:
    bool bSearch(std::vector<int> data, int target, int low, int high);
    bool bSearch(int data[], int target, int low, int high);
};

int main(){
    mStructures::mQueue myQ{5};

    myQ.startDataSet();

    std::vector<std::string> mV = myQ.manageDataSet("hola");

    for(int i = 0; i < mV.size()-1;i++){
        std::cout<<mV.at(i);
    }
    return 0;
}