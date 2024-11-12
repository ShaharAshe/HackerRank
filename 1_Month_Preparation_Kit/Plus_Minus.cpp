#include <iostream>
#include <cstdlib>
#include <vector>
#include <unordered_map>


void plusMinus(std::vector<int> arr) {
    std::unordered_map<std::string, double> count_vals =
    {
        {"pos", 0},
        {"neg", 0},
        {"zero", 0}
    };
    
    for(const auto& x:arr) {
        if(0<x) {
            ++count_vals["pos"];
        } else if(x<0) {
            ++count_vals["neg"];
        } else {
            ++count_vals["zero"];
        }
    }
    
    if(!arr.empty())
    {
        std::cout << count_vals["pos"]/arr.size() << std::endl;
        std::cout << count_vals["neg"]/arr.size() << std::endl;
        std::cout << count_vals["zero"]/arr.size() << std::endl;
    }
}

int main() {
    std::vector<int> arr = {-4,3,-9,0,4,1};

    plusMinus(arr);

    return EXIT_SUCCESS;
}