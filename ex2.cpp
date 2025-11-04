#include <iostream>
#include <vector>
#include <format>


int main()
{
    std::vector<int>leiturastemp;


    leiturastemp.push_back(65);
    leiturastemp.push_back(70);
    leiturastemp.push_back(72);
    
    
    
    std::cout << "O tamanho do Seu vetor eh\n" << leiturastemp.size() << std::endl;

    
    std::cout<< "Falha no Sistema\n  ";
    leiturastemp.push_back(85);


    // imprima o valor da ultima leitur
    std::cout << "O seu ultimo valor é" << leiturastemp.back() << std::endl;
    leiturastemp.pop_back();
    std::cout << "Ultimo valor Removido com Sucesso!!\n ";

    for (int i : leiturastemp){
        std::cout<< i << std::endl;
    }
    return 0;

}


