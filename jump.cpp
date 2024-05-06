#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>

int main() {
    int num_bridges;
    std::string str = "";
    std::getline(std::cin, str);
    std::stringstream stringStream(str);
    stringStream >> num_bridges;
//    std::cout << num_bridges << std::endl;
    str = "";
    std::getline(std::cin, str);
    std::stringstream stringStream1(str);
    std::vector<int> result;
    int value = 0;
    while (stringStream1 >> value)
    {
        result.push_back(value);
    }
//    int result[]
    int max = 0;
    int maxDiff = 0;
    int lastBridge = result[num_bridges-1];
    bool path = false;
    for (int i = 0; i < result.size() - 1; i++)
    {
        if(abs(result[i] - result[i+1]) > max){
            max = abs(result[i] - result[i+1]);
        }
//        if(path){
//            std::cout << max <<std::endl;
//            return 0;
//        }
//        if(lastBridge % result[i] == 0){
//            int hold = result[i];
//            while(hold < lastBridge){
//                hold += result[i];
//                auto cnt = std::find(result.begin(), result.end(), hold);
//                if (cnt != result.end()){
//                    if(hold == lastBridge){
//                        max = result[i];
//                        path = true;
//                    }
//                    continue;
//                }
//                else{
//                    break;
//                }
//            }
//        }

    }
    if(max == 0){
        max = lastBridge;
    }
    std::cout << max <<std::endl;


    return 0;
}
