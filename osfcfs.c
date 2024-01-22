#include<stdio.h>
void main(){
int p[10],bt[10],tst[10],wt[10];
int n,i;
//printf("\nFCFS Program\n");
printf("Enter number of processes:");
scanf("%d",&n);
for(i=0;i<n;i++){
p[i]=i+1;
printf("Enter the bust time for p%d process:\n",i+1);
scanf("%d",&bt[i]);
}
wt[0]=0;
for(i=1;i<n;i++){
wt[i]=wt[i-1]+bt[i-1];
tst=wt[i]+bt[i];
}
float avgw,avgt;
for(i=0;i<n;i++){
avgw=avgw+wt[i];
avgt=avgt+tst[i];
}
printf("Average waiting time is %f\n",avgw/n);
printf("Average tat is %f\n",avgt/n);
}
