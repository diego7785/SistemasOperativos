int onlyComands(int start, int end, char comando[], char tipo[]){
        int size=end-start;
        char* comand;
        comand = (char*)malloc(size*sizeof(char));
        for(int i=start, j=0; i<end; i++,j++){
                comand[j]=comando[i];
        }

        if(strcmp(comand,tipo)==0){
                return 1;
        }else{
                return 0;
        }
        free(comand);
}


