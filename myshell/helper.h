int onlyComands(int start, int end, char comando[], char tipo[]){
        int size=sizeof(&comando)/sizeof(comando[0]); 
        char comand[size];
        for(int i=start, j=0; i<end; i++,j++){
                comand[j]=comando[i];
        }
        if(strcmp(comand,tipo)==0){
                return 1;
        }else{
                return 0;
        }
}

