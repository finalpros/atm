#include <stdio.h>
#include <string.h>

int main() {

	char atmCardNumber[20]; /* Limiting to 20 characters since the card number is not more than 16 characters*/
	printf("Welcome to ATM Reference Implementation.\n");
	printf("Please enter the ATM card number: ");
	fgets (atmCardNumber, 20, stdin); /* Accepting the Card number as input with spaces in between Ex: 1234 5678 9012 3456*/
	scanf("%[^\n]%*c", atmCardNumber);
	printf("\nEntered ATM card number : %s", atmCardNumber);
	int isValidAndExists = validateAtmCardNumber(atmCardNumber);
	if(isValidAndExists == 0){
		printf("\nInvalid Card Number, Please Enter a valid 16 digit card number."); /* TODO: Need to iterate till a valid card number is been entered */
		return 0;
	}else if(isValidAndExists == 1){
		printf("\nCard Number doesn't exists, Please Enter a valid 16 digit card number.");
		return 0;
	}
	printf("\nEnter the ATM Pin: "); /* TODO: Either need not show entering password in the console or show '*' */
	int atmPin;
	scanf("%d", atmPin);
	int isValidPin = validateCardAndPin(atmCardNumber, atmPin); /* TODO: Need to accept for pin for three times and break saying maximum attempts reached. */
	if(isValidPin == 0){
		printf("\nPlease Enter the valid Pin:");
		return 0; /* Should not return from here need to iterate*/
	}
	int accountBalance = getAccountBalance(atmCardNumber);
	printf("\nYour account balance is : %d", accountBalance);
	return 0;
}
int validateAtmCardNumber(char atmCardNumber[]){
	/* Returning card number as valid for now.*/
	/* TODO: Need to validate the card number for numeric or not.*/
	return 2;
}

int validateCardAndPin(char atmCardNumber[], int atmPin){
	/* Returning Card and Pin are valid for now */
	/* TODO: Need to validate Card number and pin matching is correct, if not return 0*/
	return 1;
}

int getAccountBalance(char atmCardNumber[]){
	/* Returing static balance for now.*/
	/* TODO: Need to get the actual balance based upon the */
	return 5400;
}
