#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>


int main() {
    std::string str = "";
    std::getline(std::cin, str);
    std::stringstream stringStream1(str);
    std::vector<int> result;
    int value = 0;
    while (stringStream1 >> value){
        result.push_back(value);
    }
    if(result.size() != 4){
        return -1;
    }




    return 0;
}
