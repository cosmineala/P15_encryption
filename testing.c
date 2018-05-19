#include <stdlib.h>
#include <stdio.h>
#include <string.h>


#include "crypting.h"
#include "function.h"
#include "testing.h"



	void test(){

		int selector = 0;

		char chey = 'a';

		int characters_number = 0;

		int file_status = 0;

		printf("enter 0 for auto test (random string of random size betwin 10^3 and 10^8 characters and random cryptation chey)\n
			    enter 1 for manua testing (yoy can set size , encryption chey and save the test to a custom file)\n
			    >>>");

		scanf("%d", &selector);

		if( selector == 0){

			//facem random de la 'A' la 'L'
			// random cate caractere

		}
		else{

			scanf("Enter encryption chey :\n
				   >>>%c",&chey);

			scanf("Enter how many characters must the test have :\n
				   >>>%d",&characters_number);

			scanf("Enter 0 if you don't want log file and 1 if you do :\n
				   >>>%d",file_status);

		}





		



	}