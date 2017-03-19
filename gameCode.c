#include <stdio.h>


//FAHAD CODE IS HERE
/*14 is the number of tiles, and each tile is represented by 3*3 matrix */
char tiles[14][3][3];

// t is the number of tiles
int t=0;

void readfromfile(char s1[], char s2[]){


	
        FILE *file1 = fopen( s1, "r" );
        FILE *file2 = fopen( s2, "w" );

        /* fopen returns 0, the NULL pointer, on failure */
        if ( file1 == 0 )
        {
            printf( "Could not open file\n" );
        }
        else 
        {
            char x[10];
            /* read one Line at a time from file1, stopping at EOF, which indicates the end of the file. */
			int i=0;
            while  (  !feof(file1) )
            {
		 

			fscanf( file1,"%s",x ) ;
			t=0;
			for (int j=0;j<3;j++){
				for (int k=0;k<3;k++){
					tiles[i][j][k]=x[t];
					t++;
					}
				}
				i++;
			
			
		
              /*  printf( "%c", x ); */
		fprintf(file2,"%s\n",x);
		
            }
            fclose( file1 );
	    fclose( file2 );
        }


void user_tile_place(char r1[]){
	// This function is used to let to the user place the tiles in the MAP
	
	}
void auto_tile_place(char r2[]){
	// This function is used to find the optimal place for the tiles in the MAP

	}
int score_calculation(char v[]){
	// This function is calculate the score
	int score;


	return score;
	}




}

int main ( int argc, char *argv[] )
{
    
	// We assume argv[1], argv[2] are a filenames to open
	readfromfile(argv[1],argv[2]);

	int tm;
	//Decide when the Game ends, whether by Time/Tiles
	int choice2;
	printf("Please Decide when the Game ends, whether by Time/Tiles\n");
	printf("Insert 1 to End With Time and 2 to End with tiles t\n");
	scanf("%d",&choice2);
	if (choice2==1)	
		{
		
		printf("Insert the Time for ending the game\n");
		scanf("%d",&tm);
		}	
	else if (choice2==2)
		tm=t;

	int choice;
	//Decide which mode , 
	printf("Please select one of the two availble modes\n");
	printf("Insert 1 for AUTO MODE and 2 for INTERACTIVE MODE\n");
	scanf("%d",&choice);
	if (choice==1)
		{
		//************You are in the AUTO Mode ,
		printf("************You are in the AUTO Mode\n");
		}
	else if (choice==2)
		{
		//************You are in the INTERACTIVE Mode ,
		printf("************You are in the INTERACTIVE Mode\n");
		//loop for each tile 
		
		
			

		for (int l=0;l<tm;l++)
			{
			
			
			}
		
		}
	else
		{
		//************WRONG Insertion ,
		printf("************WRONG INPUT try next time and good Bye \n");
		}

		for (int i=0;i<14;i++){
			
			for (int j=0;j<3;j++){
				for (int k=0;k<3;k++){
					printf("%c",tiles[i][j][k]);
					
					}
					printf("\n");
				}
				printf("\n");
			}
      return(0);
}