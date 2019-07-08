#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char** argv){
  if(argc < 1){
      printf("Missing arguments \n");
      exit(1);
    }else{
  if(strcmp(argv[1], "cd")==0){
    DIR *dirp;
    struct dirent *direntp;

    if(argc < 2){
     // printf("Uso: %s directorio \n", argv[0]);
      printf("Missing arguments in cd \n");
      exit(1);
    }

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
