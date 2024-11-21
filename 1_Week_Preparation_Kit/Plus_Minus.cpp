#include <iostream>
#include <cstdlib>
#include <vector>
#include <unordered_map>


void plusMinus(std::vector<int> arr) {
    std::unordered_map<char, size_t> count_vals =
    {
        {'p',0},
        {'n',0},
        {'z',0},
    };
    
    for(const auto& x:arr) {
        if(0<x) {
            ++count_vals['p'];
        } else if(x<0) {
            ++count_vals['n'];
        } else {
            ++count_vals['z'];
        }
    }
    double arr_len = arr.size();
    std::cout << (arr_len?count_vals['p']/arr_len:0) << std::endl;
    std::cout << (arr_len?count_vals['n']/arr_len:0) << std::endl;
    std::cout << (arr_len?count_vals['z']/arr_len:0) << std::endl;
}


int main()
{
    std::vector<int> arr = {-4,3,-9,0,4,1};
    plusMinus(arr);

    return EXIT_SUCCESS;
}