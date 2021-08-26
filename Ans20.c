#include<stdio.h>
int main(){
    int num,reminder,sum=0;
    printf("Enter the number to check whether it is armstrong or not: ");
    scanf("%d",&num);
    while (num!=0)
    {
        reminder=num%10;
        sum=sum+(reminder*reminder*reminder);
        num=num/10;
    }
    if (num==sum)
    {
        printf("The number is armstrong");
    }
    else{
        printf("The number is not armstrong");
    }
    return 0;
}    