
#include <iostream>
#include <string>
#include <string.h>

int main(int argc, char *argv[]) {
    std::string text;

    if(argc==1){
        std::cout << "Uso: " << argv[0] << " Add 'mensagem'" << std::endl;
        return 1;
    }
    else if(argc==2 && (strcmp(argv[1],"Add"))==0){
        std::cout << "Insira a mensagem: ";
        std::getline(std::cin,text);
        return 1;
    }
    else if(argc==2 && (strcmp(argv[1],"Add"))>0){
        std::cout << "Uso: " << argv[0] << " Add 'mensagem'" << std::endl;
        return 1;

    }
    else {
        std::cout<<"Mensagem adiciona com sucesso"<<std::endl;
    }
    return 0;
}
