/*--------------------------------------------------------------------------------------------------------| 
|                                                                                                         |
|  Authors :   Maxtrui and Kotonitro                                                                      |
|  Date    :   27th Agoust 2022                                                                           |
|  Header  :   History and writing of the game 									                          |
|                                                                                                         |
|--------------------------------------------------------------------------------------------------------*/

/*---------------------------------------- includes librarys --------------------------------------------*/
#include <stdio.h>                                                                                       //
#include <stdlib.h>                                                                                      //
/*-------------------------------------------------------------------------------------------------------*/


// § = 245 | Life Inequity Spear (Reference: Pursuit of the Truth)
// ┼ = 197 | End of Wills Sword (Reference: Pursuit of the Truth)
// ¤ = 207 | Soul Gourd (Reference: Xian Ni)
// █ = 219 | Purple Coffin/Ancient God Leather Armor (Reference: Xian Ni/Emperor's Domination)

/*Purple coffin = This was a wooden coffin that was not eye-catching at all. It was around 
the size of small cabinet and was of a purple color. Despite its humble size, it was a delicate 
work of art. Runes were carved atop of it, but rather than being hand-carved, they felt natural 
as if they had always been there. Inside the coffin was a suit of armor. */

/* Ancient God Leather Armor: This armor was very rough and had some natural cracks.
This was in fact a leather armor made from the skin of an ancient god. The armor gave off an 
archaic aura, but underneath that aura was a bloody and sad feeling.*/

/*Soul Gourd = This is a treasure from the ninth ancestor, Luo Yunhai, of the Great Soul Sect.
This treasure was lost approximately 4,000 years ago, and several expeditions and wars took 
place when it was discovered that it was lost.
He gathered 1 billion dao souls within, however and it’s now broken, but it still has 30 million
dao souls inside. 
*/

/*End of Wills Sword = Is seven feet tall cyan wooden sword. It has incredibly strong 
murderous aura. The sword can break all forms of will and essence. It can end all wills and
destroy illusions as well as reality. When it cuts bodies, no blood is shed: It destroys the 
soul directly.
*/

/* Life Inequity Spear = Life Inequity Spear, also known as Life Inclination, was the purplish 
black long spear, it flies with a sound akin to a woman's forlorn wail. It belonged to War 
Immortal Chang He. When the spear left Chang He's hands it went through countless wars for its 
possession, after each battle only the blood-soaked spear remained, absorbing all the power of 
the withered bodies.
*/

void Monologue_start()
{
    printf(" > He came to look for trouble and unleashed this battle that I cannot win... I\'ve to go and clear the 3 ");
    printf("great dungeons in search of treasures to protect my family and my beloved... I hope I\'m lucky, I don\'t want to lose"); 
    printf("them...\n\n");
}

void Monologue_end()
{
    printf(" > The only sorrow that goes through my heart is the fear of losing them... I hope this expedition will be ");
    printf("enough to have you by my side...\n\n"); 
}

void Monologue_Dungeon1()
{
    printf(" > Hmm this is the famous Black Ink dungeon.... It feels a lonely atmosphere, plus it\'s ");
    printf("all damp and dark....\n\n"); 
}

void Monologue_Dungeon2()
{
    printf(" > Divine Essence Star Ocean dungeon... I feel as if my will is going to break at any moment. But I won\'t ");
    printf("give up, I have to go in to protect all of you.\n\n"); 
}

void Monologue_Dungeon3()
{
    printf(" > Since I entered the dungeon Emperor of Abyss I feel that my soul is about to crumble.... Surely there ");
    printf("is something that will help me here.\n\n"); 
}


void Purple_coffin()
{
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 
    201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,
    205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("\t%c                           The hero found Purple coffin                                  %c\n", 186,186);
    printf("\t%c                                                                                         %c\n", 186,186);
    printf("\t%c This was a wooden coffin that was not eye-catching at all. It was around the size       %c\n", 186,186);
    printf("\t%c of small cabinet and was of a purple color. Despite its humble size, it was a delicate  %c\n", 186,186); 
    printf("\t%c work of art. Runes were carved atop of it, but rather than being hand-carved, they felt %c\n", 186,186); 
    printf("\t%c natural as if they had always been there. Inside the coffin was a suit of armor.        %c\n", 186,186);
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 
    200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,
    205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 
    201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,
    205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("\t%c                       Inside was the Ancient God Leather Armor                          %c\n", 186,186);
    printf("\t%c                                                                                         %c\n", 186,186);
    printf("\t%c This armor was very rough and had some natural cracks.                                  %c\n", 186,186);
    printf("\t%c This was in fact a leather armor made from the skin of an ancient god. The armor gave   %c\n", 186,186);
    printf("\t%c off an archaic aura, but underneath that aura was a bloody and sad feeling.             %c\n", 186,186);
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 
    200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,
    205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
}

void End_of_Wills_Sword()
{
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 
    201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,
    205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("\t%c                         The hero found End of Wills Sword                               %c\n", 186,186);
    printf("\t%c                                                                                         %c\n", 186,186);
    printf("\t%c Is seven feet tall cyan wooden sword. It has incredibly strong murderous aura.          %c\n", 186,186);
    printf("\t%c The sword can break all forms of will and essence. It can end all wills and destroy     %c\n", 186,186); 
    printf("\t%c illusions as well as reality. When it cuts bodies, no blood is shed: It destroys the    %c\n", 186,186); 
    printf("\t%c soul directly.                                                                          %c\n", 186,186);
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 
    200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,
    205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
}

void Soul_Gourd()
{
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 
    201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,
    205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("\t%c                            The hero found Soul Gourd                                    %c\n", 186,186);
    printf("\t%c                                                                                         %c\n", 186,186);
    printf("\t%c This is a treasure from the ninth ancestor, Luo Yunhai, of the Great Soul Sect.         %c\n", 186,186);
    printf("\t%c This treasure was lost approximately 4,000 years ago, and several expeditions and wars  %c\n", 186,186); 
    printf("\t%c took place when it was discovered that it was lost.                                     %c\n", 186,186); 
    printf("\t%c He gathered 1 billion dao souls within, however and it\'s now broken, but it still has   %c\n", 186,186);
    printf("\t%c 30 million dao souls inside.                                                            %c\n", 186,186);
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 
    200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,
    205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
}