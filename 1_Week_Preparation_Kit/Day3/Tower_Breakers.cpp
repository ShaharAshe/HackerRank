#include <iostream>
#include <cstdlib>


int towerBreakers(int n, int m) {
    if(m==1 || n%2==0){
        return 2;
    } else {
        return 1;
    }
}

int main() {
    int n = 2;
    int m = 2;
    auto res = towerBreakers(n, m);

    std::cout << res << std::endl;
    
    return EXIT_SUCCESS;
}