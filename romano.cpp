#include "romano.hpp"

int Romano::converte_algarismo(char algarismoRomano) {
    switch (algarismoRomano) {
        case 'I': return 1;
            break;
        case 'V': return 5;
            break;
        case 'X': return 10;
            break;
        case 'L': return 50;
            break;
        case 'C': return 100;
            break;
        case 'D': return 500;
            break;
        case 'M': return 1000;
            break;
        default: throw invalid_argument("Argumento invalido.");
    }
}

int aux = 0;

int Romano::romano_arabico(string numRomano) {
    if (numRomano.length() > 30)
        return -1;

    if (numRomano.find("IIII") || numRomano.find("XXXX") || numRomano.find("CCCC"))
        return -1;

    if (numRomano.find("VV") || numRomano.find("LL") || numRomano.find("DD"))
        return -1;

    for (int i = numRomano.length() - 1; i >= 0; i--) {
        try {
            aux = converte_algarismo(numRomano[i]);
        }
        catch (invalid_argument &excecao) {
            return -1;
        }

        if (i != 0) {
            if (aux == 1 && numRomano[i-1] > 10)
                return -1;
            if (aux == 10 && numRomano[i-1] > 100)
                return -1;
        }
        
    }
    return 1;
}