#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int onlyComands(int start, int end, char comando[], char tipo[]){
	int size=end-start;
	char comand[size];
        for(int i=start, j=0; i<end; i++,j++){
                comand[j]=comando[i];
        }
	printf("%s \n", comando);
	printf("%s \n", comand);
	printf("%s \n", tipo);

	if(strcmp(comand,tipo)==0){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	char comando[]="cd /home";
	char test[sizeof("cd")];
	strcpy(test,"cd");
	int size=strlen(test);
	char test2[size];

	printf("%s \n", test2);
	//int n=onlyComands(0,2,comando,test2);
	//printf("%d \n", n);
return 0;
}



