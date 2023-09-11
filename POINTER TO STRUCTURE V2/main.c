#include <stdio.h>
#include <stdlib.h>

struct book{
	char title[80];
	int page; 
	float price;
	
};

struct book *bptr;

int main(int argc, char *argv[]) {
	
	bptr = (struct book *)malloc(sizeof(struct book));
	
	printf("Enter title:\n");
	scanf("%s", (*bptr).title);
	printf("Enter number of pages: ");
	scanf("%d", &(*bptr).page);
	printf("Enter price:");
	scanf("%f", &(*bptr).price);
	printf("The book is %s with %d pages and worth is %.2f", (*bptr).title, (*bptr).page, (*bptr).price);


	return 0;
}


