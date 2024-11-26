#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <algorithm>


std::string gridChallenge(std::vector<std::string> grid) {
    size_t g_len = grid.size();
    for(size_t r = 0; r<g_len; ++r)
    {
        std::sort(grid[r].begin(),grid[r].end());
    }
    for(size_t r = 0; r<g_len; ++r)
    {
        for(size_t c = 0; c<g_len-1; ++c)
        {
            if(grid[c+1][r]<grid[c][r])
            {
                return "NO";
            }
        }
    }
    return "YES";
}


int main() {
    std::vector<std::string> grid = {"abc","ade","efg"};
    auto res = gridChallenge(grid);

    std::cout << res << std::endl;

    return EXIT_SUCCESS;
}