#include <iostream>
#include <cstdlib>
#include <string>

int superDigit(std::string n, int k) {
    if(n.size()==1) return std::stoi(n);
    
    size_t num = 0;
    for(const auto& x:n)
    {
        num+=(x-'0');
    }
    num*=k;
    std::string new_n = std::to_string(num);
    return superDigit(new_n, 1);
}

int main()
{
    std::string n = "9875";
    int k = 4;
    auto res = superDigit(n, k);

    std::cout << res << std::endl;
    
    return EXIT_SUCCESS;
}