#include <iostream>
#include <cstdlib>
#include <vector>


int truckTour(std::vector<std::vector<int>> petrolpumps) {
    int f = 0,res = 0;
    for(size_t i = 0; i<petrolpumps.size(); ++i) {
        f += (petrolpumps[i][0]-petrolpumps[i][1]);
        if(f<0){
            f=0;
            res = i+1;
        }
    }
    return res;
}


int main() {
    std::vector<std::vector<int>> petrolpumps = {{1,5},{10,3},{3,4}};
    auto res = truckTour(petrolpumps);

    std::cout << res << std::endl;
    
    return EXIT_SUCCESS;
}