#include <iostream>
#include <cstdlib>
#include <vector>


int lonelyinteger(std::vector<int> a) {
    int max_v = a[0];
    for(const auto& x:a) {
        max_v = std::max(x,max_v);
    }
    std::vector<int> count_arr(max_v+1, 0);
    for(const auto& x:a) {
        ++count_arr[x];
    }
    for(const auto& x:a) {
        if(count_arr[x]==1)
        {
            return x;
        }
    }
    return 0;
}


int main() {
    std::vector<int> a = {1,2,3,4,3,2,1};
    auto res = lonelyinteger(a);

    std::cout << res << std::endl;

    return EXIT_SUCCESS;
}