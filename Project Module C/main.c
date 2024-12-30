#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int choice;
	struct Category category[100];
	int numberOfCategory = 0;
	int length;
	do{
		printCategoryMenu();
		printf("\tEnter your choice: ");
		scanf("%d", &choice);
		switch(choice){
			case 1: // Add Category
				addCategoryDisplay(&length, category);
				break;
			case 2: // Show Category List
				loadCategoryFromFile(&numberOfCategory, category);
				break;
			case 3: // Edit A Category
				editCagetory(&numberOfCategory, category);
				break;
			case 4: // Delete A Category
				deleteCagetory(&numberOfCategory, category);
				break;
			case 5: // Search A Category
				searchCagetory(&numberOfCategory, category);
				break;
			case 0: // Exit 
				exitMenu();
				break;
			default:
				printf("Error: Your choice is invalid\n");
		}
	}while(choice != 0);
	return 0;
}
