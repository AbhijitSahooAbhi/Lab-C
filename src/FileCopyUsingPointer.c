#include<stdio.h> 
#include<conio.h> 
#include<stdlib.h> 
 void main() { 
 FILE *fp1, *fp2; 
 char ch; 

 
 fp1 = fopen("Sample.txt", "r"); 
 fp2 = fopen("Output.txt", "w"); 
 
 while (1) { 
 ch = fgetc(fp1); 
 
 if (ch == EOF) 
 break; 
 else 
 putc(ch, fp2); 
 } 
 
 printf("File copied Successfully!"); 
 fclose(fp1); 
 fclose(fp2); 
} 
