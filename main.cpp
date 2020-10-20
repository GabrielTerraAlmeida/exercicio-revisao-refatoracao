#include <iostream>
#include "Engenheiro.hpp"
#include "Vendedor.hpp"

int main() {
	
    Engenheiro eng1("Joao Snow", 35, 3, 9.5);
	eng1.printData();
	
	Engenheiro eng2("Daniela Targaryen", 30, 1, 8);
	eng2.printData();
  
	Engenheiro eng3("Bruno Stark", 30, 2, 8);
	eng3.printData();
	
	Vendedor vend1("Tonho Lannister", 20, 5000, 6);
	vend1.printData();
	
	Vendedor vend2("Jose Mormont", 25, 3000, 8);
	vend2.printData();
  
	Vendedor vend3("Sonia Stark", 30, 4000, 8);
	vend3.printData();

  return 0;
  
}
