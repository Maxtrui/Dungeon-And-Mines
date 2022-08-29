/*--------------------------------------------------------------------------------------------------------| 
|                                                                                                         |
|  Authors :   Maxtrui and Kotonitro                                                                      |
|  Date    :   27th Agoust 2022                                                                           |
|  Header  :   Here we have all the functions and declarations of the game "Dungeons And Mines" (DAM).    |
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

/*---------------------------------------- includes headers ---------------------------------------------*/
#include "lore.h"                                                                                        //
#include "dungeon.h"                                                                                     //
/*-------------------------------------------------------------------------------------------------------*/

/*---------------------------------------- global constant ----------------------------------------------*/
#define MAX 6                                                                                            //
#define MIN 1                                                                                            //
#define KEY 0   																						 //
/*-------------------------------------------------------------------------------------------------------*/

/*------------------------------------------ Declaration ------------------------------------------------*/

/* Functionalities */

void Color(int ColorValue);                       // Change the color of text

/* Menus */

int Main_menu();                                  // Main menu of the game

/* Art */

void Title_screen();                               // Title screen pixel art
void Adventurer();                                 // Adventurer pixel art

/* Animations */

void Presentation();                               // Game presentation | Title screen
void Animation_ProgressBar();                      // Animation of progress bar
void Animation_ProgressBar_Var1();                 // Animation of progress bar, presentation variant

/* Lore */

//Writing
void Monologue_start();                            // Introductory lore  -  Monologue of hero
void Monologue_end();                              // Final lore         -  Monologue of hero
void Monologue_Dungeon1();                         // Dungeons           -  Monologue of hero
void Monologue_Dungeon2();                         // Dungeons           -  Monologue of hero
void Monologue_Dungeon3();                         // Dungeons           -  Monologue of hero
void Purple_coffin();                              // Item description
void End_of_Wills_Sword();                         // Item description
void Soul_Gourd();                                 // Item description

// Layout
void Introductory_lore();                          // layout of the monologue
void Final_lore();                                 // layout of the monologue
void Dungeon1_lore();                              // layout of the monologue
void Dungeon2_lore();                              // layout of the monologue
void Dungeon3_lore();                              // layout of the monologue
void Treasure_Dungeon1();                          // Special dungeon treasures
void Treasure_Dungeon2();                          // Special dungeon treasures
void Treasure_Dungeon3();                          // Special dungeon treasures

/* Dungeons */
void dungeon_1();                                  // Dungeon Easy
void dungeon_2();                                  // Dungeon Medium
void dungeon_3();                                  // Dungeon Hard


/*-------------------------------------------------------------------------------------------------------*/


/*------------------------------------------  | Code of functions | -----------------------------------------------*/


// Game presentation | Title screen
void Presentation() 
{
    Title_screen();
    Color(12);
    printf("\t\t\t   GitHub of Devs: @Maxtrui & @Kotonitro     \n\n\n");
    Color(15);
    Animation_ProgressBar_Var1();
    system("cls");     
}

// Introductory lore  -  Monologue of hero
void Introductory_lore()
{
    Adventurer();
    Monologue_start();
    system("pause");
    system("cls");
}

// Final lore  -  Monologue of hero
void Final_lore()
{
    Adventurer();
    Monologue_end();
    system("pause");
    system("cls");
}

// Dungeons  -  Monologue of hero
void Dungeon1_lore()
{
    Adventurer();
    Monologue_Dungeon1();
    system("pause");
    system("cls");
}

void Dungeon2_lore()
{
    Adventurer();
    Monologue_Dungeon2();
    system("pause");
    system("cls");
}

void Dungeon3_lore()
{
    Adventurer();
    Monologue_Dungeon3();
    system("pause");
    system("cls");
}

// Special dungeon treasures
void Treasure_Dungeon1()
{
    Purple_coffin();
    printf("\n\t\t\t\t\t\t%c  ", 174); 
    Color(5);
    printf("%c  ",219);
    Color(15);  
    printf("%c\n\n",175);
    system("pause");
}

void Treasure_Dungeon2()
{
    End_of_Wills_Sword();
    printf("\n\t\t\t\t\t\t%c  ", 174); 
    Color(3);
    printf("%c  ", 197);
    Color(15);  
    printf("%c\n\n",175);
    system("pause");
}

