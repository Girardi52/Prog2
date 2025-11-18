#include <iostream>

class veiculo{

    public:
    std::string placa;
    std::string modelo;
    std::string veiculo;

    int  anoFabricado;

    double KM;

    void acessarValores(){
        std::cout << "Placa " << placa << std::endl;
        std::cout<< "modelo" << modelo << std::endl;
        std::cout << "Ano Fabricado" << anoFabricado << std::endl;
        std::cout<< "Atualiza Kilometragem" << KM << std::endl;

        std::cout<< "Seu veiculo" << veiculo << std::endl;
    }




};



class motorista{

    public:
    std::string Nome;
    std::string cpf;
    


    int idade;

    std::string tipoCnh;
    

    void dadosMotorista(){
        std::cout<< "Nome do Motorista" << Nome << std::endl;
        std::cout << "Informe o Cpf do Motorista" << std::endl;
        std::cout << "Informe a Idade do motorista: " << std::endl;


    }


};


void autorizaMotorista(motorista ummotorista, veiculo autorizado){
    if (ummotorista.tipoCnh == "A" && autorizado.veiculo == "carro"){
        std::cout << "Você pode usar a habilitação tipo A";
    }
    if (ummotorista.tipoCnh == "B"&& autorizado.veiculo == "moto"){
        std::cout << "Você pode usar a habilitação tipo B";

    }
    if (ummotorista.tipoCnh == "C"&& autorizado.veiculo == "Carreta"){
        std::cout << "Você pode usar a habilitação tipo C";
    // if (ummotorista.tipoCnh == "D"&&){
    //     std::cout << "Você pode utilizar a Habilitação tipo C";
    // }
    }
    
    
    // if (ummotorista.tipoCnh == "D"&&){
    //     std::cout << "Você pode utilizar 
    // if (ummotorista.tipoCnh == "D"&&){
    //     std::cout << "Você pode utilizar a Habilitação tipo C";
    // }
    
}

int main(){
    veiculo  veiculo1;
    veiculo1.placa = "onz3j76";
    veiculo1.veiculo = "carro";
    veiculo1.modelo = "Gol";
    veiculo1.anoFabricado = 2015;

    veiculo1.KM = 34542.032;


    motorista motorista1;
    motorista1.Nome = "Pedro";
    motorista1.cpf = "073004241-39";
    motorista1.idade = 18;
    motorista1.tipoCnh = "A";

    veiculo1.acessarValores();
    motorista1.dadosMotorista();
    return 0;

}