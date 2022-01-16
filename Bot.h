#include <iostream>
#include <string>
#include <iomanip>
#include <time.h>

//class of chatBot
class Bot{
private:    //atribiutes and intern functions;
    std::string botNome;
    std::string userName;
    std::string colect_name();
    std::string find_sign(int day, int month, int year);
    void infor_sing(std::string sing);
public: //public functions
    Bot();
    ~Bot();
    void askSign();
};
