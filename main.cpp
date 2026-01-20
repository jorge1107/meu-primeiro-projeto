#include <iostream>

long long fatorial(int n) {
    if (n < 0) return 0;
    long long f = 1;
    for (int i = n; i > 1; i--) {
        f *= i;
    }
    return f;
}

long long permutacao(int n) {
    return fatorial(n);
}

long long combinacao(int n, int k) {
    if (k < 0 || k > n) return 0;
    return fatorial(n) / (fatorial(k) * fatorial(n - k));
}

long long arranjo(int n, int k) {
    if (k < 0 || k > n) return 0;
    return fatorial(n) / fatorial(n - k);
}

void analiseCombinatoria() {
    int s = 0;
    int n, k;
    
    while (s < 1 || s > 3) {
        std::cout << "\n--- Menu de Analise Combinatoria ---" << std::endl;
        std::cout << "1 - Permutacao (Pn)" << std::endl;
        std::cout << "2 - Combinacao (Cn,k)" << std::endl;
        std::cout << "3 - Arranjo (An,k)" << std::endl;
        std::cout << "Escolha uma opcao: ";
        std::cin >> s;

        if (s < 1 || s > 3) {
            std::cout << "Opcao invalida. Tente novamente." << std::endl;
        }
    }

    switch (s) {
        case 1:
            std::cout << "\n>> Permutacao <<" << std::endl;
            std::cout << "Digite o valor de n: ";
            std::cin >> n;
            std::cout << "Resultado P(" << n << ") = " << permutacao(n) << std::endl;
            break;
        case 2:
            std::cout << "\n>> Combinacao <<" << std::endl;
            std::cout << "Digite o valor de n: ";
            std::cin >> n;
            std::cout << "Digite o valor de k: ";
            std::cin >> k;
            std::cout << "Resultado C(" << n << "," << k << ") = " << combinacao(n, k) << std::endl;
            break;
        case 3:
            std::cout << "\n>> Arranjo <<" << std::endl;
            std::cout << "Digite o valor de n: ";
            std::cin >> n;
            std::cout << "Digite o valor de k: ";
            std::cin >> k;
            std::cout << "Resultado A(" << n << "," << k << ") = " << arranjo(n, k) << std::endl;
            break;
    }
}

int main() {
    char continuar = 's';

    // Ciclo 'do-while' garante que o programa corre pelo menos uma vez
    do {
        analiseCombinatoria();

        std::cout << "\nDeseja realizar outro calculo? (s/n): ";
        std::cin >> continuar;

        // O loop continua se o utilizador digitar 's' ou 'S'
    } while (continuar == 's' || continuar == 'S');

    std::cout << "Programa encerrado." << std::endl;

    return 0;
}