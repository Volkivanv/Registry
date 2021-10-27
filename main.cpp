#include <iostream>
#include <map>
#include <string>



int main() {
    std::map<std::string,int>patientList;

    std::string request;
    std::cout << "Input your request, or 'exit' for exit" << std::endl;
    std::getline(std::cin,request);
    int k = 0;
    while(request != "exit"){
        if(request == "Next"){
            if(patientList.size()>0) {
                auto it = patientList.begin();
                std::cout << it->first << std::endl;
                if (it->second > 1) {
                    it->second--;
                } else {
                    patientList.erase(it);
                }
            } else{
                std::cout << "There is nobody!" << std::endl;
            }
        }else{
            auto it = patientList.find(request);
            if(it == patientList.end()) {
                patientList.insert(std::make_pair(request, 1));
            } else {
                it -> second++;
            }
        }
        std::cout << "Input your request, or 'exit' for exit" << std::endl;
        std::getline(std::cin,request);
    }

    return 0;
}
