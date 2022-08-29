/*--------------------------------------------------------------------------------------------------------| 
|                                                                                                         |
|  Authors :   Maxtrui and Kotonitro                                                                      |
|  Date    :   27th Agoust 2022                                                                           |
|  Header  :   Dungeons 																		      |
|                                                                                                         |
|--------------------------------------------------------------------------------------------------------*/

/*---------------------------------------- includes librarys --------------------------------------------*/
#include <stdio.h>                                                                                       //
#include <stdlib.h>                                                                                      //
#include <time.h>                                                                                        //
#include <conio.h>                                                                                       //
#include <unistd.h>                                                                                      //
#include <windows.h>                                                                                     //
/*-------------------------------------------------------------------------------------------------------*/

/*---------------------------------------- global constant ----------------------------------------------*/
#define MAX 6                                                                                            //
#define MIN 1                                                                                            //
#define KEY 0   																						 //
char movement;																							 //
int menucount=0;                                                                                         //
int lastcount=0;                                                                                         //
/*-------------------------------------------------------------------------------------------------------*/

void dungeon_1()
{
	/* Definitions */
	srand(time(0));
	int i, j, row, column, count=0, minesquant=0, treasurequant=0, remaintreasure;

	/* Creation of the Array */
    int map[10][10];	

	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			map[i][j]=' ';
		}
	}

	/* Mines */
	do
	{
		
		row=rand()%10;
		column=rand()%10;

		if(map[row][column]!=map[0][0])
		{
		}else{
			minesquant++;
			map[row][column]='M';
		}
	}while(minesquant<10);

	/* Treasures */

	do
	{
		row=rand()%10;
		column=rand()%10;

		if(map[row][column]!=map[0][0])
		{
		}else{
			if(map[row][column]!='M')
			{
				treasurequant++;
				map[row][column]='T';
			}
		}
	}while(treasurequant<5);
	
	remaintreasure=treasurequant;
	row=0;
	column=0;

	/* Map */

	while(row<10 && column<10)
	{
		system("cls");	
		printf("Number of movements: %d",count);
		printf("\tRemaining treasures: %d", remaintreasure);
	    printf("\n\n");

		/* Player */

	    if(map[row][column]==map[0][0])
		{
	    	map[row][column]= 'P';	
		}

		for(i=0;i<10;i++)
		{
			for(j=0;j<10;j++)
			{
				printf("[%c]",map[i][j]);
			}	
			printf("\n");
		}

		printf("\nP = Player\t M = Mines\t T = Treasure\n\n");
		printf("W = Up\t S = Down\t A = Left\t D = Right");

		/* Movements */

		do
		{
			movement = getch();

			if(movement == 'W' || movement=='w')
			{
				if(row>0)
				{
					if(row==0)
					{
					}else{
						map[row][column]=' ';
						row--;
					}
					count++;	
				}
			}else{
				if(movement=='S'|| movement == 's')
				{
					if(row<10-1)
					{
						if(row==10-1)
						{
						}else{
							map[row][column]=' ';
							row++;
						}
						count++;
					}
				}else{
					if(movement == 'A'|| movement == 'a')
					{
						if(column>0)
						{
							if(column==0)
							{
							}else{
								map[row][column]=' ';
								column--;
							}
							count++;
						}
					}else{
						if(movement == 'D'|| movement == 'd')
						{
							if (column<10-1)
							{
								if(column==10-1)
								{
								}else{
									map[row][column]=' ';
									column++;
								}
								count++;
							}
						} 
					}
				}
			}
			// Treasure gathering and mine explosion

			if(map[row][column]=='M' && map[row][column]!='T')
			{
				map[row][column]= ' ';
				row=0;
				column=0;
				map[row][column]= 'P';
			}else{
				if(map[row][column]=='T')
				{
					remaintreasure--;
					map[row][column]= 'P';
				}
			}

		}while(row<0 || column<0);

		if(remaintreasure==0)
		{
			sleep(1);
			system("cls");
			lastcount=count;
			
			if(menucount>count || menucount==0)
			{
				menucount=count;
			}

			printf("The hero cleared the dungeon...\n\n");
			system("pause");
			system("cls");
			break;
		}  
	}
}

