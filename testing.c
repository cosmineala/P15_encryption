#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>


#include "crypting.h"
#include "function.h"
#include "testing.h"



	void test(){

		int trans_mum_asci [26] = { 16 , 22 , 4 , 17 , 19 , 24 , 20 , 8 , 14 , 15 , 0 , 18 , 3 , 5 , 6 , 7 , 9 , 10 , 11 , 25 , 23 , 2 , 21 , 1 , 13 , 12 };

		int selector = 0;

		char chey = 'a';

		int characters_number = 0;


		printf("\n\nenter 1 for auto test (random string of random size betwin 10^3 and 10^8\ncharacters and random cryptation chey).\n\n");
		printf("enter 2 for manua testing (yoy can set size , encryption chey and save the test to a custom file).\n\n");
		printf("enter 0 to exit.\n\n");
		printf(">>>");

		scanf("%d", &selector);

		if (selector == 0)	
		{
			return ;
		}


		if( selector == 1){

			srand(time(NULL));

			characters_number = ( rand() % 10000 ) + 100 ;

			chey = 65 + trans_mum_asci[ (rand() % 8) +10 ] ;

			//facem random de la 'A' la 'L'
			// random cate caractere

		}
		
		if (selector == 2){

            scanf("%c",&chey);                                                  // bug solved

			printf("Enter encryption chey :\n>>>");
			scanf("%c",&chey);

			printf("Enter how many characters must the test have :\n>>>");
			scanf("%d",&characters_number);


		}

		char* st_citire = (char*)malloc( characters_number * sizeof(char));

		st_citire[0] = chey;
		st_citire[1] = ' ';

		for(int i = 2 ; i < characters_number ; i++ ){
			st_citire[i] = ( rand() % 96 ) + 32;
		}

		crypt(st_citire);


//--------------------------FILE--START------
 		
 		
 	FILE * fp;

    fp = fopen ("Rezultate_test.txt", "w");
    fprintf(fp, " %s ", st_citire);
   
    fclose(fp);
    

//-------------------------FILE--END----------

free(st_citire);



return ;


	}

