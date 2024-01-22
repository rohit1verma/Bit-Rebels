#include<stdio.h>
void main(){
int a[5],sum;
printf("Enter 5 numbers:");
for(int i=0;i<5;i++){
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("Sum of Numbers is %d\n",sum);
}
