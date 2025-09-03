#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include "Currency_Converter.h"

// === Currency Converter ===
void runCurrencycurrency(void) {

	int operation;
	operation = choosecurrency();

	double input;
	double output;

	if (operation == 1) {
		// CAD to USD
		input = getCADInput();
		output = giveUSDFromCAD(input);
		printf("\nIf you have %.2f CAD, it is equal to %.2f USD.\n", input, output);
	}
	else if (operation == 2) {
		// CAD to EUR
		input = getCADInput();
		output = giveEURFromCAD(input);
		printf("\nIf you have %.2f CAD, it is equal to %.2f EUR.\n", input, output);
	}
	else if (operation == 3) {
		// USD to CAD
		input = getUSDInput();
		output = giveCADFromUSD(input);
		printf("\nIf you have %.2f USD, it is equal to %.2f CAD.\n", input, output);
	}

	return;
}

// === Choose Currency Converter ====
int choosecurrency(void) {
	int operation;
	do {
		printf("\n1 for CAD to USD");
		printf("\n2 for CAD to EUR");
		printf("\n3 for USD to CAD");
		printf("\nPlease choose your unit conversion: ");
		if (scanf(" %d%*[^\n]", &operation) != 1) {
			printf("\nInvalid input, please try again.\n");
			operation = 0;
		}
		else if (operation != 1 && operation != 2 && operation != 3) {
			printf("\nPlease choose one of the valid options: 1, 2, or 3.\n");
		}
	} while (operation != 1 && operation != 2 && operation != 3);

	return operation;
}

// === CAD to USA ===
double getCADInput(void) {
	double cad = -1;
	printf("\nPlease enter the amount in CAD: ");
	if (scanf(" %lf%*[^\n]", &cad) != 1 || cad <= 0) {
		printf("Invalid input!\n");
		printf("\nPlease enter the amount in CAD: ");
		cad = -1;
	}
	while (cad <= 0) {
		printf("Invalid input!\n");
		printf("\nPlease enter the amount in CAD: ");
		if (scanf(" %lf%*[^\n]", &cad) != 1 || cad <= 0) {
			cad = -1;
		}
	}
	return cad;
}
double giveUSDFromCAD(double input) {
	return input * 0.74;
}

// === CAD to EUR ===
double giveEURFromCAD(double input) {
	return input * 0.68;
}

// ===  USD to CAN ===
double getUSDInput(void) {
	double usd = -1;
	printf("\nPlease enter the amount in USD: ");
	if (scanf(" %lf%*[^\n]", &usd) != 1 || usd <= 0) {
		printf("Invalid input!\n");
		printf("\nPlease enter the amount in USD: ");
		usd = -1;
	}
	while (usd <= 0) {
		printf("Invalid input!\n");
		printf("\nPlease enter the amount in USD: ");
		if (scanf(" %lf%*[^\n]", &usd) != 1 || usd <= 0) {
			printf("Invalid input, Please try again");
			usd = -1;
		}
	}
	return usd;
}
double giveCADFromUSD(double input) {
	return input * 1.35; // Example: 1 USD = 1.35 CAD
}


