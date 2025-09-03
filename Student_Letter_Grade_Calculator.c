#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include "Student_Letter_Grade_Calculator.h"

// === Student Letter Grade Calculator ===
void runGradeCalculator(void) {
	int markNum = getUserScore();
	char markChar = getLetterGrade(markNum);
	printf("\nIf score is %d%% then it's a(n) '%c'!\n", markNum, markChar);
	return;

}

// === Percentage Grade to Letter Grade === 
int getUserScore(void) {
	int mark;
	do {
		printf("\nPlease enter your score to evaluate: ");
		if (scanf(" %d%*[^\n]", &mark) != 1 || mark < 0 || mark > 100) {
			printf("Invalid input, try again.");
		}
	} while (mark < 0 || mark > 100);
	return mark;
}
char getLetterGrade(int markNum) {

	char grade = 0;
	if (markNum <= 50) {
		grade = 'F';
	}
	else if (markNum >= 51 && markNum <= 60) {
		grade = 'D';
	}
	else if (markNum >= 61 && markNum <= 69) {
		grade = 'C';
	}
	else if (markNum >= 70 && markNum <= 79) {
		grade = 'B';
	}
	else if (markNum >= 80 && markNum <= 100) {
		grade = 'A';
	}
	return grade;
}

