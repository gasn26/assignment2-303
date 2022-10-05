#pragma once
#include "Employee.h"
class Professional : Employee
{
private:
	int monthly;
	int vacationDays;

public:
	// Default constructor
	Professional() : Employee(), monthly(0), vacationDays(0) {}

	// Basic Employee constructor
	Professional(std::string id, std::string first, std::string last)
		: Employee(id, first, last), monthly(0), vacationDays(0) {}

	// Complete constructor
	Professional(std::string id, std::string first, std::string last, int premium, int monthly, int vacation)
		: Employee(id, first, last, premium), monthly(monthly), vacationDays(vacation) {}


	/* Getters and Setters */
	int getMonthly() const { return monthly; }
	void setMonthly(int m) { monthly = m; }
	int getVacationDays() const { return vacationDays; };
	void setVacationDays(int v) { vacationDays = v; }

	int calculateWeekly() const;
	// Returns estimated weekly salary

	double calculateHealthcareContribution() const;
	// Returns amount company will pay for health insurance
	// Company will pay 65% of insurance premium for salaried employees
};

