#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int random=0,count=0,num;
	int stime;
	long ltime;
	ltime=time(NULL);
	stime=(unsigned) ltime/2;
	srand(stime);
	random=rand()%10;
	do{
		count+=1;
		printf("\n\nGuess a number from 0 to 10: ");
		scanf("%d",&num);
		if(random==num){
			printf("Congratulations, you have guessed correctly in %d tries.",count);}
		
			else if(random<num){
				printf("Generated number is less than entered number, try again: ");}
				else if(random>num){
					printf("Generated number is greater than entered number, try again: ");}
	}
	while(1);
	return 0;
}
