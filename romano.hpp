#ifndef ROMANO_HPP
#define ROMANO_HPP

#include <stdexcept>
#include <string>

using namespace std;

class Romano {
    public:
        static int converte_algarismo(char algarismoRomano);
        static int romano_arabico(string numRomano);
};

#endif // ROMANO_HPP