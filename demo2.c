#include<stdio.h>
int fac(int n){
if(n==0)
return 1;
else
return n*fac(n-1);
}
void main(){
int n;
printf("Enter the number:");
scanf("%d",&n);
printf("Factorial of %d is %d",n,fac(n));
}
