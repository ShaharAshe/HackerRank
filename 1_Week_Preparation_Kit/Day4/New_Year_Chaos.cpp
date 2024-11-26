#include <iostream>
#include <cstdlib>
#include <vector>


void minimumBribes(std::vector<int> q) {
    size_t b_count = 0;
    
    for(int i = q.size()-1; 0<i; --i)
    {
        if(q[i]!=i+1)
        {
            ++b_count;
            if(q[i-1]==i+1) {
                std::swap(q[i-1],q[i]);
            } else if (q[i-2]==i+1) {
                std::swap(q[i-2],q[i]);
                std::swap(q[i-1],q[i-2]);
                ++b_count;
            } else {
                std::cout << "Too chaotic" << std::endl;
                return;
            }
        }
    }
    std::cout << b_count << std::endl;
}


int main() {
    std::vector<int> q = {2, 1, 5, 3, 4};

    minimumBribes(q);
    
    return EXIT_SUCCESS;
}