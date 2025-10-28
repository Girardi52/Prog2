# include <iostream>
# include <string>
# include <vector>
# include <memory>
int main () {
    auto documento = std :: make_shared < std :: string >( " Conteudo Secreto " ) ;
    std :: cout << " Doc criado . Refs : " << documento . use_count () << std ::
    endl ;
    std :: vector < std :: shared_ptr < std :: string > > usuarios ;
    std :: cout << " \n - - - Adicionando usuarios ---" << std :: endl ;
    
    
    // TODO : Adicione o ’ documento ’ 3 vezes ao vetor ’ usuarios ’
    for ( int i= 0; i<3; i++)
    {
        usuarios.push_back(documento);    
        // A cada adicao , imprima a contagem de referencias .
        documento.use_count();
    }
    
    
    std :: cout << " \n - - - Removendo usuarios ---" << std :: endl ;
    
    
    // TODO : Enquanto o vetor ’ usuarios ’ nao estiver vazio , remova
    for ( int i = 0; i<3; i++)
    {
        usuarios.at(i).reset();
    }    
    
    // o ultimo elemento e imprima a contagem de referencias
     .
    std :: cout << " \ nUltima ref . prestes a sair do escopo . " << std :: endl ;
    return 0;
}