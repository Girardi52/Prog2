#include <iostream>
#include <array>
#include <algorithm>


int main(){
    std::array<int,6> pontuacoes{2,4,5,7,8,610};

    
    int pontuacaoalvo{610};

    // entre parenteses você está indicando que é uma função

    std::sort(std::begin(pontuacoes) , std::end(pontuacoes) );

    for ( int i : pontuacoes ){
        std::cout << "Seu Valor nesse indice e\n"<< i << std::endl;
    }


    bool found = std::binary_search(std::begin(pontuacoes), std::end(pontuacoes), pontuacaoalvo);
    
    if (found == true){
        std::cout<< "Seu alvo foi Alcançado: " << std::endl;

    }else {
        std::cout<< "Seu alvo Não foi Encontrado" << std::endl;
    } 
    return 0;
}