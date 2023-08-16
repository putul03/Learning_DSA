#include<stdio.h>

int main(){
    int num;
    printf("enter the value of number whose multiplication table is to be printed");
    scanf("%d", &num);
    for (int i =0; i < 10; i++)
    {
        printf("%d * %d\n" ,num,i,i*num);
    }
    return 0;
}