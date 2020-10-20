#include <iostream>
#include "Vendedor.hpp"

void Vendedor::printData() {

    std::cout << "Nome: " << this->_name << std::endl;
	std::cout << "Salario Mes: " << this->monthPayment() << std::endl;
	std::cout << "Quota vendas: " << this->getAnualSailsQuota() << std::endl;
	std::cout << std::endl;

}
