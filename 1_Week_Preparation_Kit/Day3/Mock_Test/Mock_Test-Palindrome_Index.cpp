#include <iostream>
#include <cstdlib>
#include <string>


int palindromeIndex(std::string s) {
    for(int r = 0, l = s.size()-1; r<=l; ++r,--l)
    {
        if(s[r]!=s[l])
        {
            if(s[r]==s[l-1] && s[r+1]==s[l])
            {
                if(2<=l && s[r+1]==s[l-2])
                {
                    return l;
                } else {
                    return r;
                }
            } else if(s[r]==s[l-1]) {
                return l;
            } else {
                return r;
            }
        }
    }
    return -1;
}


int main() {
    std::string s = "aaab";
    auto res = palindromeIndex(s);

    std::cout << res << std::endl;
    
    return EXIT_SUCCESS;
}