void dungeon_2()
{
	/* Definitions */
	srand(time(0));
	int i, j, row, column, count, minesquant=0, treasurequant=0, remaintreasure;

	/* Creation of the Array */
    int map[10][15];	

	for(i=0;i<10;i++)
	{
		for(j=0;j<15;j++)
		{
			map[i][j]=' ';
		}
	}

	/* Mines */
	do
	{
		
		row=rand()%10;
		column=rand()%15;

		if(map[row][column]!=map[0][0])
		{
		}else{
			minesquant++;
			map[row][column]='M';
		}
	}while(minesquant<20);

	/* Treasures */

	do
	{
		row=rand()%10;
		column=rand()%15;

		if(map[row][column]!=map[0][0])
		{
		}else{
			if(map[row][column]!='M')
			{
				treasurequant++;
				map[row][column]='T';
			}
		}
	}while(treasurequant<10);
	
	remaintreasure=treasurequant;
	row=0;
	column=0;

	/* Map */

	while(row<10 && column<15)
	{
		system("cls");	
		printf("Number of movements: %d",count);
		printf("\tRemaining treasures: %d", remaintreasure);
	    printf("\n\n");

		/* Player */

	    if(map[row][column]==map[0][0])
		{
	    	map[row][column]= 'P';	
		}

		for(i=0;i<10;i++)
		{
			for(j=0;j<15;j++)
			{
				printf("[%c]",map[i][j]);
			}	
			printf("\n");
		}

		printf("\nP = Player\t M = Mines\t T = Treasure\n\n");
		printf("W = Up\t S = down\t A = Left\t D = Right");

		/* Movements */

		do
		{
			movement = getch();

			if(movement == 'W' || movement=='w')
			{
				if(row>0)
				{
					if(row==0)
					{
					}else{
						map[row][column]=' ';
						row--;
					}
					count++;	
				}
			}else{
				if(movement=='S'|| movement == 's')
				{
					if(row<10-1)
					{
						if(row==10-1)
						{
						}else{
							map[row][column]=' ';
							row++;
						}
						count++;
					}
				}else{
					if(movement == 'A'|| movement == 'a')
					{
						if(column>0)
						{
							if(column==0)
							{
							}else{
								map[row][column]=' ';
								column--;
							}
							count++;
						}
					}else{
						if(movement == 'D'|| movement == 'd')
						{
							if (column<15-1)
							{
								if(column==15-1)
								{
								}else{
									map[row][column]=' ';
									column++;
								}
								count++;
							}
						} 
					}
				}
			}
			// Treasure gathering and mine explosion

			if(map[row][column]=='M' && map[row][column]!='T')
			{
				map[row][column]= ' ';
				row=0;
				column=0;
				map[row][column]= 'P';
			}else{
				if(map[row][column]=='T')
				{
					remaintreasure--;
					map[row][column]= 'P';
				}
			}

		}while(row<0 || column<0);

		if(remaintreasure==0)
		{
			sleep(1);
			system("cls");
			lastcount=count;
			
			if(menucount>count || menucount==0)
			{
				menucount=count;
			}

			printf("The hero cleared the dungeon...\n\n");
			system("pause");
			system("cls");
			break;
		}  
	}
}

void dungeon_3()
{
	/* Definitions */
	srand(time(0));
	int i , j, row, column, count, minesquant=0, treasurequant=0, remaintreasure;

	/* Creation of the Array */
    int map[10][15];	

	for(i=0;i<10;i++)
	{
		for(j=0;j<15;j++)
		{
			map[i][j]=' ';
		}
	}

	/* Mines */
	do
	{
		
		row=rand()%10;
		column=rand()%15;

		if(map[row][column]!=map[0][0])
		{
		}else{
			minesquant++;
			map[row][column]='M';
		}
	}while(minesquant<50);

	/* Treasures */

	do
	{
		row=rand()%10;
		column=rand()%15;

		if(map[row][column]!=map[0][0])
		{
		}else{
			if(map[row][column]!='M')
			{
				treasurequant++;
				map[row][column]='T';
			}
		}
	}while(treasurequant<20);
	
	remaintreasure=treasurequant;
	row=0;
	column=0;

	/* Map */

	while(row<10 && column<15)
	{
		system("cls");	
		printf("Number of movements: %d",count);
		printf("\tRemaining treasures: %d", remaintreasure);
	    printf("\n\n");

		/* Player */

	    if(map[row][column]==map[0][0])
		{
	    	map[row][column]= 'P';	
		}

		for(i=0;i<10;i++)
		{
			for(j=0;j<15;j++)
			{
				printf("[%c]",map[i][j]);
			}	
			printf("\n");
		}

		printf("\nP = Player\t M = Mines\t T = Treasure\n\n");
		printf("W = Up\t S = down\t A = Left\t D = Right");

		/* Movements */

		do
		{
			movement = getch();

			if(movement == 'W' || movement=='w')
			{
				if(row>0)
				{
					if(row==0)
					{
					}else{
						map[row][column]=' ';
						row--;
					}
					count++;	
				}
			}else{
				if(movement=='S'|| movement == 's')
				{
					if(row<10-1)
					{
						if(row==10-1)
						{
						}else{
							map[row][column]=' ';
							row++;
						}
						count++;
					}
				}else{
					if(movement == 'A'|| movement == 'a')
					{
						if(column>0)
						{
							if(column==0)
							{
							}else{
								map[row][column]=' ';
								column--;
							}
							count++;
						}
					}else{
						if(movement == 'D'|| movement == 'd')
						{
							if (column<15-1)
							{
								if(column==15-1)
								{
								}else{
									map[row][column]=' ';
									column++;
								}
								count++;
							}
						} 
					}
				}
			}
			// Treasure gathering and mine explosion

			if(map[row][column]=='M' && map[row][column]!='T')
			{
				map[row][column]= ' ';
				row=0;
				column=0;
				map[row][column]= 'P';
			}else{
				if(map[row][column]=='T')
				{
					remaintreasure--;
					map[row][column]= 'P';
				}
			}

		}while(row<0 || column<0);

		if(remaintreasure==0)
		{
			sleep(1);
			system("cls");
			lastcount=count;
			
			if(menucount>count || menucount==0)
			{
				menucount=count;
			}

			printf("The hero cleared the dungeon...\n\n");
			system("pause");
			system("cls");
			break;
		}  
	}
}
