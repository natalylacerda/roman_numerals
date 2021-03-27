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

// int Romano::romano_arabico(string numRomano) {

// }