#include <iostream>
#include <cstdlib>
#include <vector>


int diagonalDifference(std::vector<std::vector<int>> arr) {
    int sum_l_r = 0,
        arr_len = arr.size()-1;
        
    for(size_t r_c = 0; r_c<arr_len+1; ++r_c)
    {
        sum_l_r+=arr[r_c][r_c];
        sum_l_r-=arr[r_c][arr_len-r_c];
    }
    return std::abs(sum_l_r);
}

int main() {
    std::vector<std::vector<int>> arr =
    {
        {1,2,3},
        {4,5,6},
        {9,8,9}
    };
    auto res = diagonalDifference(arr);
    
    std::cout << res << std::endl;
    
    return EXIT_SUCCESS;
}