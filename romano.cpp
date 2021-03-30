// Copyright 2021 Nataly Lacerda
#include "romano.hpp"

// Funcao que converte cada algarismo romano
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
        default: throw std::invalid_argument("Argumento invalido.");
    }
}

// Funcao que converte numeral romano para numeral arabico
int Romano::romano_arabico(std::string numRomano) {
    int aux = 0;
    int result = 0;

    // Numero nao pode ter mais que 30 caracteres
    if (numRomano.length() > 30)
        return -1;

    // I, X e C nao se repetem mais de tres vezes
    if ((numRomano.find("IIII") != std::string::npos) ||
        (numRomano.find("XXXX") != std::string::npos) ||
        (numRomano.find("CCCC") != std::string::npos))
        return -1;

    // V, L e D nao se repetem
    if ((numRomano.find("VV") != std::string::npos) ||
        (numRomano.find("LL") != std::string::npos) ||
        (numRomano.find("DD") != std::string::npos))
        return -1;

    for (int i = numRomano.length() - 1; i >= 0; i--) {
        try {
            aux = converte_algarismo(numRomano[i]);
        }
        catch (std::invalid_argument &excecao) {
            return -1;
        }

        if (i != numRomano.length() - 1) {
            // I so aparece antes de I, V e X
            if (aux == 1 && converte_algarismo(numRomano[i+1]) > 10)
                return -1;
            // X so aparece antes de I, V, X, L e C
            if (aux == 10 && converte_algarismo(numRomano[i+1]) > 100)
                return -1;

            // Se um caracter de menor valor vier antes do maior,
            // subtraimos os seus valores
            if (aux < converte_algarismo(numRomano[i+1]))
                result -= aux;
            // Caso contrário, somamos.
            else
                result += aux;
        } else {
            result += aux;
        }
    }
    // O numero nao pode ser maior que 3000
    if (result <=3000)
        return result;
    else
        return -1;
}
