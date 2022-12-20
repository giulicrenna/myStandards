#include <vector>
#include <string>
#include <array>
#include <cmath>

/**
 * @brief
 *
 * @param data
 * @param target target to be found
 * @param low is the minimum value access to the data set
 * @param high is the lenght minus 1
 * @return true
 * @return false
 */
bool bSearch(std::vector<int> data, int target, int low, int high)
{
    if (low > high)
    {
        return false;
    }
    else
    {
        int mid = std::floor((low + high) / 2);
        if(target == data.at(mid)){
            return true;
        }else if(target < data.at(mid)){
            return bSearch(data, target, low, mid-1);
        }else if(target > data.at(mid)){
            return bSearch(data, target, mid+1, high);
        }
    }
    return false;
}

bool bSearch(int data[], int target, int low, int high)
{
    if (low > high)
    {
        return false;
    }
    else
    {
        int mid = std::floor((low + high) / 2);
        if(target == data[mid]){
            return true;
        }else if(target < data[mid]){
            return bSearch(data, target, low, mid-1);
        }else if(target > data[mid]){
            return bSearch(data, target, mid+1, high);
        }
    }
    return false;
}
