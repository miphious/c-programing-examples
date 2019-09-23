#include <stdio.h>
#include <stdlib.h>

int main()
{
	//array
	int luckyNumbers[]= {4,8,15,16,23,42};
	//prints 4
	printf("%d \n", luckyNumbers[0]);
	//prints 8
	printf("%d \n", luckyNumbers[1]);
	//change [1] to 200
	luckyNumbers[1] = 200;
	printf("%d \n", luckyNumbers[1]);

	return 0;
}
