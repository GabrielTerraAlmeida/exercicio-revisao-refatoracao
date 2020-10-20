#include "Empregado.hpp"
    
double Empregado::monthPayment() {
	// Total payment considering extra worked hours.

    double workHourAgreed = 8;
    double salaryIncrease = 50/100;
    double extraHours = 0;
    
	if (_workedHours > workHourAgreed) {
		extraHours = _workedHours - workHourAgreed;
	}
	
	double totalSalary;
	totalSalary = _workedHours*_hourSalary + extraHours*salaryIncrease*_hourSalary;
	
	return totalSalary;
	
}
