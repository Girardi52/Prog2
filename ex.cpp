#include <iostream>
#include <array>
#include <format>




int main(){
    constexpr int Num_product{5};  // constexpr é conhecido em tempo de compilação, temos informação da variavel, portanto, é mais rapido e mais eficiente

    constexpr float imposto{0.15};

    std::array<double, Num_product> BasePrices;


    //vetor.size() = 5;

    for (int i = 0; i< BasePrices.size(); i++ ){

        double valores{};
        std::cout << "Informe O Valor: ";
        std::cin >> valores;
        BasePrices.at(i) = valores; // o at serve para evitar que você printe alguma coisa errado, um lixo de memória 
        std::cout <<  BasePrices.at(i) << std::endl;
    }
//Percorra o array precosBase usando um laco for simplificado (range-based for). Para cada
//preco, calcule e imprima o Preco Final (Preco Base × (1 + IMPOSTO)).
    
    
    for ( double value : BasePrices ){
        double finalprice = value * ( 1 + imposto);
        std::cout << " O seu valor eh\n " << finalprice;
    }
    std::cout << std::endl;


    return 0;
}