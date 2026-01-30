#include <iostream>

int main() { 
    int senha_secreta = 8271;
    int tentativa = 0;
// Se o usuario errar a senha , o sistema nao vai aceitar e vai pedir para o usuario botar a senha novamente até acertar
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
