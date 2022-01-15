#include <iostream>
#include <string>
#include <iomanip>
#include <time.h>

class Bot{
private:
    std::string botNome;
    std::string userName;
    std::string colect_name();
    std::string find_sign(int day, int month, int year);
    void infor_sing(std::string sing);
public:
    Bot();
    ~Bot();
    void askSign();
};
