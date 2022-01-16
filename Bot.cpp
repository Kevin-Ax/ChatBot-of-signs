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
    if(sign=="Áries" || sign=="áries" || sign=="aries" || sign =="Aries"){
        std::cout<<"O signo de Áries é o primeiro dos signos do zodíaco e a entrada do Sol nesse signo do zodíaco marca o início do Ano Novo Astrológico. Não é para menos que os arianos têm personalidade forte e são cheios de energia, né? Sobretudo, a personalidade de Áries é marcada pela intensidade, tanto em suas relações quanto em suas decisões. Basicamente, ele é o primeiro signo de elemento Fogo, o que traz características para o signo como ímpeto, coragem e ao mesmo tempo, bastante volatilidade. Ou seja: signos de Fogo costumam ser espontâneos, mas ao mesmo tempo imprevisíveis. Embora sejam taxados como difíceis por muitos outros signos do zodíaco, na verdade tudo o que um ariano deseja é diversão, compreensão e viver a vida de forma extraordinária!"<<std::endl;
    }else if(sign =="Touro" || sign =="touro"){
        std::cout<<"O signo de Touro é um dos mais tranquilos do Zodíaco, e seus nativos em geral são pessoas muito confiáveis e persistentes. As características de Touro refletem muito o elemento o qual pertencem, que é Terra. Por ser um elemento fixo, dificilmente você encontrará taurinos que amem mudanças. Sendo assim, esse elemento também representa certa rigidez e teimosia de quem tem os pés fincados sempre no chão. Eles costumam ser mais estratégicos e racionais, pensando bastante antes de tomar alguma atitude. Dessa maneira, às vezes são taxados de lerdos ou procrastinadores, mas a verdade é que precisam agir de forma metódica para terem a segurança de que estão fazendo o que é correto tanto para eles, quanto para os demais."<<std::endl;
    }else if(sign == "Gêmeos" || sign =="gêmeos"  || sign =="Gemeos"  || sign =="gemeos"){
        std::cout<<"O signo de Gêmeos é um dos mais animados do Zodíaco, e é por isso que seus nativos são reconhecidos por serem muito comunicativos e espertos! A personalidade de Gêmeos recebe bastante influência do elemento Ar, o qual pertencem. Assim, as ideias, a comunicação e a criatividade fazem parte da natureza dos geminianos. Porém, a dispersão desse elemento também indica a volatilidade e o fato de serem avessos a se sentirem “presos”."<<std::endl;
    }else if(sign == "Câncer" || sign =="câncer"  || sign =="Cancer"  || sign =="cancer"){
        std::cout<<"O signo de câncer é o mais emotivo do Zodíaco, e seus nativos são pessoas confiáveis e atenciosas. No entanto, a personalidade dos cancerianos também esconde aspectos que muitas pessoas não consideram! Os nativos desse signo pertencem ao elemento Água. Dessa forma, ao mesmo tempo que a fonte da nossa vida, ela também flui e é incerta – assim como as emoções humanas. Portanto, quem tem a Água como base tende a ter variações grandes de sentimentos. Assim é com os cancerianos, que são conhecidos por serem dramáticos ou até mesmo um pouco ranzinzas. Na verdade, essas características de Câncer são reflexo do lado afetivo mais intenso. Ao mesmo tempo, essa nuance faz com que sejam pessoas muito dedicadas e preocupadas com os demais."<<std::endl;
    }else if(sign == "Leão" || sign =="leão"  || sign =="Leao"  || sign =="leao"){
        std::cout<<"O signo de Leão é um dos mais confiantes do Zodíaco e seus nativos são cheios de generosidade e determinação. As características de Leão fazem com que eles tenham muito poder. Não é à toa que eles se acham – e são! – os reis da floresta e da coisa toda. rs O signo de Leão pertence ao elemento Fogo, que basicamente, mostra muita determinação, volatilidade e animação. Quem experimenta toda essa energia tem muita coragem para enfrentar o que for, mas também se torna um pouco temperamental demais. Quanto à fama, são conhecidos como os mais vaidosos e exibidos do Zodíaco. Na verdade, eles são regidos por nada menos que o Sol, e realmente são cheios de autoconfiança e gostam de tudo o que é belo ou pomposo. Por outro lado, essa “mania de grandeza” natural e personalidade mandona e até um pouco arrogante, esconde muita carência por atenção e validação dos seus atos."<<std::endl;
    }else if(sign =="Virgem" || sign =="virgem"){
        std::cout<<"O signo de Virgem é o mais sistemático dos signos do Zodíaco, o que torna seus nativos bastante dedicados e atentos. O signo de Virgem tem como elemento base a Terra. Em outras palavras, isso significa que gostam da estabilidade de ter seus pés fincados no chão, tateando o que é palpável e seguro. Portanto, os virginianos costumam ser bastante racionais, cautelosos e apegados ao que tem comprovação. Assim, a objetividade e as análises constantes também são caminho conhecido para quem nasceu sob esse signo. De fato, tanta minúcia, cuidado e perfeccionismo lhes deu o título de signo “mais chato” do Zodíaco. Aliás, serem “cheios de manias” também define bem os virginianos."<<std::endl;
    }else if(sign =="Libra" || sign =="libra"){
        std::cout<<"O signo de Libra é bastante diplomático e seus nativos são bastante sociáveis. Costumam ser bastante equilibrados e educados, então não é tão complicado manter uma relação com eles! A personalidade de Libra é mais voltada às ideias e ao racional. Afinal, é um dos signos de Ar, o que significa que pensam bastante e não gostam de se sentir limitados. Inclusive, a inteligência se manifesta nos librianos até mesmo por refletirem antes de emitir uma opinião. O símbolo de Libra remete à uma balança, e é exatamente disso que eles gostam: harmonia, paz e ponderação. Logo, evitam conflito a todo custo e também gostam de ser tratados com educação e respeito."<<std::endl;
    }else if(sign == "Escorpião" || sign =="escorpião"  || sign =="Escorpiao"  || sign =="escorpiao"){
        std::cout<<"O signo de escorpião é um dos mais intensos e intuitos signos do Zodíaco, com seus nativos apreciando o famoso “preto no branco”, conhecidos por sua personalidade forte. Como são poderosos os escorpianos! Pertencentes do elemento Água, os escorpianos traduzem perfeitamente aquela máxima: “águas calmas, mas profundas”. A saber, a água representa as emoções, a percepção e também à interiorização. Sendo assim, o signo de Escorpião é um ótimo representante dessas características, pois em sua personalidade há um mistério e uma potência que carregam todo a energia e a capacidade tem de nos dar a vida, mas também de nos arrastar para o fundo se não tomarmos cuidado. Normalmente, a relação com tudo o que o rodeia é de “8 ou 80”: não gostam de nada pela metade e não se contentam com o que é morno. Essa firmeza e obstinação fazem com que tenham personalidade forte, nem sempre compreendida pelos demais signos do Zodíaco."<<std::endl;
    }else if(sign == "Sagitário" || sign =="sagitário"  || sign =="Sagitario"  || sign =="sagitario"){
        std::cout<<"O signo de Sagitário é o mais otimista e idealista dos signos do Zodíaco! Os seus nativos são inteligentes, muito sinceros e exalam confiança. A base do signo de Sagitário é o Fogo. Embora eles sejam pessoas muito ligadas ao intelecto (notória característica do elemento Ar), a chama se faz presente no signo. Isso porque são estimulantes e espontâneos, além de otimistas e animados. Além disso, têm uma característica básica do componente, que é a impulsividade. Quando um sagitariano se irrita ou quer exprimir sua opinião (e eles sempre querem), fazem sem pensar nas consequências. De tal forma que os nativos de outros signos costumam falar que essas pessoas dão seus “coices” (referência ao centauro que os representa, meio homem e meio cavalo) quando contrariados ou querem reforçar seu ponto com “delicadeza”. rs Ao mesmo tempo, não tem tempo ruim com eles: gostam de se divertir, buscam soluções, pensam sempre no melhor e na luz no final do túnel. Mas nem sempre são extrovertidos: podem ser mais “pé no chão” e tranquilos também, mas cheios de inquietações e vontades."<<std::endl;
    }else if(sign == "Capricórnio" || sign =="capricórnio"  || sign =="Capricornio"  || sign =="capricornio"){
        std::cout<<"O signo de Capricórnio é, certamente, o mais centrado dos signos do Zodíaco, com seus nativos muito responsáveis e objetivos. Dentre os signos, provavelmente os capricornianos são os mais céticos. Isso porque eles têm como elemento base a Terra, ou seja: seus pés estão bem fincados no chão, no que frutifica, é palpável e vale a pena. Outro ponto chave dos signos terrenos é a disciplina e a dedicação que brota aos montes quando estão empenhados em obter algo. A personalidade de Capricórnio é, particularmente, sábia e bastante discreta. Dificilmente você verá um capricorniano raiz cometendo loucuras impensadas ou sendo impulsivo. O comprometimento também é um ponto forte desses nativos, que fazem de tudo por quem gostam e se provam leais e confiáveis. Por outro lado, são conhecidos como os avarentos do Zodíaco por quem nasceu sob outros signos. Na verdade, a ambição que tem e a obstinação fazem com que trabalhem muito e nunca estejam plenamente satisfeitos. Assim, querem ser sempre um pouco melhores do que ontem e constantemente isso é confundido com puro materialismo."<<std::endl;
    }else if(sign == "Aquário" || sign =="aquário"  || sign =="Aquario"  || sign =="aquario"){
        std::cout<<"O signo de aquário é o mais idealista dos signos do Zodíaco. Seus nativos são extremamente curiosos e persistentes. A personalidade dos aquarianos se conecta diretamente ao elemento o qual pertencem, ou seja: Ar. Afinal, o aspecto fala sobre o poder das ideias, da criatividade e também do desprendimento. Assim, de todos os signos de Ar (Gêmeos e Libra também estão nesse grupo), o signo de Aquário é o mais inventivo, sempre ligado a tudo o que acontece e com forte interesse por diferentes áreas do conhecimento. Sempre têm uma teoria ou forte convicção sobre algo e insistem em provar seu ponto de vista a todo custo. Provavelmente, vão discordar desse fato, porque são assim, mesmo. rs  Também por isso são taxados como os “diferentões” dos signos do Zodíaco, uma vez que podem se tornar bastante excêntricos e persistentes com as suas opiniões."<<std::endl;
    }else if(sign =="Peixes" || sign =="peixes"){
        std::cout<<"O signo de Peixes é o mais sonhador dos signos do Zodíaco, o que torna os seus esperançosos e muito prestativos. O signo de Peixes é o último do Zodíaco e seu elemento é a Água. Certamente, esse elemento confere aos piscianos características muito positivas, como a sensibilidade, a adaptação e também a forte intuição. No entanto, como os demais signos de Água, também pode ter dificuldade de equilibrar as emoções, podendo transbordar seus sentimentos de forma dramática. São pessoas criativas e talentosas, mas também são considerados como o “signo do mundo da Lua”. Devido à imaginação muito fértil, é comum que os piscianos se percam em suas ideias, distraindo-se pela beleza de cada coisinha admirável que há no mundo. rs"<<std::endl;
    }
}

std::string Bot::find_sign(int day, int month, int year){
    std::cout<<day<< " " <<month<<" "<<year<<std::endl;
    return "Sigino";
}