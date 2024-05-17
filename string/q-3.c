#include<stdio.h>
int main()
{
  	char name[100];
  	int i;
  	printf("\n Please Enter any String: ");
  	gets(name);
  	for (i = 0; name[i]!='\0'; i++)
  	{
  	    if(name[i] >= 'A' && name[i] <= 'Z') 
              name[i] = name[i] + 32; 
        else if(name[i] >= 'a' && name[i] <= 'z')
            name[i] = name[i] - 32;
  	}
  	printf("\n Toggle string: %s", name);
  	return 0;
}