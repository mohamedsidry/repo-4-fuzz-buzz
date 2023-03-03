#include <stdio.h>

void main(void){

  int star_num = 1 ;
  int end_num = 20 ;

  while(star_num<=end_num){

    if(star_num % 3 == 0)
      {
	
        if (star_num % 5 == 0){printf("FUZZBUZZ ! \n");}

	else{printf("FUZZ ! \n");}

      }

    else if(star_num % 5 == 0){printf("BUZZ ! \n");}

    else{printf("%i \n",star_num);}

    star_num ++;
  };
}
