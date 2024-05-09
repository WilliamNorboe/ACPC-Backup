#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <map>

int main() {
    int num_kpop;
    std::string str = "";
    std::getline(std::cin, str);
    std::stringstream stringStream(str);
    stringStream >> num_kpop;
    std::vector<std::string> kpops;
    std::vector<int> kpopNumbers;
    std::string test;
    int number;
    for(int i = 0; i < num_kpop; ++i){
        str = "";
        std::getline(std::cin, str);
        std::stringstream stringStream1(str);
        stringStream1 >> test;
        kpops.push_back(test);
        stringStream1 >> number;
        kpopNumbers.push_back(number);
    }

    int numstorm;
    str = "";
    std::getline(std::cin, str);
    std::stringstream stringStream2(str);
    stringStream2 >> numstorm;
    std::vector<std::string> stormpops;
    std::vector<int> stormpopsNums;
    bool broken = false;
    for(int i = 0; i < numstorm; ++i){
        str = "";
        broken = false;
        std::getline(std::cin, str);
        std::stringstream stringStream3(str);
        stringStream3 >> test;
        for(int j = 0; j < stormpops.size(); ++j){
            if(stormpops[j] == test){
                stormpopsNums[j]++;
                broken = true;
                break;
            }
        }
        if(!broken){
            stormpopsNums.push_back(1);
            stormpops.push_back(test);
        }

    }

//    for(int i = 0; i <kpops.size(); ++i){
//        std::cout<<kpops[i]<<std::endl;
//        std::cout<<kpopNumbers[i]<<std::endl;
//    }
//    for(int i = 0; i <stormpops.size(); ++i){
//        std::cout<<stormpops[i]<<std::endl;
//        std::cout<<stormpopsNums[i]<<std::endl;
//    }

    bool found = false;
    for(int i = 0; i <stormpops.size(); ++i){
        for(int j = 0; j <kpops.size(); ++j){
            if(stormpops[i] == kpops[j]){
                if(stormpopsNums[i] < kpopNumbers[j]){
                    std::cout<<stormpops[i]<<std::endl;
                    return 0;
                }
            }
            else{
                auto it = std::find(stormpops.begin(), stormpops.end(), kpops[j]);
                if(it == stormpops.end()){
                    std::cout<<kpops[j]<<std::endl;
                    return 0;
                }
            }


        }
    }
    std::cout<<"NO KPOP FOR VADER"<<std::endl;
    return 0;
}
