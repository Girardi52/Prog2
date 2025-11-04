#include <iostream>
#include <vector>



void converteparaEuro(std::vector<double>& vendas);
constexpr double taxa_conversão{0.93}; 

int main(){
    
    //No main, imprima o vetor antes e depois de chamar a fun¸c˜ao para demonstrar que a modifica¸c˜ao
//por referencia foi bem-sucedida.


    std::vector<double> vendas{100,200,300};
    for ( int i = 0; i<vendas.size(); i++){
        std::cout<< "Os elementos do Vetor são " << vendas.at(i) << std::endl;

    }
    converteparaEuro(vendas);

    for ( int i = 0; i<vendas.size(); i++){
        std::cout<< "Os elementos do Vetor são " << vendas.at(i) << std::endl;

    }
    
    
}

void converteparaEuro(std::vector<double>& vendas){
    for ( int i = 0; i< vendas.size(); i++){
        vendas.at(i) =  vendas.at(i) * taxa_conversão;  
    }
    
}