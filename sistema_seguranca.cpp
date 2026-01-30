#include <iostream>

int main() { 
    int senha_secreta = 8271;
    int tentativa = 0;

    while (tentativa != senha_secreta) 
 {
    std::cout << "Digite a senha: ";
    std::cin >> tentativa;
 }

 if (tentativa != senha_secreta) {
        std::cout << "Acesso Negado!" << std::endl;
    } else {
        std::cout << "Acesso Permitido!" << std::endl;
    }

    return 0;
}   