#include <iostream>
#include <cstdlib>
#include <vector>


int flippingMatrix(std::vector<std::vector<int>> matrix) {
    int res = 0,
    c_r_len = matrix.size();
    for(size_t r = 0; r<c_r_len/2; ++r)
    {
        for(size_t c = 0; c<c_r_len/2; ++c)
        {
            int temp_sum = matrix[r][c];
            temp_sum = std::max(temp_sum, matrix[r][c_r_len-1-c]);
            temp_sum = std::max(temp_sum, matrix[c_r_len-1-r][c_r_len-1-c]);
            temp_sum = std::max(temp_sum, matrix[c_r_len-1-r][c]);
            res+=temp_sum;
        }
    }
    return res;
}


int main() {
    std::vector<std::vector<int>> matrix =
    {
        {1,2},
        {3,4}
    };
    auto res = flippingMatrix(matrix);

    std::cout << res << std::endl;
    
    return 0;
}