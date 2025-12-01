#include <stdio.h>
int main(){
FILE *fp;
fp = fopen (" data.txt", "w");
if (fp == NULL) {
printf ("error creating file!");
return 1; }
fprintf (fp, "Exp 9.\n");
fputs (" Hi xyz :\n", fp);
fclose (fp);
printf ("Data written successfully \n");
return 0 ;
}