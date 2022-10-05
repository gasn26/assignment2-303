#pragma once
#include "Employee.h"
class Nonprofessional : Employee
{
private:
	int hourly;
	int hoursPerWeek;
	int hoursWorked;

public:
	// Default constructor
	Nonprofessional() : Employee(), hourly(0), hoursPerWeek(0), hoursWorked(0) {}

	// Basic Employee constructor
	Nonprofessional(std::string id, std::string first, std::string last)
		: Employee(id, first, last), hourly(0), hoursPerWeek(0), hoursWorked(0) {}

	// Complete constructor
	Nonprofessional(std::string id, std::string first, std::string last, int premium, int hr, int hw)
		: Employee(id, first, last, premium), hourly(hr), hoursPerWeek(hw), hoursWorked(0) {}


	/* Getters and Setters */
	int getHourly() const { return hourly; }
	void setHourly(int h) { hourly = h; }

	int addHours(int h);
	// add worked hours and return total hours worked

	int getVacationDays() const;
	// Hourly workers will get 1 day off for every 140 hours they work (about 2 weeks for full time per year)
	// as long as they are working full time

	int calculateWeekly() const;
	// Returns calculated weekly pay

	double calculateHealthcareContribution() const;
	// Company will pay 75% of insurance premium for salaried employees if working more than half time
};

