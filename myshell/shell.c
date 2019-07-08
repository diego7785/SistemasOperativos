#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char** argv){
//	printf("%d", strcmp(argv[1], "cd"));
  if(argc != 2){
      printf("Missing arguments \n");
      exit(1);
    }else{
  if(strcmp(argv[1], "cd")==0){
    DIR *dirp;
    struct dirent *direntp;

    if(argc != 2){
      printf("Uso: %s directorio \n", argv[0]);
      exit(1);
    }

    dirp=opendir(argv[1]);
    if(dirp==NULL){
      printf("Error: No se puede abrir el directorio \n");
      exit(2);
    }

    printf("i-nodo\toffset\t\tlong\nombre\n");
    while((direntp=readdir(dirp)) != NULL){
      printf("HOLA");
    }

    closedir(dirp);
    
  }else if(strcmp(argv[1], "pwd")==0){
    char current_pos[100];
    getcwd(current_pos, sizeof(current_pos));
    
	printf("%s \n", current_pos);
    
  printf("\n");
  }else{
    printf("Missing arguments");
  }
}
  return 0;
}
