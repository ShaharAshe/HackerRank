#include <iostream>
#include <cstdlib>
#include <string>


std::string caesarCipher(std::string s, int k) {
    for(size_t i = 0; i<s.size(); ++i)
    {
        if('a'<=s[i] && s[i]<='z')
        {
            int c = s[i]-'a';
            c+=k;
            c%=(26);
            s[i]=c+'a';
        } else if('A'<=s[i] && s[i]<='Z'){
            int c = s[i]-'A';
            c+=k;
            c%=(26);
            s[i]=c+'A';
        }
    }
    return s;
}

int main() {
    std::string s = "middle-Outz";
    int k = 2;
    auto res = caesarCipher(s, k);
    
    std::cout << res << std::endl;
    
    return EXIT_SUCCESS;
}