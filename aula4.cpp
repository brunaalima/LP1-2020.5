
#include <iostream>
#include <string>
#include <string.h>
#include <fstream>

int main(int argc, char *argv[]) {
    std::string text;

    if(argc==1){
        std::cout << "Uso: " << argv[0] << " Add 'mensagem'" << std::endl;
        return 1;
    }
    else if(argc==2 && (strcmp(argv[1],"Add"))==0){
        std::cout << "Insira a mensagem: ";
        std::getline(std::cin,text);
        std::ofstream arquivo_saida("saida.txt",std::ios::app);
        arquivo_saida << text << std::endl;
        arquivo_saida.close();
        return 1;
    }

   else if(argc==2 && (strcmp(argv[1],"list"))==0){
        std::ifstream arquivo_leitura("saida.txt");
        if(arquivo_leitura.is_open()){
             while(!arquivo_leitura.eof()){
                  std::string mensagem;
                  std::getline(arquivo_leitura,mensagem);
                  if(mensagem.size()!=0){
                       std::cout << mensagem << std::endl;
                  }
             }
             arquivo_leitura.close();
        }
        else std::cout<< "O Arquivo nao existe" << std::endl;
        return 1;
    }
 
    else if(argc==2 && (strcmp(argv[1],"Add"))>0){
        std::cout << "Uso: " << argv[0] << " Add 'mensagem'" << std::endl;
        return 1;

    }
    else {
        std::ofstream arquivo_saida("saida.txt",std::ios::app);
        arquivo_saida << argv[2] << std::endl;
        std::cout<<"Mensagem adiciona com sucesso"<<std::endl;
        arquivo_saida.close();
    }
    return 0;
}
