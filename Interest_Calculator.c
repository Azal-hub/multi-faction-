#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include "Interest_Calculator.h"

// === Interest Calculator === 
void runInterestCalculator(void) {
	double principal = getPrincipalInput();
	double rate = getRateInput();
	int time = getTimeInput();

	printf("\nIf principal is $%.2lf and rate is %.2lf%%"
		" for %d year(s) then the interest is $%.2lf\n"
		, principal, rate, time, principal * rate * time / 100);

	return;
}

// === Interest Calculator ===
double getPrincipalInput(void) {
	double principal;
	do
	{
		printf("\nPlease enter your principal: ");
		if (scanf(" %lf%*[^\n]", &principal) != 1 || principal <= 0) {
			printf("\nplease try again.\n");
		}

	} while (principal <= 0);
	return principal;
}
double getRateInput(void) {
	double rate;
	do
	{
		printf("\nPlease enter your rate: ");
		if (scanf(" %lf%*[^\n]", &rate) != 1 || rate <= 0) {
			printf("\nplease try again.\n");
		}

	} while (rate <= 0);
	return rate;
}
int getTimeInput(void) {
	int time;
	do
	{
		printf("\nPlease enter the duration in year(s): ");
		if (scanf(" %d%*[^\n]", &time) != 1 || time <= 0) {
			printf("\nplease try again.\n");
		}

	} while (time <= 0);
	return time;
}