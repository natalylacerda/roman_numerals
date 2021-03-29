// Copyright 2021 Nataly Lacerda
#ifndef ROMANO_HPP_
#define ROMANO_HPP_

#include <stdexcept>
#include <string>

class Romano {
 public:
    static int converte_algarismo(char algarismoRomano);
    static int romano_arabico(std::string numRomano);
};

#endif  // ROMANO_HPP_