void Treasure_Dungeon3()
{
    Soul_Gourd();
    printf("\n\t\t\t\t\t\t%c  ", 174); 
    Color(4);
    printf("%c  ",207);
    Color(15);  
    printf("%c\n\n",175);
    system("pause");
}


// Change the color of text
void Color(int ColorValue) 
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), ColorValue);
}


// Main menu of the game

int Main_menu()
{
    int Election = 1;
    char Key;
    
    while(1)
    {
        switch(Election)
        {
        case 1:
            Adventurer();
            Color(12);
            printf("\n\t The hero has to decide what to do... \n\n");
            Color(15);
            Color(3);
            printf(" >\t Level 1: Black Ink\n"); 
            Color(15);
            printf("\t Level 2: Divine Essence Star Ocean\n");
            printf("\t Level 3: Emperor of Abyss\n");
            printf("\t Exit: Leave the expedition \n\n");
            Color(8);
            printf("\t W = Up \t S = Down \t ENTER = Select\n\n");
            printf("\t BEST GAME: %d  MOVEMENTS \n", menucount);
            printf("\t LAST GAME: %d  MOVEMENTS \n", lastcount);
            Color(15);
            break;
        case 2:
            Adventurer();
            Color(12);
            printf("\n\t The hero has to decide what to do... \n\n");
            Color(15);
            printf("\t Level 1: Black Ink\n"); 
            Color(3);
            printf(" >\t Level 2: Divine Essence Star Ocean\n");
            Color(15);
            printf("\t Level 3: Emperor of Abyss\n");
            printf("\t Exit: Leave the expedition \n\n");
            Color(8);
            printf("\t W = Up \t S = Down \t ENTER = Select\n\n");
            printf("\t BEST GAME: %d  MOVEMENTS \n", menucount);
            printf("\t LAST GAME: %d  MOVEMENTS \n", lastcount);
            Color(15);
            break;
        case 3:
            Adventurer();
            Color(12);
            printf("\n\t The hero has to decide what to do... \n\n");
            Color(15);
            printf("\t Level 1: Black Ink\n"); 
            printf("\t Level 2: Divine Essence Star Ocean\n");
            Color(3);
            printf(" >\t Level 3: Emperor of Abyss\n");
            Color(15);
            printf("\t Exit: Leave the expedition \n\n");
            Color(8);
            printf("\t W = Up \t S = Down \t ENTER = Select\n\n");
            printf("\t BEST GAME: %d  MOVEMENTS \n", menucount);
            printf("\t LAST GAME: %d  MOVEMENTS \n", lastcount);
            Color(15);
            break;
        case 4:
            Adventurer();
            Color(12);
            printf("\n\t The hero has to decide what to do... \n\n");
            Color(15);
            printf("\t Level 1: Black Ink\n"); 
            printf("\t Level 2: Divine Essence Star Ocean\n");
            printf("\t Level 3: Emperor of Abyss\n");
            Color(4);
            printf(" >\t Exit: Leave the expedition \n\n");
            Color(15);
            Color(8);
            printf("\t W = Up \t S = Down \t ENTER = Select\n\n");
            printf("\t BEST GAME: %d  MOVEMENTS \n", menucount);
            printf("\t LAST GAME: %d  MOVEMENTS \n", lastcount);
            Color(15);
            break;
        }
        
        Key = _getch();
        
        switch(Key)
        {
        case 'W':
        case 'w':
            Election--;
            if(Election < 1)
            {
                Election = 4;
            }
            break;
        case 'S':
        case 's':
            Election++;
            if(Election > 4)
            {
                Election = 1;
            }
            break;
        case 13:
            system("cls");
            return Election;
            break;
        }
        system("cls");
    }
}


// Animations


