#ifndef VENDEDOR
#define VENDEDOR

#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado
{

public:
    std::string nome;

    double quotaTotalAnual();
};

#endif