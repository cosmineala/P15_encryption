#include <stdlib.h>
#include <stdio.h>
#include <string.h>


#include "crypting.h"
#include "function.h"
#include "testing.h"

    void men(){

        char meniu = 'a';

   		printf(" \nINSERT: \n1 to encrypt \n2 to decrypt \n0 to exit \nh for help \nt for testing program \n>>> ");

    	scanf("%c",&meniu);

    	switch(meniu){

        	case '0':
            return ;


        	case '1':
            	printf("\n");
            	scan(1);
            	break;

        	case '2':
            	printf("\n");
            	scan(2);
            	break;

            case 'h':
                printf("\n Welcome to Encryption by Capisizu Cosmin \n\nIf you want to encrypt a string go to meniu 1 , you can encrypt a string up ");
                printf("to\n1024 characters from the terminal.\n\nIf you want to decrypt a string go to meniu 2 , you can decrypt a string up to\n1024 ");
                printf("characters.\n\nIf you want to close and exit program go to meniu 0 , it will close the program.\n\nIf you want enter testing ");
                printf("mode go to meniu T for a custom or automatic testing\n of the program.\n");
                scanf("%c",&meniu);
                men();
                break;

            case 't':
                test();
                scanf("%c",&meniu);
                men();
                break;

        	default :
            	printf("Incorect insertion please falow the instruction");
            	men();
            	break;
    	}


    	return ;

	}

	void scan( int stage ){
    
        char *st_citire;
        char c = 'a';
        int j = 0;
    
        st_citire = (char*)malloc(25*sizeof(char));


                                                                            char bug;//rezolvare bug

                                                                            bug = getc(stdin);

    
        printf("Enter String : ");
 
        while (c != '\n') {
        
            c = getc(stdin);
        
            if ( j % 25 == 0 ){
            
                st_citire = (char*)realloc(st_citire, (j + 25) * sizeof(char));
            }
        
            
            st_citire[j] = c;
        
        
            j++;
        }
    
        st_citire[ j ] = '\0';

        switch(stage){

            case 1 :
                crypt(st_citire);
                break;

            case 2 :
                decrypt(st_citire);
                break;

        }

        if (stage == 1 || stage == 2){
           
            free(st_citire);

            men();

        }


        
        return ;
    
    
}

