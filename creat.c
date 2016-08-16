#include <stdio.h>
#include <stdlib.h>

void creatfile(char *filename){

	if(creat(filename, 0755)<0){
		printf("creat file %s failed!\n",filename);
		exit(EXIT_FAILURE);
	}else{
		printf("creat file %s sucess!",filename);
	}
}

int main(int argc, char *argv[]){
	int i;
	if(argc<2){
		printf("you haven't input filename, please try again!");
		exit(EXIT_FAILURE);
	}

	for(i=1;i<argc;i++){
		creatfile(argv[i]);
	}

	exit(EXIT_SUCCESS);
}
