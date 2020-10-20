#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include <iostream>
#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {
	// A given Engineer.

    public:
		Engenheiro(std::string name, double hourSalary, int numProjects, double workedHours): _numProjects(numProjects), Empregado(name, hourSalary, workedHours) {}
	    
	    int getNumProjects() const { return _numProjects; }
	    
		void printData() override;
    
    protected:
	    int _numProjects;
	
};
#endif
