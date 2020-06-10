#include <iostream>
#include "t1.h"

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

    std::shared_ptr<t1> p_t1 = std::make_shared<t1>();
    p_t1->print();

}
