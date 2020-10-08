#ifndef ENGENHEIRO
#define ENGENHEIRO

#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado
{
public:
    Engenheiro();
    std::string nome;
    int projetos;

};

#endif
