#include<stdio.h>
#include<ncurses.h>
#include<string.h>
int main(){
	char string[] = "suraj Naranatt";
	
	printf("%ld\n", strlen(string));
	printf("%s\n", tolower(string));
	printf("%s\n", toupper(string));
}
