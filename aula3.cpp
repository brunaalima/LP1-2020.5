
#include <iostream>
#include <string>
#include <string.h>
#include <fstream>

int main(int argc, char *argv[]) {
    std::string text;
    std::ofstream arquivo_saida("saida.txt",std::ios::app);

    if(argc==1){
        std::cout << "Uso: " << argv[0] << " Add 'mensagem'" << std::endl;
        return 1;
    }
    else if(argc==2 && (strcmp(argv[1],"Add"))==0){
        std::cout << "Insira a mensagem: ";
        std::getline(std::cin,text);
        arquivo_saida << text << std::endl;
        return 1;
    }
    else if(argc==2 && (strcmp(argv[1],"Add"))>0){
        std::cout << "Uso: " << argv[0] << " Add 'mensagem'" << std::endl;
        return 1;

    }
    else {
        arquivo_saida << argv[2] << std::endl;
        std::cout<<"Mensagem adiciona com sucesso"<<std::endl;
    }
    return 0;
}
