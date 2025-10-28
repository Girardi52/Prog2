# include <iostream>
/*

*/

void processarDados () {
    int * dadosImportantes = new int (100) ; // esse foi um erro em que a memoria não foi liberada 
    int * valorTemporario = new int (42) ;
    //delete valorTemporario ;
    std :: cout << " Valor ( apos delete ) : " << * valorTemporario << std::endl;
    delete valorTemporario; // colocando após o print pra o concerto
    delete dadosImportantes;
        // nessa linha de código o erro está em printar o ponteiro depois de liberar a memoria
        //endl ;
    int * ptrOriginal = new int (99) ;
    int * ptrCopia = ptrOriginal ;
    //delete ptrOriginal ;
    delete ptrCopia ;  // aqui ele está liberando a memória duas vezes
    }

    int main () {
    processarDados () ;
    std :: cout << " Programa concluiu . " << std :: endl ;
    return 0;
}



