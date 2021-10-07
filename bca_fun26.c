//Making a valid pointer as NULL pointer in c
#include<stdio.h>
#include<conio.h>
int main(void){
    int num=10;
    int *ptr=&num;
    if(ptr==NULL)
    printf("ptr:NULL\n");
    else
    printf("ptr:NOT NULl\n");
    printf("%d\n",*ptr);
    printf("%d\n",ptr);
    ptr=0;
    if(ptr==NULL)
    printf("ptr:NULL\n");
    else
    printf("ptr:NOT NULL");
    return 0;
}