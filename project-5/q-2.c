#include <stdio.h>
int main (){
	char str[100];
	int frequency[256]= {0};
	int i ; 
	printf("Enter any string : ");
	scanf("%s",str);
	for (i=0; str[i] != '\0'; i++){
		frequency [(unsigned char) str[i]]++;
		
	}
	printf("Frequency of each letter : \n");
	for (i=0; i < 256; i++){
		if(frequency [i] !=0){
			printf("%c => %d\n", i , frequency[i]);
		}
	}
	return 0;
}
