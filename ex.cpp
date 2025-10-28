#include <iostream>

#include <ctime>
#include <cstdlib>

void RegisterEvent();
int main () {
    srand ( time (0) ) ;
    std :: cout << " --- Registrando 5 eventos ---" << std :: endl ;
    for ( int i = 0; i < 5; ++ i ) {
        RegisterEvent () ;
    }
    return 0;
}

void RegisterEvent()
{
    static int IDevent{1};
    int randomNumber = rand();
    std::cout << "your ID  is:" << IDevent << std::endl;
    IDevent++;
    std::cout << "your Random Number is:  "<< randomNumber << std::endl;   
}