/*Program to explain pointers and their use.*/

#include<stdio.h>
#include<time.h>
#include<unistd.h>

void wait(float duration){
	time_t start, end;
	double elapsed;  // seconds
	start = time(NULL);
	int terminate = 1;
	while (terminate) {
		end = time(NULL);
		elapsed = difftime(end, start);
		if (elapsed >= duration /* seconds */)
			terminate = 0;
		else  // No need to sleep when 90.0 seconds elapsed.
			usleep(duration*1000000);
	}
}


int main(){
	char fakeChoice;		
	printf("Would you like to learn pointers?\n");
	printf("Y/n?");
	scanf("%c",&fakeChoice);

	if(fakeChoice == 'Y')
		printf("I\'ll teach you...\n");
	else
		printf("No issues, but isn\'t this why you called the main function?\n");

	printf("Well, then let\'s start with the definition of a pointer...\n");
	wait(4.0);

	printf("DEFINITION:\n\t");
	printf("A pointer is a variable which stores the memory address of another variable.\n");
	wait(8.0);
	printf("\n\nNow, you may ask what is a memory address/location?\n");
	wait(3.0);
	printf("Imagine the computer to be a city with various places.\n");
	wait(4.0);
	printf("Just as an address uniquely identifies a place,\n");
	wait(1.0);
	printf("a memory address is used to uniquely identify variables.\n\n");
	wait(5.0);
	printf("Let\'s take an example...\n");
	wait(3.0);
	printf("I am now going to declare a variable by the name \'numb\'.\n");
	wait(4.0);
	printf("It is of integer type.\n");

	int numb;
	wait(0.5);
	printf("Declaration complete...Now you set the value...\n");
	scanf("%d", &numb);
	
	printf("You\'ll learn the *use* of pointers in another tutorial...");
	wait(0.7);
	printf("but I\'ll just teach the basics...\n");
	wait(4.0);
	printf("Let me show you something...\n");
	wait(2.0);
	printf("Is %d the number you entered?\n", numb);
	wait(0.3);
	printf("If yes, then I read that correctly.\n");
	wait(1.0);
	printf("Let me create another variable, but this time, it will be a pointer...\n");
	wait(3.0);
	printf("Pointers are declared as follows...\n");
	wait(1.0);
	printf("\ttype *variableName\n");
	wait(2.0);
	printf("You may have seen the * before...think about it...");
	wait(4.0);
	printf("it is the valueAt operator.\n");
	wait(0.7);
	printf("The entire declaration done above means...\n");	
	wait(3.0);
	printf("\t\t\"The value at the address, of the variable pointed to, by variableName is an integer...\n");
	wait(6.0);
	printf("i.e. \'type\' is the datatype of the value, stored in the variable to which the pointer is pointing.\n"); 
	wait(7.0);
	printf("Here\'s an example...\n\n");
	wait(1.0);
	printf("\tint *pointerVariable;\n");
	wait(1.0);
	int *pointerVariable;
	
	
	printf("\tpointerVariable = &numb;\n");
	wait(1.0);
	
	pointerVariable = &numb;
	
	printf("\t// & is addressOf operator.\n");
	wait(1.0);
	printf("\t// The second statement should be read as \"pointerVariable stores the address of numb\"\n");
	wait(3.0);
	printf("Now let me print pointerVariable...\n\n");
	wait(1.0);
	
	printf("%d\n", *pointerVariable);
	
	wait(2.0);
	printf("You may have expected the address to be printed, but the * causes the value of the address stored at the pointerVariable to be printed.\n");
	wait(7.0);
	printf("This happened because the pointerVariable holds the address of numb.");
	wait(4.0);
	printf("Combine the facts that the pointer stores the address of a variable and the * causes the value stored at the address to be returned,\n");
	wait(10.0);
	printf("and you\'ll get it. :)\n");
}	
