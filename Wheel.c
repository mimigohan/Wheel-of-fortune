/*
 * Wheel.c
 *
 *  Created on: 15.05.2018
 *      Author: mimi-
 */
#include <stdio.h>
#include <stdlib.h>
#include "Wheel.h"



int main () {

	srand(time(NULL)); // so my random number gets redone

   int *n[26]; // n is an array of 26 int (so the full wheel (according to wikipedia))
   n[0]=500;
   n[1]=650;
   n[2]=500;
   n[3]=900;
   n[4]=123;
   n[5]=2500;
   n[6]=500;
   n[7]=600;
   n[8]=700;
   n[9]=600;
   n[10]=650;
   n[11]=500;
   n[12]=700;
   n[13]=123;
   n[14]=1000000;
   n[15]=123;
   n[16]=600;
   n[17]=550;
   n[18]=500;
   n[19]=600;
   n[20]=123;
   n[21]=650;
   n[22]=122;
   n[23]=700;
   n[24]=121;
   n[25]=800;





   int randomnumber;															// implementation of chance
       randomnumber = rand() % 26;

//		int randomnumber = 24;
//       printf("%d\n", randomnumber);
//       printf("that's the random number\n");									for testing purpose
//       printf("n[%d] = %d\n", randomnumber, n[randomnumber] );


       switch(randomnumber) {
       case 4: printf("Bankrupt\n");
       break;
       case 13: printf("Bankrupt\n");
       break;
       case 15: printf("Bankrupt\n");
       break;
       case 20: printf("Bankrupt\n");
       break;
       case 22: printf("loose a turn\n");
       break;
       case 24: printf("Extra Turn\n");
       break;
       default: printf("%d $\n", n[randomnumber] );
       }

       return 0;

}
