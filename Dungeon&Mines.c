#include "functions.h"

int main ()
{
    Presentation();
    Introductory_lore();
    int nivel = 0;
    while(1)
    {
    	system("cls");
        nivel = Main_menu();

    	switch(nivel)
        {
            case 1:
                system("cls");
                Dungeon1_lore();
                dungeon_1();
                Treasure_Dungeon1();
                break;
            case 2:
                system("cls");
                Dungeon2_lore();
                dungeon_2();
                Treasure_Dungeon2();
                break;
                break;
            case 3:
                system("cls");
                Dungeon3_lore();
                dungeon_3();
                Treasure_Dungeon3();
                break;
            default:
                system("cls");
                Final_lore();
                exit(-1);
	    }
	}
}