#include <iostream>
#include <cstdlib>
#include <vector>

void miniMaxSum(std::vector<int> arr) {
    int min_v = arr[0],
        max_v = arr[0];
    long int sum_v = 0;
    
    for(const auto& x:arr) {
        if(x<min_v) {
            min_v = x;
        }
        if(max_v<x) {
            max_v = x;
        }
        sum_v += x;
    }
    
    std::cout << (sum_v-max_v) << " " << (sum_v-min_v) << std::endl;
}

int main()
{
    std::vector<int> arr = {1,2,3,4,5};
    miniMaxSum(arr);
    
    return EXIT_SUCCESS;
}