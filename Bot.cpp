#include "Bot.h"

//contructor of bot, with some name variations of the name bot;
Bot::Bot(){
    srand(time(NULL));
    int chance = rand() % 5;

    switch (chance){
    case 0:
        botNome = "Charles";
        break;
    case 1:
        botNome = "B13O";
        break; 
    case 2:
        botNome = "K-B20";
        break;
    case 3:
        botNome = "Mark";
        break;
    case 4:
        botNome = "Lewis";
        break;       
    case 5:
        botNome = "Ronald";
        break;
    }
    userName = colect_name();   //colect the user name;
}

Bot::~Bot(){
}

std::string Bot::colect_name(){
    std::string name;
    std::cout<<"Olá, eu sou " << botNome << ", qual seu nomew? (insira somente seu nome)"<<std::endl;
    std::cin>>name;
    return name;
}

void Bot::askSign(){
    bool know;
    while(true){
        char answer = '0';  //initialization of the variable that will denife if the user know or not, his own sign;
        std::cout<<"Muito prazer " << userName << "! Você sabe seu signo? (Responda usando 's' para sim ou 'n' para não)" << std::endl;
        std::cin>>answer;
        if(answer=='s' || answer=='S'){     //validation of the answer of the user;
            know=true;
            break;
        }else if(answer=='n' || answer=='N'){
            know==false;
            break;
        }else{
            std::cout<<"Valor inválido! Por favor, insira o valor novamente." <<std::endl;
        }
    }

    if(know==true){
        std::string sign;
        std::cout<<"Ótimo! me diga seu signo? Digite corretamente por favor:" <<std::endl;
        std::cin>>sign;
        infor_sing(sign);
    }else{
        int day;
        int month;
        int year;
        std::cout<<"Sem problemas! Me diga então, que dia você nasceu?"<<std::endl;
        std::cin>>day;
        std::cout<<"Me diga agora, qual mês de seu nascimento?"<<std::endl;
        std::cin>>month;
        std::cout<<"E em que ano você nasceu?"<<std::endl;
        std::cin>>year;
        std::string sign = find_sign(day, month, year);
        infor_sing(sign);
    }
}

void Bot::infor_sing(std::string sign){
    std::cout<<sign<<std::endl;         //finish this function;
                                        //she must catch the sign and provide information about it;
}

std::string Bot::find_sign(int day, int month, int year){
    std::cout<<day<< " " <<month<<" "<<year<<std::endl;
    return "Sigino";
}