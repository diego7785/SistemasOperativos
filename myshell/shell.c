#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "helper.h"

int main(int argc, char** argv){
	char comandos[1000];
	while(1){
		printf("%s shell>", getenv("PWD"));
  		scanf("%s", comandos);
		if(strcmp(comandos,"quit")==0){
			exit(0);
		}else{
			int resul;
			//strcpy(temp,&onlyComands(0,2,comandos));
			resul=onlyComands(0,2,comandos,"cd");
			printf("%d", resul);
  			/*if(strcmp(comandos, "cd")==0){
				printf("shi \n");
			}*/
		}
    		/*DIR *dirp;
    		struct dirent *direntp;


    		dirp=opendir(argv[2]);
   		// printf("[%s]", dirp);
    		if(dirp==NULL){
      			printf("Error: No se puede abrir el directorio \n");
      		exit(2);
    		}

   
    		while((direntp=readdir(dirp)) != NULL){
      			printf("[%s]\n", direntp->d_name);
    		}

    		closedir(dirp);
    
  		 
    		char current_pos[100];
    		getcwd(current_pos, sizeof(current_pos));
    
		printf("%s \n", current_pos);
    
  		printf("\n");
  
   		*/
  
	}
  return 0;
}
