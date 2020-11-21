#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>

// This source file needs to "know about" the functions you prototyped
// in the contact helper header file.
// HINT: Put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
//       #include your contactHelpers header file on the next line:
#include "contactHelpers.h"

//--------------------------------
// Function Definitions
//--------------------------------

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 2 =======       |
// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        empty function definitions below and     |
// |        complete the definitions as per the      |
// |        Milestone-2 specifications               | 
// |                                                 |
// | - The clearKeyboard function is done for you    |
// +-------------------------------------------------+


// Clear the standard input buffer
void clearKeyboard(void)
{
    while (getchar() != '\n')   ; // empty execution code block on purpose
}

// pause function definition goes here:
void pause(void)
{
    printf("(Press Enter to Continue)");
    clearKeyboard();
}

// getInt: Empty function definition goes here:
int getInt(void)
{
	int value;
	char NL = 'x';

	scanf(" %d%c", &value, &NL);

	while (NL != '\n') {

		clearKeyboard();
		printf("*** INVALID INTEGER *** <Please enter an integer>: ");
		scanf(" %d%c", &value, &NL);
	}

	return value;
}

// getIntInRange: Empty function definition goes here:
int getIntInRange(int min, int max)
{
	int iValue = getInt();

	while ((iValue < min) || (iValue > max)) {

		printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", min, max);
		iValue = getInt();
	}

	return iValue;
}

// yes: Empty function definition goes here:
int yes(void)
{
	char ch = 'x';
	char NL = 'x';
	int response = -1;

	scanf(" %c%c", &ch, &NL);
	ch = tolower(ch);

	while (!((NL == '\n') && ((ch == 'y') || (ch == 'n')))) {

		clearKeyboard();
		printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
		scanf(" %c%c", &ch, &NL);
	}

	if (ch == 'y') {
		response = 1;
	}

	if (ch == 'n') {
		response = 0;
	}

	return response;

}

// menu: Empty function definition goes here:
int menu(void)
{

	printf("Contact Management System\n");
	printf("-------------------------\n");
	printf("1. Display contacts\n");
	printf("2. Add a contact\n");
	printf("3. Update a contact\n");
	printf("4. Delete a contact\n");
	printf("5. Search contacts by cell phone number\n");
	printf("6. Sort contacts by cell phone number\n");
	printf("0. Exit\n\n");
	printf("Select an option:> ");

	return getIntInRange(0, 6);
	printf("\n");
}

// contactManagerSystem: Empty function definition goes here:
void contactManagerSystem(void)
{
	int option = 0;

	do {
		option = menu();
		switch (option) 
		{
		case 0:
			printf("\nExit the program? (Y)es/(N)o: ");
			int opt = yes();
			if (opt == 1) {
				printf("\nContact Management System: terminated\n");
				return;
			} else {
				printf("\n");
			}
			break;

		case 1:
			printf("\n<<< Feature %d is unavailable >>>\n\n", option);
			pause();
			printf("\n");
			break;

		case 2:
			printf("\n<<< Feature %d is unavailable >>>\n\n", option);
			pause();
			printf("\n");
			break;

		case 3:
			printf("\n<<< Feature %d is unavailable >>>\n\n", option);
			pause();
			printf("\n");
			break;

		case 4:
			printf("\n<<< Feature %d is unavailable >>>\n\n", option);
			pause();
			printf("\n");
			break;

		case 5:
			printf("\n<<< Feature %d is unavailable >>>\n\n", option);
			pause();
			printf("\n");
			break;

		case 6:
			printf("\n<<< Feature %d is unavailable >>>\n\n", option);
			pause();
			printf("\n");
			break;

		}
	} while ((option >= 0) || (option <= 6));

	return;
}
