#include "Nonprofessional.h"

int Nonprofessional::addHours(int h) {
	hoursWorked += h;
	return hoursWorked;
}

int Nonprofessional::getVacationDays() const {
	if (hoursPerWeek < 35) return 0; // if you are not working full time
	return hoursWorked / 140;
}

int Nonprofessional::calculateWeekly() const {
	return hourly * hoursPerWeek;
}

double Nonprofessional::calculateHealthcareContribution() const {
	if (hoursPerWeek < 20) return 0; // if less than half time
	return 0.75 * insurancePremium;
}