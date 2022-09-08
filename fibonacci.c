#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	int n;
	if (argc >= 2){
		n = atoi(argv[1]);
	}
	else{
		n = 3;
	}
	int prev1 = 0;
	int prev2 = 1;
	int next;
	for (int i=0; i <n; i++){
		printf("%d\n",prev1);
		printf("%d\n",prev2);
		next = prev2 + prev1;
		prev1 = prev2;
		prev2 = next;
	}
	return 0;
}
