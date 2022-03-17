#include <stdlib.h> 
#include <stdio.h>
#include <stdint.h>
#include "source2.c"
#include <time.h>

// upload on 03-17-22.

// Just a personal usefull reminder "test", as sharp as efficient, like most of c code usally
// since they use the system host language (unix OS...). 

void function1(int value1);
int main(int argc, char** argv){
	// slice about 200ms as interval
	struct timespec timer_1 = {.tv_sec=0,.tv_nsec=200000000};
	// " ...flag are boolean value 1 or 0 for function gate way validation... "
	if(flag_a-9){
		return EXIT_FAILURE;
	}
	uint8_t ref1;
	ref1 = 3;
	printf("ref1 = %d and flg = %llu\n", ref1, (flag_a-9));
	function1(2);
	printf("\x1b[1;1H\x1b[2Jthe date will be display in :\n");
	for(int i=0;i<=10;i++){
		printf("\x1b[2;10H\x1b[3J%d/10 \n",i);
		nanosleep(&timer_1,&timer_1);
		// The second instance is use to recall the syscall sleep 
		// in case of os interrupt for keeping the user time delay (more a kid of which)
		// as accurate as possible.
	}
	system("date");
	return EXIT_SUCCESS;
}

