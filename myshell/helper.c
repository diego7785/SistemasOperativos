#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int onlyComands(int start, int end, char comando[], char tipo[]){
	int size=end-start;
	char* comand;
	comand = (char*)malloc(size*sizeof(char));
        for(int i=start, j=0; i<end; i++,j++){
                comand[j]=comando[i];
        }
	printf("%s \n", comando);
	printf("%s \n", comand);

	if(strcmp(comand,tipo)==0){
		return 1;
	}else{
		return 0;
	}
	free(comand);
}

int main(){
	char comando[]="cd /home";
	char test[]="cd";
	//printf("%s \n", test2);
	int n=onlyComands(0,2,comando,"cd");
	printf("%d \n", n);
return 0;
}



