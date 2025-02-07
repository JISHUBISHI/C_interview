#include<stdio.h>
int main(){
    struct book{
        char name[20];
        int price;
        int pages;
    };
    struct book book1;
    printf("enter the book name:-");
    scanf("%s",&book1.name);
    printf("enter the book price:-");
    scanf("%d",&book1.price);
    printf("enter the book pages:-");
    scanf("%d",&book1.pages);

    struct book book2;
    printf("enter the book name:-");
    scanf("%s",&book2.name);
    printf("enter the book price:-");
    scanf("%d",&book2.price);
    printf("enter the book pages:-");
    scanf("%d",&book2.pages);

    printf("book1 Details\n");
    printf("Name: %s\n",book1.name);
    printf("Price: %d\n",book1.price);
    printf("Pages: %d\n",book1.pages);
    printf("\nbook2 Details\n");
    printf("Name: %s\n",book2.name);
    printf("Price: %d\n",book2.price);
    printf("Pages: %d\n",book2.pages);

    return 0;
}