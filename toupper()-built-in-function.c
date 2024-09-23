#include<stdio.h>

#include<ctype.h>

void main()

{ char str1[50]="hello, world!";
  
char str2[50]; 
  
printf("Lower case of string: ");
  
puts(str1);
  
for(int i=0;i<sizeof(str1);i++)
  
{
      str2[i]=toupper(str1[i]);
  
}
 
printf("upper case of string: %s",str2);

}