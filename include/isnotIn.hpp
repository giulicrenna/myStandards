#include <map>
#include <vector>
#include <string>

std::vector<char> comm = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '=', '-', '_', '/', '#'};


/**
 * @brief 
 * This method allows you to determine if a certain set of characters are
 * in a string.
 * I.e: isnot_In("Hello World", {'a'}) -> true
 * I.e: isnot_In("Hello World", {'b', '5'}) -> false
 * @param val is the root string from where to compare.
 * @param commonCharacters Vector array to compare from.
 * @return true 
 * @return false 
 */
bool isnot_In(std::string val, std::vector<char> commonCharacters = comm){
    int lenght = val.length();
    char buffer[lenght];
    for(int k = 0; k < lenght; k++){buffer[k] = val.at(k);}
    for(char character: val){
        for(char commonChar: commonCharacters){if(character == commonChar){return true;}}
    }    
    return false;
}