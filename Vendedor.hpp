#ifndef VENDEDOR_H
#define VENDEDOR_H

#include <iostream>
#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {
	// A given Sailsman.

    public:
		Vendedor(std::string name, double hourSalary, double monthSailsQuota, double workedHours): _monthSailsQuota(monthSailsQuota), Empregado(name, hourSalary, workedHours) {}
	    
	    double getMonthSailsQuota() const { return _monthSailsQuota; }
	    
	    double getAnualSailsQuota() const { return _monthSailsQuota * 12; }
	    
		void printData() override;
    
    protected: 
	    double _monthSailsQuota;
	
};
#endif	
