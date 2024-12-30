#include "datatypes.h"
//khai bao nguyen mau ham
void printCategoryMenu();
void loginMenu();
void exitMenu();
void backOrExit();
void addCategoryDisplay(int *length, struct Category category[]);
void saveCategoryToFile(int numberOfCategory, struct Category category[]);
void loadCategoryFromFile(int *numberOfCategory, struct Category category[]);
void editCagetory(int *numberOfCategory, struct Category category[]);
void deleteCagetory(int *numberOfCategory, struct Category category[]);
void searchCagetory(int *numberOfCategory, struct Category category[]);
void sortCategory(int *numberOfCategory, struct Category category[]);
