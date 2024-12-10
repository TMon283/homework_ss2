#include<stdio.h>
int length, arr[100];
void displayMenu();
void printArr();
void inputArr();
void deleteNumber();
void softMenu();
void findMenu();
int main(){
	int choice;
	do{
		displayMenu();
		printf("\nLua chon cua ban: ");
		scanf("%d", &choice);	
		switch(choice){
			case 1: //	Nhap so phan tu can nhap va gia tri cac phan tu
			inputArr();
			break;
		case 2: // In ra gia tri cac phan tu dang quan li
			printArr();
			break;
		case 3: // Them mot phan tu vao vi tri chi dinh
			
			break;
		case 4: // Sua mot phan tu o vi tri chi dinh
			
			break;
		case 5: // Xoa mot phan tu o vi tri chi dinh
			deleteNumber();
			printArr();
			break;
		case 6: // Sap xep cac phan tu
			int smallChoice1;
			do{
				softMenu();
				printf("\nLua chon cua ban: ");
				scanf("%d", &smallChoice1);
				switch(smallChoice1){
					case 1: // Sap xep giam dan
						
						break;
					case 2: // Sap xep tang dan
							
						break;
					default:
						printf("Lua chon khong hop le\n");
				}
			}while(smallChoice1 != 3);
			break;
		case 7: // Tim kiem phan tu nhap vao
			int smallChoice2;
			do{
				findMenu();
				printf("\nLua chon cua ban: ");
				scanf("%d", &smallChoice2);
				switch(smallChoice2){
					case 1: // Tim kiem tuyen tinh
					
						break;
					case 2: // Tim kiem nhi phan
						
						break;
					default:
						printf("Lua chon khong hop le\n");
				}
			}while(smallChoice2 != 3);
			break;
		case 8: // Thoat
			printf("Cam on ban da su dung ung dung!!!");
			break;
		default:
			printf("Thao tac khong hop le\n");
		}
	}while(choice != 8);
	return 0;
}
void displayMenu(){
	printf("\n-----MENU-----\n");
	printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
	printf("2. In ra gia tri cac phan tu dang quan li\n");
	printf("3. Them mot phan tu vao vi tri chi dinh\n");
	printf("4. Sua mot phan tu o vi tri chi dinh\n");
	printf("5. Xoa mot phan tu o vi tri chi dinh\n");
	printf("6. Sap xep cac phan tu\n");
	printf("7. Tim kiem phan tu nhap vao\n");
	printf("8. Thoat\n");
}
void printArr(){
	for(int i = 0; i < length; i++){
		printf("Arr[%d]: %d\n", i, arr[i]);
	}
}
void inputArr(){
	printf("Nhap so phan tu can nhap: ");
	scanf("%d", &length);
	for(int i = 0; i < length; i++){
		printf("Arr[%d] la: ", i);
		scanf("%d", &arr[i]);
	}
}
void inputNewNumber(){
	
}
void deleteNumber(){
	int deleteIndex;
	printf("Moi ban nhap vi tri phan tu muon xoa: ");
	scanf("%d", &deleteIndex);
	if(deleteIndex < 0 and deleteIndex >= length){
		printf("Vi tri da nhap khong hop li\n");
	}else{
		for(int i = deleteIndex; i < length - 1; i++){
			arr[i] = arr[i + 1];
		}
		length--;
	}
}
void softMenu(){
	printf("\n-----MENU-----\n");
	printf("1. Giam dan\n");
	printf("2. Tang dan\n");
	printf("3. Thoat\n");
}
void findMenu(){
	printf("\n-----MENU-----\n");
	printf("1. Tim kiem tuyen tinh\n");
	printf("2. Tim kiem nhi phan\n");
	printf("3. Thoat\n");
}
