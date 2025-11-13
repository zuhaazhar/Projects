#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int mode;
    printf("\t========== WELCOME TO CODEBREAKER ============\n");

    printf("Choose Mode:\n1.Single Player Mode\n2.VS. Mode\n");
    scanf("%d",&mode);
	switch(mode){
    case 1: {
        srand(time(0));
        int i, j, k=0, z=0, attempt, score=115, level, lower=0, upper=9;
        time_t start, end;
        
        printf("\t==========WELCOME TO SINGLE PLAYER MODE============");

        printf("\n\nGuess the secret number within 5 attempts!\nChoose a mode: Easy (3 digits), Normal (4 digits), or Hard (5 digits).\nAfter each guess, you will see hints\n\nDon't forget to add space in-between digits\n\n  # for correct digit & position\n  ~ for correct digit wrong position\n  X for wrong digit.\n");

        printf("\nChoose difficulty Level:\n1. Easy\n2. Medium\n3. Hard\n");
        scanf("%d", &level);
        
        int randomNum1[3];
            for(i=0;i<3;i++){
				randomNum1[i]=(rand()%(upper-lower+1))+lower;
			}
		int randomNum2[4];
            for(i=0;i<4;i++){
				randomNum2[i]=(rand()%(upper-lower+1))+lower;
			}
		int randomNum3[5];
            for(i=0;i<5;i++){
				randomNum3[i]=(rand()%(upper-lower+1))+lower;
			}

	    time(&start);

        for(attempt=1;attempt<=5;attempt++){
        printf("\nAttempt %d: " ,attempt);

        switch (level)
        {
        case 1:{
        
            int num[3];
            scanf("%d%d%d",&num[0],&num[1],&num[2]);
            z=0;
                for(i=0;i<3;i++){
                        if(num[i]==randomNum1[i]){
                            printf( " #");
                            z++;
                            if(z==3)
                                break;
                            continue;
                        }
                        for(j=0;j<3;j++){
                            if(num[i]==randomNum1[j]){
                                k=1;
                                break;
                            }
                        }
                        if(k!=0)
                            printf(" ~ ");
                        else
                            printf(" X ");
                        k=0;
                }
                score-=15;
                if(z==3){
                    break;
                    }
        break;
    }
            
        
        case 2:{

            int num[4];
            scanf("%d%d%d%d",&num[0],&num[1],&num[2],&num[3]);
            z=0;
                for(i=0;i<4;i++){
                        if(num[i]==randomNum2[i]){
                            printf( " #");
                            z++;
                            if(z==4)
                                break;
                            continue;
                        }
                        for(j=0;j<4;j++){
                            if(num[i]==randomNum2[j]){
                                k=1;
                                break;
                            }
                        }
                        if(k!=0)
                            printf(" ~ ");
                        else
                            printf(" X ");
                        k=0;
                }
                score-=15;
                if(z==4){
                    break;
                    }
        break;
        }

        
        case 3:{
 
            int num[5];
            scanf("%d%d%d%d%d",&num[0],&num[1],&num[2],&num[3],&num[4]);
            z=0;
                for(i=0;i<5;i++){
                        if(num[i]==randomNum3[i]){
                            printf( " #");
                            z++;
                            if(z==5)
                                break;
                            continue;
                        }
                        for(j=0;j<5;j++){
                            if(num[i]==randomNum3[j]){
                                k=1;
                                break;
                            }
                        }
                        if(k!=0)
                            printf(" ~ ");
                        else
                            printf(" X ");
                        k=0;
                }
                score-=15;
                if(z==5){
                    break;
                    }
        break;   
    }
    
        default:
            printf("Invalid Option.");
    }
    if (level == 1 && z == 3) break;
    else if (level == 2 && z == 4) break;
    else if (level == 3 && z == 5) break;
    }
    time(&end);

    if (level == 1 && z == 3) printf("\nYou Won!");
    else if (level == 2 && z == 4) printf("\nYou Won!");
    else if (level == 3 && z == 5) printf("\nYou Won!");
    else {
        printf("\nYou Lost!");
        score = 0;
        switch(level){
        	case 1:
			printf("\nThe number is ");
        	for(int x=0;x<3;x++){
        		printf("%d", randomNum1[x]);
			}
			break;
			case 2:
					printf("\nThe number is ");
					for(int x=0;x<4;x++){
					printf("%d", randomNum2[x]);
			}
			break;
			case 3:
					printf("\nThe number is ");
					for(int x=0;x<5;x++){
					printf("%d", randomNum3[x]);
			}
			break;
		}
		}
		double time_taken=difftime(end, start);

    printf("\n Your score is %d\n Time taken = %.2fsec", score, time_taken);


    break;
    }
        case 2: {
            srand(time(0));
	int i, j, k=0, z=0, level, lower=0, upper=9, attempt=1;
    char begin1[6],begin2[6];
	int num1[4], num2[4];
	time_t start1, start2, end1, end2;
	
	printf("\t========== WELCOME TO VS. MODE ============");
    printf("\nBoth players take turns guessing a 4-digit secret number.\nUnlimited attempts , faster player wins!\n\n# = correct digit & position\n~ = correct digit, wrong position\nX = wrong digit\n");
	int randomNum1[4];
            for(i=0;i<4;i++){
				randomNum1[i]=(rand()%(upper-lower+1))+lower;
			}
	int randomNum2[4];
            for(i=0;i<4;i++){
				randomNum2[i]=(rand()%(upper-lower+1))+lower;
			}
			
	printf("\nPlayer one's turn:");
    printf("\nType 'start' to Begin: ");
    scanf("%s",begin1);
	time(&start1);
	
	do{
		printf("\nAttempt %d: ", attempt);
		scanf("%d%d%d%d",&num1[0],&num1[1],&num1[2],&num1[3]);
            z=0;
                for(i=0;i<4;i++){
                        if(num1[i]==randomNum1[i]){
                            printf( " # ");
                            z++;
                            if(z==4)
                                break;
                            continue;
                        }
                        for(j=0;j<4;j++){
                            if(num1[i]==randomNum1[j]){
                                k=1;
                                break;
                            }
                        }
                        if(k!=0)
                            printf(" ~ ");
                        else
                            printf(" X ");
                        k=0;
	}
	attempt++;
}
	while(z!=4);
	time(&end1);
	double time_taken1=difftime(end1, start1);
	
	printf("\nTime taken by 1st player: %.2f seconds", time_taken1);
	attempt=1;
	
	printf("\nPlayer two's turn:");
    printf("\nType 'start' to Begin: ");
    scanf("%s",begin2);
	time(&start2);
	
	do{
		printf("\nAttempt %d: ", attempt);
		scanf("%d%d%d%d",&num2[0],&num2[1],&num2[2],&num2[3]);
            z=0;
                for(i=0;i<4;i++){
                        if(num2[i]==randomNum2[i]){
                            printf(" # ");
                            z++;
                            if(z==4)
                                break;
                            continue;
                        }
                        for(j=0;j<4;j++){
                            if(num2[i]==randomNum2[j]){
                                k=1;
                                break;
                            }
                        }
                        if(k!=0)
                            printf(" ~ ");
                        else
                            printf(" X ");
                        k=0;
	}
	attempt++;
}
	while(z!=4);
	time(&end2);
	double time_taken2=difftime(end2, start2);
	
	printf("\nTime taken by 2nd player: %.2f seconds", time_taken2);
	
	if(time_taken1<time_taken2)
	printf("\n1ST PLAYER WON!");
	else
	printf("\n2ND PLAYER WON!");
    break;
    }
    
    default:printf("Wrong option");
}
    return 0;

}