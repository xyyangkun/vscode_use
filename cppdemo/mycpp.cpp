#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <memory>


int main()
{
    std::vector<std::string> vs;
    std::map<std::string , int > ma = {{"Jim", 12},{"Tom",34}};

    for(auto &i : ma) {
        std::cout << i.first << " " << i.second << std::endl;
    }


}
