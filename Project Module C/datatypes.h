#include<stdbool.h> 
#include<string.h>
//khai bao cau truc
struct Date{
	int day, month, year;
};

struct Category{
	int categoryId;
	char categoryName[20];
};

struct Product{
	int productId;
	int categoryId;
	char productName[20];
	int quantity;
	int price;
};

struct Order{
	int orderId;
	int customerId;
	struct Date date;
	struct Product product;
};
