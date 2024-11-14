#include <iostream>
#include <cstdlib>
#include <string>



std::string timeConversion(std::string s) {
    std::string format = s.substr(s.size()-2, 2);
    
    int hour = std::atoi(s.substr(0, 2).c_str());
    
    if(format=="AM")
    {
        if(hour==12){
            hour-=12;
        }
    } else {
        if(hour!=12){
            hour+=12;
        }
    }
    std::string res = std::to_string(hour);
    if(res.size()<2){
        res = '0'+res;
    }
    return res+s.substr(2,s.size()-4);
    
    
    return res;
}

int main()
{
    std::string s = "07:05:45PM";
    auto res = timeConversion(s);

    std::cout << res << std::endl;
    
    return EXIT_SUCCESS;
}