// Animation of progress bar
void Animation_ProgressBar() 
{
    printf("|%c%c%c%c%c%c%c%c%c%c|[0%c]\r", 177,177,177,177,177,177,177,177,177,177,37);
    usleep(500000);
    printf("|%c%c%c%c%c%c%c%c%c%c|[10%c]\r", 178,177,177,177,177,177,177,177,177,177,37);
    usleep(500000);
    printf("|%c%c%c%c%c%c%c%c%c%c|[20%c]\r", 178,178,177,177,177,177,177,177,177,177,37);
    usleep(500000);
    printf("|%c%c%c%c%c%c%c%c%c%c|[30%c]\r", 178,178,178,177,177,177,177,177,177,177,37);
    usleep(500000);
    printf("|%c%c%c%c%c%c%c%c%c%c|[40%c]\r", 178,178,178,178,177,177,177,177,177,177,37);
    usleep(500000);
    printf("|%c%c%c%c%c%c%c%c%c%c|[50%c]\r", 178,178,178,178,178,177,177,177,177,177,37);
    usleep(500000);
    printf("|%c%c%c%c%c%c%c%c%c%c|[60%c]\r", 178,178,178,178,178,178,177,177,177,177,37);
    usleep(500000);
    printf("|%c%c%c%c%c%c%c%c%c%c|[70%c]\r", 178,178,178,178,178,178,178,177,177,177,37);
    usleep(500000);
    printf("|%c%c%c%c%c%c%c%c%c%c|[80%c]\r", 178,178,178,178,178,178,178,178,177,177,37);
    usleep(500000);
    printf("|%c%c%c%c%c%c%c%c%c%c|[90%c]\r", 178,178,178,178,178,178,178,178,178,177,37);
    usleep(500000);
    printf("|%c%c%c%c%c%c%c%c%c%c|[100%c]\r", 178,178,178,178,178,178,178,178,178,178,37);
    usleep(500000);
}


// Animation of progress bar, presentation variant
void Animation_ProgressBar_Var1() 
{
    printf("\t\t\t\t\t|%c%c%c%c%c%c%c%c%c%c|[0%c]\r", 177,177,177,177,177,177,177,177,177,177,37);
    usleep(700000);
    printf("\t\t\t\t\t|%c%c%c%c%c%c%c%c%c%c|[10%c]\r", 178,177,177,177,177,177,177,177,177,177,37);
    usleep(700000);
    printf("\t\t\t\t\t|%c%c%c%c%c%c%c%c%c%c|[30%c]\r", 178,178,178,177,177,177,177,177,177,177,37);
    usleep(700000);
    printf("\t\t\t\t\t|%c%c%c%c%c%c%c%c%c%c|[40%c]\r", 178,178,178,178,177,177,177,177,177,177,37);
    usleep(700000);
    printf("\t\t\t\t\t|%c%c%c%c%c%c%c%c%c%c|[60%c]\r", 178,178,178,178,178,178,177,177,177,177,37);
    usleep(700000);
    printf("\t\t\t\t\t|%c%c%c%c%c%c%c%c%c%c|[70%c]\r", 178,178,178,178,178,178,178,177,177,177,37);
    usleep(700000);
    printf("\t\t\t\t\t|%c%c%c%c%c%c%c%c%c%c|[100%c]\r", 178,178,178,178,178,178,178,178,178,178,37);
    usleep(700000);
}


// ART

