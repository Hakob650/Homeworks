#include <stdio.h>
typedef enum {
	ELECTRONICS,
	FOOD,
	CLOTHING
}Category;
typedef struct {
	char name[20];
	Category category;
	float price;
}Product;
int main(){
	Product products[3];
	printf("Enter details for 3 products:\n");
	for(int i=0;i<3;++i){
		printf("name: ");
		scanf("%19s",products[i].name);
		printf("Category (0-ELECTRONICS,1-FOOD,2-CLOTHINGS: ");
		int x;
		scanf("%d",&x);
		products[i].category=(Category)x;
		printf("Price: ");
		scanf("%f",&products[i].price);
	}
	printf("Products of FOOD category:\n");
	int found=0;
	for(int i=0;i<3;++i){
		if(products[i].category==FOOD){
			printf("Name: %s\n",products[i].name);
			printf("Price: %.2f\n",products[i].price);
			found=1;
		}
	}
	if(!found){
		printf("No products found in FOOD category.\n");
	}return 0;
}
		

