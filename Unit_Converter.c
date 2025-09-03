#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include "Unit_Converter.h"

// === Unit Converter ===
void runUnitConverter(void) {

	int operation;
	operation = chooseUnitConversionType();

	float input;
	float output;

	if (operation == 1) {
		// Kilograms to Pounds
		input = getKilogramInput();
		output = convertKgToPounds(input);
		printf("\n%.2f kilograms is equal to %.2f pounds.\n", input, output);
	}
	else if (operation == 2) {
		// Meters to Inches
		input = getMeterInput();
		output = convertMetersToInches(input);
		printf("\n%.2f meters is equal to %.2f inches.\n", input, output);
	}
	else if (operation == 3) {
		// Milliliters to Cups
		input = getMilliliterInput();
		output = convertMillilitersToCups(input);
		printf("\n%.2f milliliters is equal to %.2f cups.\n", input, output);
	}

	return;
}

// === Choose Operation Unit converter ===
int chooseUnitConversionType(void) {
	int operation;
	do {
		printf("\n1 for Kilograms to Pounds");
		printf("\n2 for Meters to Inches");
		printf("\n3 for Milliliters to Cups");
		printf("\nPlease choose your conversion type: ");
		if (scanf(" %d%*[^\n]", &operation) != 1) {
			printf("\nInvalid input, please try again.\n");
			operation = 0;
		}
		else if (operation < 1 || operation > 3) {
			printf("\nPlease choose one of the valid options: 1, 2, or 3.\n");
		}
	} while (operation < 1 || operation > 3);

	return operation;
}

// === Kilograms to Pounds ===
float getKilogramInput(void) {
	float kilogram = -1;
	printf("\nPlease enter kilograms to convert to pounds: ");
	if (scanf(" %f%*[^\n]", &kilogram) != 1 || kilogram <= 0) {
		printf("Invalid input, Please try again");
		kilogram = -1;
	}
	while (kilogram <= 0) {
		printf("Invalid input!\n");
		printf("\nPlease enter kilograms to convert to pounds: ");
		if (scanf(" %f%*[^\n]", &kilogram) != 1 || kilogram <= 0) {
			printf("Invalid input, Please try again");
			kilogram = -1;
		}
	}
	return kilogram;
}
float convertKgToPounds(float input) {
	return input * 2.20462;
}

// === Meters to Inches ===
float getMeterInput(void) {
	float meters = -1;
	printf("\nPlease enter meters to convert to inches: ");
	if (scanf(" %f%*[^\n]", &meters) != 1 || meters <= 0) {
		printf("Invalid input, Please try again");
		meters = -1;
	}
	while (meters <= 0) {
		printf("Invalid input!\n");
		printf("\nPlease enter meters to convert to inches: ");
		if (scanf(" %f%*[^\n]", &meters) != 1 || meters <= 0) {
			printf("Invalid input, Please try again");
			meters = -1;
		}
	}
	return meters;
}
float convertMetersToInches(float input) {
	return input * 39.3701;
}

// === Milliliters to Cups ===
float getMilliliterInput(void) {
	float milliliters = -1;
	printf("\nPlease enter milliliters to convert to cups: ");
	if (scanf(" %f%*[^\n]", &milliliters) != 1 || milliliters <= 0) {
		printf("Invalid input, Please try again");
		milliliters = -1;
	}
	while (milliliters <= 0) {
		printf("Invalid input!\n");
		printf("\nPlease enter milliliters to convert to cups: ");
		if (scanf(" %f%*[^\n]", &milliliters) != 1 || milliliters <= 0) {
			printf("Invalid input, Please try again");
			milliliters = -1;
		}

	}
	return milliliters;
}
float convertMillilitersToCups(float input) {
	return input / 240.0;
}