// Title screen pixel art
void Title_screen()
{
    Color(8);
    printf("        %c%c%c %c%c   %c%c  %c%c%c  %c%c%c  %c%c   %c%c %c%c   %c%c%c %c%c%c   %c%c %c%c   %c%c%c  %c%c   %c%c %c%c   \n", 254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254);
    printf("         %c%c  %c%c  %c%c   %c%c    %c%c %c%c  %c%c   %c%c   %c%c  %c%c  %c%c   %c%c    %c%c %c%c  %c%c   %c%c  \n", 254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254);
    printf("         %c%c  %c%c  %c%c   %c%c   %c %c%c %c  %c%c        %c%c      %c%c   %c%c   %c %c%c %c  %c%c%c%c     \n", 254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254);
    printf("         %c%c  %c%c  %c%c   %c%c   %c%c %c%c   %c%c  %c%c%c   %c%c %c%c   %c%c   %c%c   %c%c %c%c    %c%c%c%c%c   \n", 254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254);
    printf("         %c%c  %c%c  %c%c   %c%c   %c%c  %c%c  %c%c   %c%c   %c%c      %c%c   %c%c   %c%c  %c%c      %c%c%c  \n", 254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254);
    printf("         %c%c  %c%c  %c%c   %c%c   %c%c  %c%c  %c%c   %c%c   %c%c  %c%c  %c%c   %c%c   %c%c  %c%c  %c%c   %c%c  \n", 254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254);
    printf("        %c%c%c %c%c    %c%c %c%c   %c%c%c  %c%c   %c%c %c%c   %c%c%c %c%c%c   %c%c %c%c   %c%c%c  %c%c   %c%c %c%c   \n\n", 254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254);
    printf("                                  %c%c     %c%c%c  %c%c  %c%c%c %c%c   \n", 254,254,254,254,254,254,254,254,254,254,254,254);
    printf("                                   %c%c      %c%c %c%c   %c%c  %c%c  \n", 254,254,254,254,254,254,254,254,254,254);
    printf("                                 %c%c %c%c    %c %c%c %c   %c%c  %c%c  \n", 254,254,254,254,254,254,254,254,254,254,254,254);
    printf("                                 %c%c  %c%c   %c%c %c%c    %c%c  %c%c  \n", 254,254,254,254,254,254,254,254,254,254,254,254);
    printf("                                 %c%c %c%c%c   %c%c  %c%c   %c%c  %c%c  \n", 254,254,254,254,254,254,254,254,254,254,254,254,254);
    printf("                                 %c%c  %c%c   %c%c  %c%c   %c%c  %c%c  \n", 254,254,254,254,254,254,254,254,254,254,254,254);
    printf("                                %c%c%c  %c%c  %c%c%c  %c%c  %c%c%c %c%c   \n\n", 254,254,254,254,254,254,254,254,254,254,254,254,254,254,254);                       
    printf("                        %c%c   %c%c    %c%c%c%c   %c%c%c  %c%c  %c%c%c %c%c%c   %c%c %c%c   \n", 254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254);
    printf("                         %c%c %c%c      %c%c      %c%c %c%c   %c%c  %c%c  %c%c   %c%c  \n", 254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254);
    printf("                        %c %c%c%c %c     %c%c     %c %c%c %c   %c%c      %c%c%c%c     \n", 254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254);
    printf("                        %c%c %c %c%c     %c%c     %c%c %c%c    %c%c %c%c    %c%c%c%c%c   \n", 254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254);
    printf("                        %c%c   %c%c     %c%c     %c%c  %c%c   %c%c          %c%c%c  \n", 254,254,254,254,254,254,254,254,254,254,254,254,254,254,254);
    printf("                        %c%c   %c%c     %c%c     %c%c  %c%c   %c%c  %c%c  %c%c   %c%c  \n", 254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254);
    printf("                        %c%c   %c%c    %c%c%c%c   %c%c%c  %c%c  %c%c%c %c%c%c   %c%c %c%c \n\n", 254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254);
    Color(15);
}

