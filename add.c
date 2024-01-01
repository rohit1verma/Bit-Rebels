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

mainString,
