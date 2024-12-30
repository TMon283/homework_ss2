#include<stdio.h>
#include "functions.h"
// logic ham
void printCategoryMenu(){
	printf("***Store Management System Using C***\n\n");
	printf("\t\t  MENU\n");
	printf("\t=========================\n");
	printf("\t[1] Add Category\n");
	printf("\t[2] Show Category List\n");
	printf("\t[3] Edit A Category\n");
	printf("\t[4] Delete A Category\n");
	printf("\t[5] Search A Category\n");
	printf("\t[0] Exit the program\n");
	printf("\t=========================\n");
}

void loginMenu(){
	printf("***Store Management System Using C***\n\n");
	printf("\t\tLOGIN\n");
	printf("\t==============================\n");
	printf("\tEmail: lemonboy2k6@gmail.com\n");
	printf("\tPassword: *********\n");
	printf("\t==============================\n");
	printf("\tEnter to login");
}

void exitMenu(){
	printf("\n\t========= Thank you =========\n");
	printf("\t========= See you soon=======\n");
}

void addCategoryDisplay(int *length, struct Category category[]){
	int numberOfCategory;
	printf("\nEnter the number of categories you want to add: ");
	scanf("%d", &numberOfCategory);
	printf("***Store Management System Using C***\n\n");
	printf("\t      ADD CATEGORY\n");
	for(int i = *length; i < (*length + numberOfCategory); i++){
		printf("\t=========================\n");
		printf("\tCategory ID: ");
		scanf("%d", &category[i].categoryId);
		getchar();
		printf("\tCategory Name: ");
		fgets(category[i].categoryName, sizeof(category[i].categoryName), stdin);
		category[i].categoryName[strcspn(category[i].categoryName, "\n")] = '\0';
		printf("\t=========================\n\n");
	}
	*length += numberOfCategory;
	saveCategoryToFile(numberOfCategory, &category[*length - numberOfCategory]);
	printf("Add Categories Successfully\n\n");
	backOrExit();
}	

void saveCategoryToFile(int numberOfCategory, struct Category category[]){
    FILE *file = fopen("CategoryData.dat", "ab");
    if(file == NULL){
        printf("Error opening file\n");
    }
    int written = fwrite(category, sizeof(struct Category), numberOfCategory, file);
    if(written != numberOfCategory){
        printf("Error writing to file\n");
    }
    fclose(file);
}

void loadCategoryFromFile(int *numberOfCategory, struct Category category[]){
	FILE *file = fopen("CategoryData.dat", "rb");
	if(file == NULL){
		printf("Error opening file\n");
	}
	*numberOfCategory = fread(category, sizeof(struct Category), 100, file);
    if(*numberOfCategory == 0){
        printf("No data found...\n");
    }else{
        printf("\nLoaded %d categories from file\n", *numberOfCategory);
    }
    printf("+-------------+----------------------------+\n");
    printf("|              ALL CATEGORIES              |\n");
    printf("+-------------+----------------------------+\n");
    printf("| Category ID |           Name             |\n");
    printf("+-------------+----------------------------+\n");
    for(int i = 0; i < *numberOfCategory; i++){
        printf("| %-11d | %-26s |\n", category[i].categoryId, category[i].categoryName);
    }
    printf("+-------------+----------------------------+\n");
    printf("\n");
    fclose(file);
    backOrExit();
}

void editCagetory(int *numberOfCategory, struct Category category[]){
	FILE *file = fopen("CategoryData.dat", "rb+");
	if(file == NULL){
		printf("Error opening file\n");
	}
	*numberOfCategory = fread(category, sizeof(struct Category), 100, file);
	int position;
	printf("\n\tEnter the ID: ");
	scanf("%d", &position);
	getchar();
	int findIndex = -1;
	for(int i = 0; i < *numberOfCategory; i++){
		if(category[i].categoryId == position){
			findIndex = i;
			break;
		}
	}
	if(findIndex == -1){
		printf("\tError: This ID doesn't exist\n");
	}else{
		printf("\tCategory Name: ");
		fgets(category[findIndex].categoryName, sizeof(category[findIndex].categoryName), stdin);
		category[findIndex].categoryName[strcspn(category[findIndex].categoryName, "\n")] = '\0';
		fseek(file, findIndex * sizeof(struct Category), SEEK_SET); //vi tri muon di chuyen con tro toi va hang so chi dinh con tro tinh tu dau file
		fwrite(&category[findIndex], sizeof(struct Category), 1, file);
		printf("\tEditing Success\n");
	}
	fclose(file);
	backOrExit();
}

void deleteCagetory(int *numberOfCategory, struct Category category[]){
	FILE *file = fopen("CategoryData.dat", "rb+");
	if(file == NULL){
		printf("Error opening file\n");
	}
	*numberOfCategory = fread(category, sizeof(struct Category), 100, file);
	fclose(file);
	int position;
	printf("\n\tEnter the ID: ");
	scanf("%d", &position);
	getchar();
	int findIndex = -1;
	for(int i = 0; i < *numberOfCategory; i++){
		if(category[i].categoryId == position){
			findIndex = i;
			break;
		}
	}
	if(findIndex == -1){
		printf("\tError: This ID doesn't exist\n");
	}else{
		for(int i = findIndex; i < *numberOfCategory; i++){
			category[i] = category[i + 1];
		}
		(*numberOfCategory)--;
	}
	file = fopen("CategoryData.dat", "wb");
        if (file == NULL) {
            printf("Error opening file\n");
            return;
        }
        fwrite(category, sizeof(struct Category), *numberOfCategory, file);
        fclose(file);
        printf("\tDelete Success\n");
        backOrExit();
}

void searchCagetory(int *numberOfCategory, struct Category category[]){
	FILE *file = fopen("CategoryData.dat", "rb+");
	if(file == NULL){
		printf("Error opening file\n");
	}
	*numberOfCategory = fread(category, sizeof(struct Category), 100, file);
	fclose(file);
	int position;
	printf("\n\tEnter the ID: ");
	scanf("%d", &position);
	getchar();
	int findIndex = -1;
	for(int i = 0; i < *numberOfCategory; i++){
		if(category[i].categoryId == position){
			findIndex = i;
			break;
		}
	}
	if(findIndex == -1){
		printf("\tError: This ID doesn't exist\n");
	}else{
		printf("\tCategory ID: %d\n", category[findIndex].categoryId);
		printf("\tCategory Name: %s\n", category[findIndex].categoryName);
	}
	backOrExit();
}
void backOrExit(){
	char select;
	printf("Back(b) or Exit(0): ");
	scanf("%c", &select);
	getchar();
	if(select == '0'){
		exitMenu();
		exit(0);
	}else if(select == 'b'){
		return;
	}
}

void sortCategory(int *numberOfCategory, struct Category category[]){
    int n = *numberOfCategory;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (category[j].categoryId > category[j + 1].categoryId){
                struct Category temp = category[j];
                category[j] = category[j + 1];
                category[j + 1] = temp;
            }
        }
    }
}
