#include<stdio.h>
int str_length(char []);
int str_compare(char [],char []);
void str_concat(char [],char []);
int main()
{
  char str[50];
  char str1[50],str2[50];
  char str_des[100],str_src[50];
  int length,comp_res;
  printf("\nEnter a string: ");
  gets(str);
  length=str_length(str);
  printf("The length of %s is %d\n",str,length);
  printf("Enter two strings for string compare: ",str1,str2);
  
}