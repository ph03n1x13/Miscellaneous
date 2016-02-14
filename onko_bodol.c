/*
*problem link:http://cpbook.subeen.com/2013/01/change-digits.html
.............. this approach uses loop and an integer buffer
*/

#include <stdio.h>
#include <conio.h>


int main() {

	/*initializing needed values*/
	int test, loopTime, remain, result, i, j;
	int index;
	int buff[9]; // buffer for 8 ints eating 4 * 9 = 36 bytes in stack memory



    /*initialising for avoinding garbage value (is this compulsory? )*/
	test = 0, index = 0, loopTime = 0, remain = 0, result = 0;
	i = 0, loopTime = 0;
	
    scanf("%i", &test); //need a proper guide to scanf cause it often creates problem after enter
	
	
	if (test == 0){ printf("%i\n",test+1 );} //#noob's_hack as while(test != 0) won't meet 
	
	while(test != 0) {
		remain = test % 10; // collecting remainder
		test = test /10;
		*(buff+index) = remain;
		++index;
	}
	
	/* // check  !!! 
	for (j = 0; j < index; j++) {
		printf("%i\n", *(buff+j));
	}
	*/
	i = 0;
	for (i = index-1; i >= 0 ; i--) {
		if (*(buff+i) % 2 == 0) {
			result = ( *(buff+i) + 1) + (result * 10);
		}
		
		else {
			result = (*(buff+i)- 1) + (result * 10);
		}

	}
	printf("%i\n", result);
    getch();
	return 0;
}
