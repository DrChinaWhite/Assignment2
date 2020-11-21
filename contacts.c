//==============================================
// Name:           
// Student Number: #########
// Email:          @myseneca.ca
// Section:        
// Date:           Nov 20 2020
//==============================================
// Assignment:     2
// Milestone:      2
//==============================================

#define _CRT_SECURE_NO_WARNINGS

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        function definitions below...            |
// |        complete the definitions as per the      |
// |        Milestone-2 specifications               | 
// +-------------------------------------------------+
#include <stdio.h>

// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
#include "contacts.h"
#include "contactHelpers.h"

// getName:
void getName(struct Name* name)
{
    //char yesNo; //<--- Replaced by yes()

    printf("Please enter the contact's first name: ");
    scanf("%30[^\n]", name->firstName);
    clearKeyboard();

    printf("Do you want to enter a middle initial(s)? (y or n): ");
    //scanf("%c%*c", &yesNo); //<--- Replaced by yes()
    
    //if (yesNo == 'y' || yesNo == 'Y') //<--- Removed for yes()

    int yesNo = yes();
        if (yesNo == 1)
        {
            printf("Please enter the contact's middle initial(s): ");
            scanf("%6[^\n]", name->middleInitial);
            clearKeyboard();
        }

    printf("Please enter the contact's last name: ");
    scanf("%35[^\n]", name->lastName);
    clearKeyboard();
}

// getAddress:
void getAddress(struct Address* address)
{
    //char yesNo; //<--- Replaced by yes()

    do
    {
        printf("Please enter the contact's street number: ");
        //scanf("%d%*c", &address->streetNumber); //<--- Replaced by getInt()
        address->streetNumber = getInt();

        if (address->streetNumber < 1) {
            printf("*** INVALID STREET NUMBER *** <must be a positive number>: ");
            address->streetNumber = getInt();
        }

    } while (address->streetNumber < 1);

    printf("Please enter the contact's street name: ");
    scanf("%40[^\n]", address->street);
    clearKeyboard();

    printf("Do you want to enter an apartment number? (y or n): ");
    //scanf("%c%*c", &yesNo); //<--- Replaced by yes()

    //if (yesNo == 'y' || yesNo == 'Y') //<--- Replaced by yes()
    int yesNo = yes();

        if (yesNo == 1)
        {
            do
            {
                printf("Please enter the contact's apartment number: ");
                //scanf("%d%*c", &address->apartmentNumber); //<--- Replaced by getInt()
                address->apartmentNumber = getInt();

                if (address->apartmentNumber < 1) {
                    printf("*** INVALID APARTMENT NUMBER *** <must be a positive number>: ");
                    address->apartmentNumber = getInt();
                }

            } while (address->apartmentNumber < 1);
        }

    printf("Please enter the contact's postal code: ");
    scanf("%7[^\n]", address->postalCode);
    clearKeyboard();

    printf("Please enter the contact's city: ");
    scanf("%40[^\n]", address->city);
    clearKeyboard();
}

// getNumbers:
void getNumbers(struct Numbers* numbers)
{

    /*char yesNo; //<--- Replaced by yes()


    printf("Do you want to enter a cell phone number? (y or n): ");
    scanf("%c%*c", &yesNo);

    if (yesNo == 'y' || yesNo == 'Y') //<--- Require user to input cell phone number*/
    //{
        printf("Please enter the contact's cell phone number: ");
        scanf("%10[^\n]", numbers->cell);
        clearKeyboard();
    //}

    printf("Do you want to enter a home phone number? (y or n): ");
    //scanf("%c%*c", &yesNo); //<--- Replaced by yes()

    //if (yesNo == 'y' || yesNo == 'Y') //<--- Removed for yes()
    int yesNo = yes();
        if (yesNo == 1)
        {
            printf("Please enter the contact's home phone number: ");
            scanf("%10[^\n]", numbers->home);
            clearKeyboard();
        }

    printf("Do you want to enter a business phone number? (y or n): ");
    //scanf("%c%*c", &yesNo); //<--- Replaced by yes()

    //if (yesNo == 'y' || yesNo == 'Y') //<--- Removed for yes()
    yesNo = yes();
        if (yesNo == 1)
        {
            printf("Please enter the contact's business phone number: ");
            scanf("%10[^\n]", numbers->business);
            clearKeyboard();
        }
}

// +-------------------------------------------+
// | ====== Assignment 2 | Milestone 1 ======= |
// +-------------------------------------------+

// getContact:
// Define Empty function definition below:
void getContact(struct Contact *contact)
{

    getName(&contact->name);
    getAddress(&contact->address);
    getNumbers(&contact->numbers);
}
