#include <stdio.h>
int main(){
FILE *fp;
char line[100];
fp = fopen("data.txt", "r");
if (fp == NULL) {
printf("Error opening file!");
return 1;}
while (fgets(line, sizeof(line), fp)){
printf("%s", line); }
fclose(fp);
return 0;
}