// Adventurer pixel art
void Adventurer()
{
    Color(8);
    printf("\t\t\t\t\t               %c%c%c%c%c%c%c%c%c\n", 220,220,220,220,220,220,220,220,220); // 1 line
    printf("\t\t\t\t\t              %c", 219);
    Color(10);
    printf("%c",177);
    Color(2);
    printf("%c%c%c%c%c%c%c", 178,178,178,178,178,178,178);
    Color(10);
    printf("%c", 177);
    Color(8);
    printf("%c\n",219); // 2 line
    printf("\t\t\t\t\t             %c", 219);
    Color(10);
    printf("%c",177);
    Color(2);
    printf("%c%c%c%c%c%c%c%c%c", 178,178,178,178,178,178,178,178,178);
    Color(10);
    printf("%c", 177);
    Color(8);
    printf("%c\n",219); // 3 line
    printf("\t\t\t\t\t            %c",219);
    Color(10);
    printf("%c",177);
    Color(2);
    printf("%c",178);
    Color(10);
    printf("%c%c%c%c%c%c%c%c%c", 177,177,177,177,177,177,177,177,177);
    Color(2);
    printf("%c",178);
    Color(10);
    printf("%c", 177);
    Color(8);
    printf("%c\n",219); // 4 line
    printf("\t\t\t\t\t            %c",219);
    Color(2);
    printf("%c",178);
    Color(6);
    printf("%c",176);
    Color(6);
    printf("%c%c%c%c%c%c%c%c%c", 178,178,178,178,178,178,178,178,178);
    Color(6);
    printf("%c",176);
    Color(10);
    printf("%c", 177);
    Color(8);
    printf("%c\n",219); // 5 line
    printf("\t\t\t\t\t           %c",219);
    Color(10);
    printf("%c",177);
    Color(6);
    printf("%c",176);
    Color(6);
    printf("%c%c%c%c%c%c%c%c%c%c%c", 178,178,178,178,178,178,178,178,178,178,178);
    Color(6);
    printf("%c",176);
    Color(10);
    printf("%c", 177);
    Color(8);
    printf("%c\n",219); // 6 line
    printf("\t\t\t\t\t           %c%c",219,219);
    Color(6);
    printf("%c",176);
    Color(6);
    printf("%c%c%c%c%c%c%c%c%c%c", 178,178,178,178,178,178,178,178,178,178);
    Color(6);
    printf("%c",176);
    Color(6);
    printf("%c%c", 178,178);
    Color(8);
    printf("%c%c", 219,219);
    Color(14);
    printf("%c\n",178); // 7 line
    Color(8);
    printf("\t\t\t\t\t        %c",219);
    Color(14);
    printf("%c%c%c",178,178,178);
    Color(6);
    printf("%c",176);
    printf("%c",178);
    printf("%c",176);
    printf("%c%c%c%c%c%c%c%c",178,178,178,178,178,178,178,178,178);
    printf("%c",176);
    Color(14);
    printf("%c",178);
    Color(6);
    printf("%c",176);
    Color(6);
    printf("%c", 178);
    Color(6);
    printf("%c",176);
    Color(14);
    printf("%c%c%c", 178,178,178);
    Color(8);
    printf("%c\n",219); // 8 line
    printf("\t\t\t\t\t          %c",219);
    Color(14);
    printf("%c",178);
    Color(8);
    printf("%c",219);
    Color(6);
    printf("%c",176);
    printf("%c%c%c%c%c%c%c%c",178,178,178,178,178,178,178,178);
    Color(8);
    printf("%c",219);
    Color(14);
    printf("%c%c",178,178);
    Color(6);
    printf("%c",176);
    printf("%c",178);
    printf("%c",176);
    Color(14);
    printf("%c",178);
    Color(8);
    printf("%c\n",219); // 9 line
    Color(1);
    printf("\t\t\t\t\t          %c",219);
    Color(8);
    printf("%c",219);
    Color(6);
    printf("%c",178);
    Color(8);
    printf("%c",219);
    Color(6);
    printf("%c%c%c%c%c%c",178,178,178,178,178,178);
    printf("%c",176);
    Color(8);
    printf("%c",219);
    Color(14);
    printf("%c%c%c%c",178,178,178,178);
    Color(8);
    printf("%c",219);
    Color(6);
    printf("%c",178);
    Color(8);
    printf("%c",219);
    Color(1);
    printf("%c\n",219); // 10 line
    Color(8);
    printf("\t\t\t\t\t           %c",219);
    Color(6);
    printf("%c",178); 
    printf("%c",176);
    Color(8);
    printf("%c",219);
    Color(6);
    printf("%c",176);
    Color(14);
    printf("%c%c%c%c%c%c%c",178,178,178,178,178,178,178);
    printf("%c",176);
    Color(6);
    printf("%c%c%c",176,176,176);
    Color(6);
    printf("%c",178);
    Color(8);
    printf("%c\n",219); // 11 line
    printf("\t\t\t\t\t           %c",219);
    Color(8);
    printf("%c",219);
    Color(14);
    printf("%c%c",178,178);
    Color(15);
    printf("%c",219);
    Color(2);
    printf("%c",219);
    Color(6);
    printf("%c",176);
    Color(14);
    printf("%c%c%c%c",178,178,178,178);
    Color(6);
    printf("%c",176);
    Color(2);
    printf("%c",219);
    Color(15);
    printf("%c",219);
    Color(8);
    printf("%c",219);
    Color(6);
    printf("%c",178);
    Color(8);
    printf("%c\n",219); // 12 line
    printf("\t\t\t\t\t            %c%c",219,219);
    Color(14);
    printf("%c",178);
    Color(15);
    printf("%c",219);
    Color(2);
    printf("%c",219); 
    Color(14);
    printf("%c%c%c%c%c%c",178,178,178,178,178,178);
    Color(2);
    printf("%c",219);
    Color(15);
    printf("%c",219);
    Color(14);
    printf("%c",178);
    Color(8);
    printf("%c\n",219); // 13 line
    printf("\t\t\t\t\t             %c", 219);
    Color(6);
    printf("%c",176);
    Color(14);
    printf("%c%c%c%c%c%c%c%c%c", 178,178,178,178,178,178,178,178,178);
    Color(6);
    printf("%c",176);
    Color(8);
    printf("%c\n",219); // 14 line
    printf("\t\t\t\t\t            %c", 219);
    Color(2);
    printf("%c",178);
    Color(8);
    printf("%c%c",219,219);
    Color(14);
    printf("%c%c%c%c%c%c%c", 178,178,178,178,178,178,178);
    Color(8);
    printf("%c%c",219,219);
    Color(2);
    printf("%c",178);
    Color(8);
    printf("%c\n",219); // 15 line
    printf("\t\t\t\t\t           %c", 219);
    Color(2);
    printf("%c%c",178,178);
    Color(10);
    printf("%c%c%c%c%c%c%c%c%c%c%c", 177,177,177,177,177,177,177,177,177,177,177);
    Color(2);
    printf("%c%c",178,178);
    Color(8);
    printf("%c\n",219); // 16 line
    printf("\t\t\t\t\t          %c", 219);
    Color(14);
    printf("%c%c",178,178);
    Color(8);
    printf("%c%c",219,219);
    Color(10);
    printf("%c%c%c%c%c%c%c%c%c",177,177,177,177,177,177,177,177,177);
    Color(8);
    printf("%c%c",219,219);
    Color(14);
    printf("%c%c",178,178);
    Color(8);
    printf("%c\n",219); // 17 line
    printf("\t\t\t\t\t          %c", 219);
    Color(14);
    printf("%c%c",178,178);
    Color(10);
    printf("%c",177);
    Color(2);
    printf("%c",178);
    Color(8);
    printf("%c%c%c",219,219,219);
    Color(6);
    printf("%c%c%c",178,178,178);
    Color(8);
    printf("%c%c%c",219,219,219);
    Color(2);
    printf("%c",178);
    Color(10);
    printf("%c", 177);
    Color(14);
    printf("%c%c",178,178);
    Color(8);
    printf("%c\n",219); //18 line
    printf("\t\t\t\t\t           %c%c%c", 219,219,219);
    Color(2);
    printf("%c%c",178,178);
    Color(10);
    printf("%c%c",177,177);
    Color(6);
    printf("%c%c%c", 178,178,178);
    Color(10);
    printf("%c%c",177,177);
    Color(2);
    printf("%c%c",178,178);
    Color(8);
    printf("%c%c%c\n",219,219,219); // 19 line
    printf("\t\t\t\t\t             %c%c", 219,219);
    Color(10);
    printf("%c",177);
    Color(2);
    printf("%c%c%c%c%c%c%c",178,178,178,178,178,178,178);
    Color(10);
    printf("%c", 177);
    Color(8);
    printf("%c%c\n",219,219); // 20 line
    printf("\t\t\t\t\t            %c", 219);
    Color(6);
    printf("%c%c%c",176,176,176);
    Color(8);
    printf("%c%c%c%c%c%c%c",219,219,223,223,223,219,219);
    Color(6);
    printf("%c%c%c",176,176,176);
    Color(8);
    printf("%c\n",219); // 21 line
    printf("\t\t\t\t\t            %c", 219);
    Color(6);
    printf("%c%c%c%c",176,176,176,176);
    Color(8);
    printf("%c   %c",219,219);
    Color(6);
    printf("%c%c%c%c",176,176,176,176);
    Color(8);
    printf("%c\n",219); // 22 line
    printf("\t\t\t\t\t             %c%c%c%c", 223,223,223,223);
    printf("     %c%c%c%c\n\n",223,223,223,223); // 23 line
    Color(15);
}
