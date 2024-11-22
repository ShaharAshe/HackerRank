#include <iostream>
#include <cstdlib>
#include <vector>


std::vector<int> countingSort(std::vector<int> arr) {
    int max_v = arr[0];
    for(const auto& x:arr){
        max_v = std::max(max_v, x);
    }
    std::cout << "max: "<<max_v<<std::endl;
    std::vector<int> count_vals(100,0);
    
    for(const auto& x:arr) {
        ++count_vals[x];
    }
    return count_vals;
}

int main()
{
    std::vector<int> arr = {1,1,3,2,1};
    auto res = countingSort(arr);
    
    std::cout << "[";
    for(size_t i=0; i<res.size(); ++i) {
        std::cout << res[i];
        if(i<res.size()-1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
    
    return EXIT_SUCCESS;
}