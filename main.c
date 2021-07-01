#include <stdio.h>
#include <stdlib.h>

void printTimesTable(int n);


int main(int argc, char *argv[]){

	if(argc == 2){
		int n = atoi(argv[1]);
		printTimesTable(n);
		return 0;
	}else{
		printf("Missing arguments.\n");
		return 1;
	}

}

void printTimesTable(int n){
	int res = 0;
	for(int i = 1; i <= 9; i++){
		res = n * i;
		printf("%i X %i = %i\n", n, i, res);
	}
}


