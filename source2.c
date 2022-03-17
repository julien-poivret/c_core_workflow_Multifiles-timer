#include<stdio.h>
#include<stdint.h>

extern uint64_t  flag_a = 9;

// just some "floating" c code as reminder.
void function1(int value1){
	value1++;
	printf("\x1b[2J");
	printf("Value1 ->%d\n",value1);
};
