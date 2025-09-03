#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include "Student_Letter_Grade_Calculator.h"
#include "Unit_Converter.h"
#include "Currency_Converter.h"
#include "Interest_Calculator.h"


#define Hello printf("Thank you for choosing us.\n")
#define Goodbye printf("\nThank you for using my program.\n")

// === Choose Main Program Operation ===
int chooseProgram(void);

// CEO
int main() {
	Hello;

	int operation;
	do {
		operation = chooseProgram();
		switch (operation) {
		case 1:
			runGradeCalculator();
			break;
		case 2:
			runUnitConverter();
			break;
		case 3:
			runCurrencycurrency();
			break;
		case 4:
			runInterestCalculator();
			break;
		case 5:
			Goodbye;
			break;
		}

		printf("\n");
		system("pause");
		if (operation != 5) {
			system("cls");
		}
	} while (operation != 5);
	return 0;
}


// === Choose Main Program Operation ===
int chooseProgram(void) {
	int operation;
	do {
		printf("\n1. Student Letter Grade Calculator");
		printf("\n2. Unit Converter");
		printf("\n3. Currency Converter");
		printf("\n4. Simple Interest Calculator");
		printf("\n5. Exit Program");
		printf("\nChoose an option (1-5): ");

		if (scanf("%d", &operation) != 1) {
			printf("\nInvalid input. Please try again.\n");
			operation = -1;

		}
		else if (operation < 1 || operation > 5) {
			printf("\nPlease Choose one of the valid options"
				" 1 ,2 ,3 ,4 ,or 5!\n");
		}

	} while (operation < 1 || operation > 5);

	return operation;
}
