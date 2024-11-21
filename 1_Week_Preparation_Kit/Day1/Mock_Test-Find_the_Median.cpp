#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>


int findMedian(std::vector<int> arr) {
    std::sort(arr.begin(),arr.end());
    return arr[arr.size()/2];
}


int main() {
    std::vector<int> arr = {0,1,2,3,4,5,6};
    auto res = findMedian(arr);

    std::cout << res << std::endl;

    return EXIT_SUCCESS;
}