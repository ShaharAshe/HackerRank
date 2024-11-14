#include <iostream>
#include <cstdlib>
#include <vector>
#include <unordered_map>
#include <string>


std::vector<int> matchingStrings(std::vector<std::string> strings, std::vector<std::string> queries) {
    std::unordered_map<std::string, int> res_m;
    std::vector<int> res;
    
    for(size_t q_i=0; q_i<queries.size(); ++q_i)
    {
        --(++res_m[queries[q_i]]);
        for(size_t s_i=0; s_i<strings.size(); ++s_i)
        {
            if(queries[q_i]==strings[s_i])
            {
                ++res_m[queries[q_i]];
                strings.erase(strings.begin()+s_i);
                --s_i;
            }
        }
        res.emplace_back(res_m[queries[q_i]]);
    }
    return res;
}

int main()
{
    std::vector<std::string> strings = {"aba","baba","aba","xzxb"};
    std::vector<std::string> queries = {"aba","xzxb","ab"};

    auto res = matchingStrings(strings, queries);

    for(size_t i = 0; i < res.size(); ++i)
    {
        std::cout << res[i];
        if (i!=res.size()-1)
        {
            std::cout << " ";
        }
        
    }

    return EXIT_SUCCESS;
}