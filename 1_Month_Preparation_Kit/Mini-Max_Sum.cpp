#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <algorithm>


void miniMaxSum(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end());
    long int min_v = 0,
             max_v = 0;
    
    for(size_t i = 0; i<4; ++i)
    {
        min_v += arr[i];
        max_v += arr[((arr.size()-1)-i)];
    }
    
    std::cout << std::to_string(min_v);
    std::cout << " ";
    std::cout << std::to_string(max_v) << std::endl;
}


int main() {
    std::vector<int> arr = {1,2,3,4,5};
    miniMaxSum(arr);

    return EXIT_SUCCESS;
}