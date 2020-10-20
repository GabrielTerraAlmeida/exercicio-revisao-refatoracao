#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	// A given employee.
	
    public:
	    Empregado(std::string name, double hourSalary, double workedHours): _name(name), _hourSalary(hourSalary), _workedHours(workedHours) {}
	    
	    std::string getName() const { return _name; }
	    double getSalary() const { return _hourSalary; }
		double getHours() const { return _workedHours; }
			    
	    // Total payment considering extra worked hours.
	    double monthPayment();
	    
	    virtual void printData() = 0;
    
    protected:
    	std::string _name;
		double _hourSalary;
		double _workedHours;
};
#endif
