#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>


void miniMaxSum(std::vector<int> arr) {
    size_t sum_v = 0,
             max_v = arr[0],
             min_v = arr[0];
    
    for(const auto& x:arr)
    {
        sum_v += x;
        if(max_v<x)
        {
            max_v = x;
        }
        if(x<min_v)
        {
            min_v = x;
        }
    }
    
    std::cout << std::to_string(sum_v-max_v);
    std::cout << " ";
    std::cout << std::to_string(sum_v-min_v) << std::endl;
}


int main() {
    std::vector<int> arr = {1,2,3,4,5};
    miniMaxSum(arr);

    return EXIT_SUCCESS;
}