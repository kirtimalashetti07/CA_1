#include <stdio.h>


int main() {
    int choice;

    // Displaying the menu options
    printf("Welcome to the Menu!\n");
    printf("Please choose an option:\n");
    printf("1. c 1\n");
    printf("2. web tech 2\n");
    printf("3. data science 3\n");
    printf("4. java 4\n");
    printf("5. python 5\n");
    printf("Enter your choice (1-5): ");
    
    // Taking user input
    scanf("%d", &choice);

    // Responding based on user choice
    switch (choice) {
        case 1:
            printf("You selected Option 1.\n");
            break;
	case 2:
            printf("You selected Option 2.\n");
            break;
        case 3:
            printf("You selected Option 3.\n");
            break;
	case 4:
	    printf("you selected option 4.\n");
	    break;

