#include "Professional.h"

int Professional::calculateWeekly() const {
	return monthly / 4.33; // average weeks per month
}

double Professional::calculateHealthcareContribution() const {
	return 0.65 * insurancePremium;
}