#include <iostream>
#include "Empregado.hpp"
#include "Engenheiro.hpp"

void Engenheiro::printData() {

    std::cout << "Nome: " << this->_name << std::endl;
	std::cout << "Salario Mes: " << this->monthPayment() << std::endl;
	std::cout << "Projetos: " << this->_numProjects << std::endl;
	std::cout << std::endl;

}
