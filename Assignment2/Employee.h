#pragma once
#include <string>
class Employee
{
protected:
	std::string id;
	std::string fname;
	std::string lname;
	int insurancePremium;

public:
	Employee() : id("0"), fname(""), lname(""), insurancePremium(0) {}

	Employee(std::string id, std::string first, std::string last)
		: id(id), fname(first), lname(last), insurancePremium(0) {}

	Employee(std::string id, std::string first, std::string last, int premium) 
		: id(id), fname(first), lname(last), insurancePremium(premium) {}

	void setInsurancePremium(int p) { insurancePremium = p; }

	virtual int calculateWeekly() const = 0;
	virtual double calculateHealthcareContribution() const = 0;
	virtual int getVacationDays() const = 0;
};