#include <iostream>
#include <map>
#include <string>



int main() {
    std::map<int,std::string>patientList;

    std::string request;
    std::cout << "Input your request, or 'exit' for exit" << std::endl;
    std::getline(std::cin,request);
    int k = 0;
    while(request != "exit"){
        if(request == "Next"){
            auto it = patientList.begin();
            std::cout  << it -> second << std::endl;
            patientList.erase(it);
        }else{
            patientList.insert(std::make_pair(k,request));
            k++;
        }
        std::cout << "Input your request, or 'exit' for exit" << std::endl;
        std::getline(std::cin,request);
    }
    
    return 0;
}
