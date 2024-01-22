<<<<<<< HEAD
#include<stdio.h>
#include<string.h>
#include<conio.h>

void readStrings(char*mainString,char*patternString,char*replaceString){
printf("Enter the main string");
scanf("%s",mainString);
printf("Enter the pattern string");
scanf("%s",patternString);
printf("Enter the replace string");
scanf("%s",replaceString);
}
int findAndReplace(char*mainString,char*patternstring,char*replaceString){
char result[1000];

int i.j.k;
int mainLen = strlen(mainString);
int patLen = strlen(patternString);
int repLen = strlen(replaceString);

for(i=0;i<=mainLen-patLen;){
for(j=0;j<patLen;j++){
if(mainString[i+j] != patternString[j])
break;
}

if(j == patLen){
mainString,
for(k=0;k<repLen;k++)
result[i+k] = replaceString[k];
i += repLen;
}else{
result[i] = mainString[i];
i++;
}
}

result[i] = '\0';

if(strcmp(mainString,result) == 0){
printf("Pattern not found in the main string.\n");
return 0;
}else{
printf("String after replacement: %s\n",result);
return 1;
}
}
int main(){
char mainString[1000],patternString[100],replaceString[100];
clrscr();

readString(mainString,patternString,replaceString);

if(findAndRelace(mainString,patternString,replaceString)){
}
getch();
return 0;
}

=======
#include <stdio.h>
int main()
{
    int pid[15];
    int bt[15];
    int n;
    printf("Enter the number of processes: ");
    scanf("%d",&n);
 
    printf("Enter process id of all the processes: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&pid[i]);
    }
 
    printf("Enter burst time of all the processes: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
    }
 
    int i, wt[n];
    wt[0]=0;
 
    //for calculating waiting time of each process
    for(i=1; i<n; i++)
    {
        wt[i]= bt[i-1]+ wt[i-1];
    }
 
    printf("Process ID     Burst Time     Waiting Time     TurnAround Time\n");
    float twt=0.0;
    float tat= 0.0;
    for(i=0; i<n; i++)
    {
        printf("%d\t\t", pid[i]);
        printf("%d\t\t", bt[i]);
        printf("%d\t\t", wt[i]);
 
        //calculating and printing turnaround time of each process
        printf("%d\t\t", bt[i]+wt[i]);
        printf("\n");
 
        //for calculating total waiting time
        twt += wt[i];
 
        //for calculating total turnaround time
        tat += (wt[i]+bt[i]);
    }
    float att,awt;
 
    //for calculating average waiting time
    awt = twt/n;
 
    //for calculating average turnaround time
    att = tat/n;
    printf("Avg. waiting time= %f\n",awt);
    printf("Avg. turnaround time= %f",att);
}
>>>>>>> f16824a32450a907a30142134971ff80a847d193
