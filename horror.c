#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


int main()
{
//all variables are global variables so I can reference them anywhere in the program.
        //In the beginning I was having problems calling variables and that was because I made them local variables
        //and housed some of them on accident in their respective if conditionals or while loops
//understanding how to include an or in if statements https://stackoverflow.com/questions/44830259/can-you-have-two-conditions-in-an-if-statement
//https://www.cprogramming.com/tutorial/c/lesson2.html
//https://www.tutorialspoint.com/cprogramming/if_else_statement_in_c.htm
//https://linux.die.net/man/3/sleep
//https://www.programiz.com/c-programming/c-if-else-statement
//https://stackoverflow.com/questions/33613001/while-loop-with-nested-if-statements-c
//https://www.tutorialspoint.com/cprogramming/c_while_loop.htm
//https://www.unix.com/programming/134598-changing-text-color-c.html

//introduction
        printf("\n\nTip for this game. Avoid inputting '3' in order for the story to continue regularly. Thank you.\n");
        sleep(3);
        printf ("\n\n\033[22;31mWelcome to the tour stranger.\n");
        sleep(1);
        printf("\nPlease enter your first name. \n");
        char name[10];
        scanf("%s", name);
        //printf("\nInstructions for your tour: follow prompts or press 1 for yes and 0 for no.\n");
        //sleep(3);
        printf("\n\nAre you ready to play %s? Input '1' for yes or '2' for no.\n", name);
        int start;
        scanf("%i", &start);
                if (start == 1)
                        {
                        printf("\n\nloading the tour.\n");
                        sleep(1);
                        printf("...\n");
                        sleep(1);
                        printf("...\n");
                        sleep(1);
                        printf("Nightmare Loaded... Enjoy your tour.\n\n\n");
                        sleep(2);
                        }
                else
                {
                        printf("\nThat's too bad....\n Its time to play..\n\n");
                        sleep(2);
                }

//scene1
                printf("\033[01;31m 'This is the final room of our tour: our old lab!' You smell old printer ink and mold. There are papers littering the floor. As the tour guide continues to drone on you can hear a thumping noise behind one of the bookshelves. 'You'll have 2 minutes in this room and then our tour will conclude. Then I can GUIDE you to the gift shop!' ...But beware. Every year on the night of \n");

                system("date | cut -c 5-10");
                printf("there is an outbreak of the infection contained in this lab... and non survive...' She glances around the room in fear and adds in a chipper voice 'But you'll be fine as long as you remain with the group!' ");
                //system("date | cut -c 5-10");
                printf("Her too- white grin received a round of applause and the group disperses around the room.\n\n");
                printf("To study the noise input '1'. To look at the computer desk input '2'\n");
                int first;
                scanf("%i", &first);
                int NOISE = 0;
                int PAPER = 0;

                while (first != 3)
                {
                if (first == 1)
                {NOISE = NOISE + 1;first = first + 2;}
                if (first == 2)
                {PAPER = PAPER + 1;first = first + 1;}
                if (first != 3 || first > 3)
                {printf("\nIncorrect Input! To study the noise input '1'. To look at the compoter desk input '2'\n");scanf("%i", &first);}
                }

//if NOISE
                int RABBIT = 0;
                if (NOISE == 1){
                printf("\nYou move to the noise you heard behind the bookshelf. The banging is rythmic and constant. No one else is looking as you push the shelf aside. You see a rabit's tail jumping up and down. As you bend over to help the poor creature the bunny turns and reveals the rest of its body... or lack thereof. The rabbit doesnt have a head... yet it continues to jump.\n");
                RABBIT = RABBIT + 1;
                sleep(2);
                printf("\nYou return the bookshelf to its original spot.\n\n");
                }

//if PAPER

                int PRINTER = 0;
                int one, two, three, four;
                if (PAPER == 1)
                {
/*random numbers*/
                int spins = 1;
                int i;
                while(spins>0)
                {
                        int count = 1;
                        srand(time(0));
                        for (i=0;i<count;i++)
                        {
                                one = rand() % 10;
                                two = rand() % 10;
                                three = rand() % 10;
                                four = rand() %10;
                                //printf("\n%d%d%d%d\n", one,two,three,four);
                        }
                spins --;
                }

                printf("\nYou walk over to a printer and you notice a paper sitting in the output tray. you pick up the paper and it reads: 'Virus outbreak %d%d%d%db cannot be contained... evacuation effective immediatly.'\n", one, two, three, four);
                sleep(2);
                printf("\nYou place the paper in you pocket and wonder what %d%d%d%db could mean...\n\n", one, two, three, four);
                PRINTER = PRINTER + 1;
                }

//scene2
                int LAB2 = 0;
                int HALLWAY = 0;
                if (PRINTER == 1 || RABBIT == 1)
                {
                printf("\nYou hear a door click behind you and you turn around... There is no one in the room. You run to the door and bang but there is no handle on this side and the knocks sound hollow. No one hears you...\n");
                sleep(2);
                printf("\nYou turn and look for another way out and see a hallway past a curtian of plastic.\n");
                sleep(1);
                printf("\nTo remain in the lab input '1'. To explore the hallway input '2'\n");
                int second;
                scanf("%i", &second);
                while (second != 3){
                        if (second == 1){LAB2 = LAB2 + 1;second = second + 2;}
                        if (second == 2){HALLWAY = HALLWAY + 1;second = second + 1;}
                        if (second != 3 || second > 3){printf("\nIncorrect Input! To remain in the lab input '1'. To explore the hallway input '2'\n");scanf("%i", &second);}
                }
                }

//if LAB2

               if (LAB2 == 1)
               {
                printf("\n\nYou walk towards the curtian but think better of it. Just before you turn around to find another way out you see one of the plastic strips move. It must have been the wind you tell yourself... You move towards the door and see a keypad and a fingerprint scanner. You try several codes and all your fingers before the pad flashes red and begins beeping. You begin to bang again. The beeping stopped but it's still not budging.\n");
                printf("\nTheres only one way out...\n");
                printf("\nTo explore the hallway input '1'\n\n");
                int eleventh;
                scanf("%i", &eleventh);
                while (eleventh != 2){
                if (eleventh == 1){
                        HALLWAY = HALLWAY + 1;
                        eleventh = eleventh + 1;
                }
                if (eleventh != 2){
                        eleventh = 0;
                        printf("\nTo explore the hallway input '1'\n\n");
                        scanf("%i", &eleventh);
                }
                }
               }
//if HALLWAY
                int MAN = 0;
               if (HALLWAY == 1)
               {
                 printf("\nYou push past the plastic sheets and feel that its slimy and wet. You walk down the hallway and you can see that the walls are slick with a sticky goo that has a pale green tint. The printer ink smell vanishes and is replaced with the sharp smell of decay. Its been a long time since anyone cleaned down here... You hear shuffling behind you and turn back towards the lab. You see a shadow near the far wall that seems out of place. 'Is anyone there' you shout.\n");
                 sleep(2);
                 printf("\n'Hello! Hey, how are ya? Its been a while since I've seen anyone here at night!' The shadow steps out into the light of the dim flurecents and you are releived to see a normal man. He reaches out to shake your hand and you notice deep green sploches on his arms. When you don't return the gesture he becomes restless and fidgets with impatience.\n");
                printf("\n'What's wrong stranger... ah let's see...' he looks at your tour pass. 'AH! %s! You look like you've got something on your mind.'\n", name);
                MAN = MAN + 1;
               }
//questions
//if MAN and PRINTER
                int PASK = 0;
                int NONE = 0;
               if (MAN == 1 && PRINTER == 1)
               {
                       printf("\nAsk about the number printed on your paper: input '1'. Say nothing: input '2'\n");
                       int third;
                       scanf("%i", &third);
                       while (third != 3){
                               if (third == 1){PASK = PASK + 1;third = third + 2;}
                               if (third == 2){NONE = NONE + 1;third = third + 1;}
                               if (third != 3 || third > 3){printf("\nAsk about the number printed on your paper: input '1'. Say nothing: input '2'\n");scanf("%i", &third);}
                                        }
               }
//if MAN and RABBIT
                 int RASK = 0;
                 if (MAN == 1 && RABBIT == 1){
                         printf("\nAsk about the rabbit you saw: input '1'. Say nothing: input '2'\n");
                int fourth;
                scanf("%i", &fourth);
                while (fourth != 3){
                        if (fourth == 1){RASK = RASK + 1;fourth = fourth + 2;}
                        if (fourth == 2){NONE = NONE + 1;fourth = fourth + 1;}
                        if (fourth != 3 || fourth > 3){printf("\nAsk about the rabbit you saw: input '1'. Say nothing: input '2'\n");scanf("%i", &fourth);}
                                }
                                                }
//if PASK
                if (PASK == 1)
                {
                        printf("\n'Do you have any idea what %d%d%d%db means? I saw it on my way in but I don't know anything about the research that was done here.' You decide not to tell him about the evacuation notice that you also saw. His face falls 'Ah. I don't know what you mean. If I did I would surely tell you! You can trust me %s... I promise!\n\n", one,two, three, four, name);
                }

//if RASK
                if (RASK == 1)
                {
                        printf("\n'Do you have any idea if they used animals in the testing here? I though saw it on a plack on the way in but I don't know anything about the research they did.' You decide not to tell him real reason you are asking about animal testing: the fact that you saw an actual 'animal' in the lab. The man's face falls, 'Ah I don't know what you mean. If I did I would surely tell you! You can trust me %s... I promise!'\n\n", name);
                }

// if NONE
                if (NONE == 1)
                {
                        printf("\nYou decide to give him the silent treatment. You have no idea who he is after all. 'Ok. Don't answer me! I'm just trying to be nice!' he gets closer and begins shouting in your face. You are too afraid to step back. 'ITS NOT LIKE I'VE BEEN SITTING HERE WAITING FOR SOMEONE TO TALK TO FOR THE PAST FIF--....', he pauses and takes a breath. 'Sorry about that. Let's pretend that never happened.'\n\n");
                }

//if ASK and MAN
                int FOLLOW = 0;
                int RETURN = 0;
                if (MAN == 1 && PASK == 1 || MAN ==1 && RASK == 1)
                {
                printf("\n'If you would kindly follow me I can show you into the dining hall where the rest fo my friends will be.' He begins to walk away from the lab and you hesitate before making a choice.\n");
                printf("To follow the man to the dining hall input '1'. To return to the lab while his back is turned input '2'\n");
                int fifth;
                scanf("%i", &fifth);
                while (fifth != 3){
                        if (fifth == 1){FOLLOW = FOLLOW + 1;fifth = fifth + 2;}
                        if (fifth == 2){RETURN = RETURN + 1;fifth = fifth + 1;}
                        if (fifth != 3 || fifth > 3){printf("\nIncorrect Input! To follow the man to the dining hall input '1'. To return to the lab while his back is turned input '2'\n");scanf("%i", &fifth);}}
                }

//if NONE and MAN
                if (MAN == 1 && NONE == 1){
                        printf("\n'If you would kindly follow me I can show you into the dining hall where the rest fo my friends will be.' He begins to walk away from the lab and you hesitate before making a choice.\n");
                        printf("To follow the man to the dining hall input '1'.");
                        int ninth;
                        scanf("%i", &ninth);
                        while (ninth != 3){
                                if (ninth == 1){FOLLOW = FOLLOW + 1;ninth = ninth + 2;}
                                if (ninth != 3 || ninth > 3){printf("\nIncorrect Input! To follow the man to the dining hall input '1'.\n");scanf("%i", &ninth);}
                        }
                                        }

//if FOLLOW and notRABBIT
                int STEW = 0;
                int EATEND = 0;
                if (FOLLOW == 1 && RABBIT == 0){
                printf("\nYou follow the man and the narrow hallway opens into a high ceiling cafeteria. You see at least a dozen people meandering about. They all seem like they are simply wandering with no clear desitnation. 'Won't you have some stew? The cook has been dying for someone to test it.' You are lead towards a massive pot on the counter and you glance inside. The soup looks congealed and lukewarm with puddles of fat pooled into several pockets. You step back just before the smell overwhelms you. 'Oh! It's only rabbit stew. That's a delicacy in many countries! Come on %s... a night in France! Bon Appitite!' He had fixed you a bowl of the gelitan like stew and was pushing it in your direction.\n", name);
                printf("\nWill you eat the stew?\n");
                sleep(1);
                printf("Press '1' for yes.");
                scanf("%i", &STEW);
                while (STEW != 2){
                if (STEW == 1){
                STEW = STEW + 1;
                EATEND = EATEND + 1;
                }
                if (STEW != 2 || STEW > 2){
                printf("Press '1' for yes.");
                scanf("%i", &STEW);
                }
                }
                }

//for FOLLOW and RABBIT
                int RUN = 0;
                int STEW2 = 0;
                if (FOLLOW == 1 && RABBIT == 1){
                printf("\nYou follow the man and the narrow hallway opens into a high ceiling cafeteria. You see at least a dozen people meandering about. They all seem like they are simply wandering with no clear desitnation. 'Won't you have some stew? The cook has been dying for someone to test it.' You are lead towards a massive pot on the counter and you glance inside. The soup looks congealed and lukewarm with puddles of fat pooled into several pockets. You step back just before the smell overwhelms you. 'Oh! It's only rabbit stew. That's a delicacy in many countries! Come on %s... a night in France! Bon Appitite!' He had fixed you a bowl of the gelitan like stew and was pushing it in your direction.\n", name);
                printf("\nWill you eat the stew?\n");
                sleep(1);
                printf("Input '1' for yes. Input '2' to run back to the lab as fast as your feet can take you");
                scanf("%i", &STEW2);
                while (STEW2 != 3){
                        if (STEW2 == 1){
                        STEW2 = STEW2 + 2;
                        EATEND = EATEND + 1; }
                        if (STEW2 == 2){
                        RUN = RUN + 1;
                        STEW2 = STEW2 + 1;}
                        if (STEW2 != 3 || STEW2 > 3){printf("Press '1' for yes. Press '2' to run.");
                        STEW2 = STEW2;
                        scanf("%i", &STEW2);
                        }
                                }
                }

//if RUN same as RETURN but needs pre- write to make sense
                if (RUN == 1)
                {
                        printf("\n You decide the man is NOT to be trusted and turn heel and run as fast as you can through the cafe. All the 'people' at the tables turn to stare at you. No one moves except the man you were talking to and he is gaining on you fast. You jump on top of a table and cups clatter to the floor.");
                }

//if RUN OR RETURN
                int SHELF = 0;
                int DOOR = 0;
                int DESKEND = 0;
                int DESK = 0;
                if (RUN == 1 || RETURN == 1){
                printf("\nYou run as fast as you can. You are about to reach the lab and you can hear the man screaming your name behind you 'YOU CAN'T LEAVE' he yells at your back 'YOU CAN NEVER LEAVE!' You reach the lab and the same closed door, bookshelf and computer desk you saw before.\n\n");
                printf("To hide behind the bookshelf input '1'. To try to open the door press '2'. To hide behind the computer desk '3'.\n");
                int sixth;
                scanf("%i", &sixth);
                while (sixth != 4){
                        if (sixth == 1){SHELF = SHELF + 1;sixth = sixth + 3;}
                        if (sixth == 2){DOOR = DOOR + 1;sixth = sixth + 2;}
                        if (sixth == 3){DESK = DESK + 1; sixth = sixth + 1;}
                        if (sixth != 4 || sixth > 4){printf("\nIncorrect Input! To hide behind the bookshelf input '1'. To try to open the door press '2'. To hide behind the computer desk '3'.\n");scanf("%i", &sixth);}
                }}

//if EATEND
        if (EATEND == 1){
        printf("\nThe stew takes even worse than it looks. The broth is slimy and there is not one vegtable. You bite into a peice of rabbit and are taken aback by the taste. It tastes rancid. It tastes rotting. It tastes like this whole place smells. Your hands begin to shake and you can't keep a grip on the bowl. As you hear it shatter on the floor you skin begins burning and the shivers continue. You look to your body as the edges of your vision begin to blur. 'Whats happening?' You plead as you see green sploches apear and bumps begin to form and burst. 'Don't worry' says the man with a smile. 'Its happened to all of us.'\n\n");
        }

// if DESKEND
         if (DESK == 1){
                printf("\nYou hide behind the computer desk. You can hear the man stalking around in front of you. You shake and keep quiet for as long as possible. He paces and paces. If you can remain quiet you can wait until moring and the 'clearer' comes...\n");
                sleep(5);
                printf("\nHe continues to pace.\n");
                sleep(3);
                printf("You can see him begin to get tired and ... all of a sudden you hear the keypad ringing on the other side of the door. The man gasps and runs through the hallway. The door opens and you can see a man in a janitor's outfit step in. You are safe.\n\n");
        DESKEND = DESKEND + 1;
         }

//if SHELF AND RABBIT
        int HUMANITYEND = 0;
        int RSHELFEND = 0;
        if (SHELF == 1 && RABBIT == 1){
                printf("\nYou run behind the shelf and keep as quiet as possible. The thumping starts up again and you look down to your feet. You see a rabit jumping around but you can't see its face. He jumps on your leg and scratches his claws the whole way back down. You see blood cropping up on the fabric of your pants and the burning begins. The rabbit scurries under the shelf and you are left with several cuts. You hide behind the shelf and nurse you wounds and wait for the 'clearer' to arrive. Hours pass and you the door open and the man haunting you retreats to the hallway. You see green sploches form on your arm. This is not normal. Do you save yourself and run away or do you contain the disease and sacrifice yourself?\n\n");
        printf("To save yourself input '1'. To contain it input '2'\n");
        int seventh;
        scanf("%i", &seventh);
        while (seventh != 3){
                if (seventh == 1){RSHELFEND = RSHELFEND + 1;seventh = seventh + 2;}
                if (seventh == 2){HUMANITYEND = HUMANITYEND + 1;seventh = seventh + 1;}
                if (seventh != 3 || seventh > 3){printf("\nIncorrect Input! To save yourself input '1'. To contain it input '2'\n");scanf("%i", &seventh);}
                                }
        }

//if HUMANITYEND
        if (HUMANITYEND == 1){
                printf("\n You jump out from behind the bookshelf. The clearer jumps back and yells 'NOT AGAIN!' You run to the cafe and join the other people there. You join the other infected. The clearer never follows you down the hallway that day... And no one else has for the next 600 years.\n\n");
        }

//if RSHELFEND
        if (RSHELFEND == 1){
                printf("\n You run to the door and enter the world as you leg begins to burn even more than before. You see green sploches on your arm begin to grow bigger. You roll you sleves down. At least you are free... \n\n");
        }

//if SHELF AND NO RABBIT
        int PSHELFEND = 0;
        if (SHELF == 1 && RABBIT == 0){
                printf("\n You run behind the shelf and keep as quiet as possible. The thumping starts up again and you look down to your feet. You see a rabit jumping around but you can't see its face. He jumps on your leg and scratches his claws the whole way back down. You see blood cropping up on the fabric of your pants and the burning begins. The rabbit scurries under the shelf and you are left with several cuts. You hide behind the shelf and nurse you wounds and wait for the 'clearer' to arrive. Hours pass and you the door open and the man haunting you retreats to the hallway. You run to the door and enter the world as you leg begins to burn even more than before. You see green sploches on your arm begin to form and you roll you sleves down. At least you are free... \n\n");
        PSHELFEND = PSHELFEND + 1;
        }

//if DOOR
        if (DOOR == 1){
        printf("\nYou run to the door and bang once more. There is still no reply. You notice the keypad next to the door and feel your heart swell with hope...\n\n");
        }

//if DOOR and no PRINTER
                int DOOREND = 0;
                int PDOOREND = 0;
                if (DOOR == 1 && PRINTER == 0){
                printf("\nbut you don't have the code... You bang and bang some more. You hope the 'clearer' comes soon and can hear you but the man comes from the hallway with a terrifying look on his face. 'Ah.' he says, 'No one ever leaves.' He walks towards you and you can smell his rotten breath. He raises one hand and tells you 'I didn't want to have to do this the hard way...' He brings his hand down and scratches four long lines down your arm. The wounds begin to burn immediatly and you see green ooze seeping from them. You other arm begins to develop green splotches and you start to shake. You fall to your knees and you hear him in the edge of your consciousness 'Don't worry. You'll get used to it... you'll be here for a long time..........\n\n");
                DOOREND = DOOREND + 1;
                }

//if DOOR and PRINTER
                if (DOOR == 1 && PRINTER == 1){
                printf("\nyou know a code! You try to enter the virus code that was on the slip of paper you found on the printer... if you could only remmeber what it said...\n\n");
                printf("Enter the virus code that was on the slip. You have three tries.");
                int eigth;
                int number = 0;
                int code;
                int none = 0;
                int scancode;
                code = (one*1000)+(two*100)+(three*10)+(four);
                scanf("%i", &scancode);
                while (eigth < 4){
                        if (scancode == code){number = number + 1;eigth = eigth + 4;}
                        if (scancode != code){eigth = eigth + 1;}
                                none = eigth - 3;
                        if (number != 1){printf("\nIncorrect Input! You have %i tries left\n", none);scanf("%i", &scancode);}
                }
                if (number == 1){
                printf("\nYou can hear the man shouting behind you as the door pops open. You see the moonlight streeming in the windows outside the door. You step into it and slam the door shut as fast as you can.The instant you do there is a thud on the door. You hear benging from the other side as the man despretly tries to get ot you. You finally take a breath and walk away from the lab. You are free. You are finally free.\n\n");
                PDOOREND = PDOOREND + 1;
                }

                if (number == 0){
                printf("\nbut you don't have the code... You bang and bang some more. You hope the 'clearer' comes soon and can hear you but the man comes from the hallway with a terrifying look on his face. 'Ah.' he says, 'No one ever leaves.' He walks towards you and you can smell his rotten breath. He raises one hand and tells you 'I didn't want to have to do this the hard way...' He brings his hand down and scratches four long lines down your arm. The wounds begin to burn immediatly and you see greenooze seeping from them. You other arm begins to develop green splotches and you start to shake. You fall to your knees and you hear him in the edge of your consciousness 'Don't worry. You'll get used to it... you'll be here for a long time..........\n\n");
                DOOREND = DOOREND + 1;
                }

                }

printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\nGOOD JOB YOU COMPLETED THE GAME!\n\n");
printf("\n\n\nI will now tell you how you did!\n\n");
sleep (3);
if (DESKEND == 1 || PDOOREND == 1){
printf("\n You are NOT infected. You survived.\n");
}
if (DOOREND == 1 || PSHELFEND == 1 || RSHELFEND == 1 || HUMANITYEND == 1 || EATEND == 1){
printf("\nYou are INFECTED. You will not survive this...\n");
}
if (DESKEND == 1 || DOOREND == 1 || PDOOREND == 1 || HUMANITYEND == 1 || EATEND == 1){
printf("\nYou have NOT infected humanity. The world is safe!\n");
}
if (PSHELFEND == 1 || RSHELFEND == 1){
printf("\nYou have infected humanity. The world falls into chaos.\n");
}

printf("\nGood Job! Thanks for playing. Please play again and try to get another ending!\n");


                return 0;
}
kpurcel2@DESKTOP-VQBBNJO:~$ vim horror.c
kpurcel2@DESKTOP-VQBBNJO:~$ vim horror.c
kpurcel2@DESKTOP-VQBBNJO:~$ cat horror.c
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


int main()
{
//all variables are global variables so I can reference them anywhere in the program.
        //In the beginning I was having problems calling variables and that was because I made them local variables
        //and housed some of them on accident in their respective if conditionals or while loops
//understanding how to include an or in if statements https://stackoverflow.com/questions/44830259/can-you-have-two-conditions-in-an-if-statement
//https://www.cprogramming.com/tutorial/c/lesson2.html
//https://www.tutorialspoint.com/cprogramming/if_else_statement_in_c.htm
//https://linux.die.net/man/3/sleep
//https://www.programiz.com/c-programming/c-if-else-statement
//https://stackoverflow.com/questions/33613001/while-loop-with-nested-if-statements-c
//https://www.tutorialspoint.com/cprogramming/c_while_loop.htm
//https://www.unix.com/programming/134598-changing-text-color-c.html

//introduction
        printf("\n\nTip for this game. Avoid inputting '3' in order for the story to continue regularly. Thank you.\n");
        sleep(3);
        printf ("\n\n\033[22;31mWelcome to the tour stranger.\n");
        sleep(1);
        printf("\nPlease enter your first name. \n");
        char name[10];
        scanf("%s", name);
        //printf("\nInstructions for your tour: follow prompts or press 1 for yes and 0 for no.\n");
        //sleep(3);
        printf("\n\nAre you ready to play %s? Input '1' for yes or '2' for no.\n", name);
        int start;
        scanf("%i", &start);
                if (start == 1)
                        {
                        printf("\n\nloading the tour.\n");
                        sleep(1);
                        printf("...\n");
                        sleep(1);
                        printf("...\n");
                        sleep(1);
                        printf("Nightmare Loaded... Enjoy your tour.\n\n\n");
                        sleep(2);
                        }
                else
                {
                        printf("\nThat's too bad....\n Its time to play..\n\n");
                        sleep(2);
                }

//scene1
                printf("\033[01;31m 'This is the final room of our tour: our old lab!' You smell old printer ink and mold. There are papers littering the floor. As the tour guide continues to drone on you can hear a thumping noise behind one of the bookshelves. 'You'll have 2 minutes in this room and then our tour will conclude. Then I can GUIDE you to the gift shop!' ...But beware. Every year on the night of \n");

                system("date | cut -c 5-10");
                printf("there is an outbreak of the infection contained in this lab... and non survive...' She glances around the room in fear and adds in a chipper voice 'But you'll be fine as long as you remain with the group!' ");
                //system("date | cut -c 5-10");
                printf("Her too- white grin received a round of applause and the group disperses around the room.\n\n");
                printf("To study the noise input '1'. To look at the computer desk input '2'\n");
                int first;
                scanf("%i", &first);
                int NOISE = 0;
                int PAPER = 0;

                while (first != 3)
                {
                if (first == 1)
                {NOISE = NOISE + 1;first = first + 2;}
                if (first == 2)
                {PAPER = PAPER + 1;first = first + 1;}
                if (first != 3 || first > 3)
                {printf("\nIncorrect Input! To study the noise input '1'. To look at the compoter desk input '2'\n");scanf("%i", &first);}
                }

//if NOISE
                int RABBIT = 0;
                if (NOISE == 1){
                printf("\nYou move to the noise you heard behind the bookshelf. The banging is rythmic and constant. No one else is looking as you push the shelf aside. You see a rabit's tail jumping up and down. As you bend over to help the poor creature the bunny turns and reveals the rest of its body... or lack thereof. The rabbit doesnt have a head... yet it continues to jump.\n");
                RABBIT = RABBIT + 1;
                sleep(2);
                printf("\nYou return the bookshelf to its original spot.\n\n");
                }

//if PAPER

                int PRINTER = 0;
                int one, two, three, four;
                if (PAPER == 1)
                {
/*random numbers*/
                int spins = 1;
                int i;
                while(spins>0)
                {
                        int count = 1;
                        srand(time(0));
                        for (i=0;i<count;i++)
                        {
                                one = rand() % 10;
                                two = rand() % 10;
                                three = rand() % 10;
                                four = rand() %10;
                                //printf("\n%d%d%d%d\n", one,two,three,four);
                        }
                spins --;
                }

                printf("\nYou walk over to a printer and you notice a paper sitting in the output tray. you pick up the paper and it reads: 'Virus outbreak %d%d%d%db cannot be contained... evacuation effective immediatly.'\n", one, two, three, four);
                sleep(2);
                printf("\nYou place the paper in you pocket and wonder what %d%d%d%db could mean...\n\n", one, two, three, four);
                PRINTER = PRINTER + 1;
                }

//scene2
                int LAB2 = 0;
                int HALLWAY = 0;
                if (PRINTER == 1 || RABBIT == 1)
                {
                printf("\nYou hear a door click behind you and you turn around... There is no one in the room. You run to the door and bang but there is no handle on this side and the knocks sound hollow. No one hears you...\n");
                sleep(2);
                printf("\nYou turn and look for another way out and see a hallway past a curtian of plastic.\n");
                sleep(1);
                printf("\nTo remain in the lab input '1'. To explore the hallway input '2'\n");
                int second;
                scanf("%i", &second);
                while (second != 3){
                        if (second == 1){LAB2 = LAB2 + 1;second = second + 2;}
                        if (second == 2){HALLWAY = HALLWAY + 1;second = second + 1;}
                        if (second != 3 || second > 3){printf("\nIncorrect Input! To remain in the lab input '1'. To explore the hallway input '2'\n");scanf("%i", &second);}
                }
                }

//if LAB2

               if (LAB2 == 1)
               {
                printf("\n\nYou walk towards the curtian but think better of it. Just before you turn around to find another way out you see one of the plastic strips move. It must have been the wind you tell yourself... You move towards the door and see a keypad and a fingerprint scanner. You try several codes and all your fingers before the pad flashes red and begins beeping. You begin to bang again. The beeping stopped but it's still not budging.\n");
                printf("\nTheres only one way out...\n");
                printf("\nTo explore the hallway input '1'\n\n");
                int eleventh;
                scanf("%i", &eleventh);
                while (eleventh != 2){
                if (eleventh == 1){
                        HALLWAY = HALLWAY + 1;
                        eleventh = eleventh + 1;
                }
                if (eleventh != 2){
                        eleventh = 0;
                        printf("\nTo explore the hallway input '1'\n\n");
                        scanf("%i", &eleventh);
                }
                }
               }
//if HALLWAY
                int MAN = 0;
               if (HALLWAY == 1)
               {
                 printf("\nYou push past the plastic sheets and feel that its slimy and wet. You walk down the hallway and you can see that the walls are slick with a sticky goo that has a pale green tint. The printer ink smell vanishes and is replaced with the sharp smell of decay. Its been a long time since anyone cleaned down here... You hear shuffling behind you and turn back towards the lab. You see a shadow near the far wall that seems out of place. 'Is anyone there' you shout.\n");
                 sleep(2);
                 printf("\n'Hello! Hey, how are ya? Its been a while since I've seen anyone here at night!' The shadow steps out into the light of the dim flurecents and you are releived to see a normal man. He reaches out to shake your hand and you notice deep green sploches on his arms. When you don't return the gesture he becomes restless and fidgets with impatience.\n");
                printf("\n'What's wrong stranger... ah let's see...' he looks at your tour pass. 'AH! %s! You look like you've got something on your mind.'\n", name);
                MAN = MAN + 1;
               }
//questions
//if MAN and PRINTER
                int PASK = 0;
                int NONE = 0;
               if (MAN == 1 && PRINTER == 1)
               {
                       printf("\nAsk about the number printed on your paper: input '1'. Say nothing: input '2'\n");
                       int third;
                       scanf("%i", &third);
                       while (third != 3){
                               if (third == 1){PASK = PASK + 1;third = third + 2;}
                               if (third == 2){NONE = NONE + 1;third = third + 1;}
                               if (third != 3 || third > 3){printf("\nAsk about the number printed on your paper: input '1'. Say nothing: input '2'\n");scanf("%i", &third);}
                                        }
               }
//if MAN and RABBIT
                 int RASK = 0;
                 if (MAN == 1 && RABBIT == 1){
                         printf("\nAsk about the rabbit you saw: input '1'. Say nothing: input '2'\n");
                int fourth;
                scanf("%i", &fourth);
                while (fourth != 3){
                        if (fourth == 1){RASK = RASK + 1;fourth = fourth + 2;}
                        if (fourth == 2){NONE = NONE + 1;fourth = fourth + 1;}
                        if (fourth != 3 || fourth > 3){printf("\nAsk about the rabbit you saw: input '1'. Say nothing: input '2'\n");scanf("%i", &fourth);}
                                }
                                                }
//if PASK
                if (PASK == 1)
                {
                        printf("\n'Do you have any idea what %d%d%d%db means? I saw it on my way in but I don't know anything about the research that was done here.' You decide not to tell him about the evacuation notice that you also saw. His face falls 'Ah. I don't know what you mean. If I did I would surely tell you! You can trust me %s... I promise!\n\n", one,two, three, four, name);
                }

//if RASK
                if (RASK == 1)
                {
                        printf("\n'Do you have any idea if they used animals in the testing here? I though saw it on a plack on the way in but I don't know anything about the research they did.' You decide not to tell him real reason you are asking about animal testing: the fact that you saw an actual 'animal' in the lab. The man's face falls, 'Ah I don't know what you mean. If I did I would surely tell you! You can trust me %s... I promise!'\n\n", name);
                }

// if NONE
                if (NONE == 1)
                {
                        printf("\nYou decide to give him the silent treatment. You have no idea who he is after all. 'Ok. Don't answer me! I'm just trying to be nice!' he gets closer and begins shouting in your face. You are too afraid to step back. 'ITS NOT LIKE I'VE BEEN SITTING HERE WAITING FOR SOMEONE TO TALK TO FOR THE PAST FIF--....', he pauses and takes a breath. 'Sorry about that. Let's pretend that never happened.'\n\n");
                }

//if ASK and MAN
                int FOLLOW = 0;
                int RETURN = 0;
                if (MAN == 1 && PASK == 1 || MAN ==1 && RASK == 1)
                {
                printf("\n'If you would kindly follow me I can show you into the dining hall where the rest fo my friends will be.' He begins to walk away from the lab and you hesitate before making a choice.\n");
                printf("To follow the man to the dining hall input '1'. To return to the lab while his back is turned input '2'\n");
                int fifth;
                scanf("%i", &fifth);
                while (fifth != 3){
                        if (fifth == 1){FOLLOW = FOLLOW + 1;fifth = fifth + 2;}
                        if (fifth == 2){RETURN = RETURN + 1;fifth = fifth + 1;}
                        if (fifth != 3 || fifth > 3){printf("\nIncorrect Input! To follow the man to the dining hall input '1'. To return to the lab while his back is turned input '2'\n");scanf("%i", &fifth);}}
                }

//if NONE and MAN
                if (MAN == 1 && NONE == 1){
                        printf("\n'If you would kindly follow me I can show you into the dining hall where the rest fo my friends will be.' He begins to walk away from the lab and you hesitate before making a choice.\n");
                        printf("To follow the man to the dining hall input '1'.");
                        int ninth;
                        scanf("%i", &ninth);
                        while (ninth != 3){
                                if (ninth == 1){FOLLOW = FOLLOW + 1;ninth = ninth + 2;}
                                if (ninth != 3 || ninth > 3){printf("\nIncorrect Input! To follow the man to the dining hall input '1'.\n");scanf("%i", &ninth);}
                        }
                                        }

//if FOLLOW and notRABBIT
                int STEW = 0;
                int EATEND = 0;
                if (FOLLOW == 1 && RABBIT == 0){
                printf("\nYou follow the man and the narrow hallway opens into a high ceiling cafeteria. You see at least a dozen people meandering about. They all seem like they are simply wandering with no clear desitnation. 'Won't you have some stew? The cook has been dying for someone to test it.' You are lead towards a massive pot on the counter and you glance inside. The soup looks congealed and lukewarm with puddles of fat pooled into several pockets. You step back just before the smell overwhelms you. 'Oh! It's only rabbit stew. That's a delicacy in many countries! Come on %s... a night in France! Bon Appitite!' He had fixed you a bowl of the gelitan like stew and was pushing it in your direction.\n", name);
                printf("\nWill you eat the stew?\n");
                sleep(1);
                printf("Press '1' for yes.");
                scanf("%i", &STEW);
                while (STEW != 2){
                if (STEW == 1){
                STEW = STEW + 1;
                EATEND = EATEND + 1;
                }
                if (STEW != 2 || STEW > 2){
                printf("Press '1' for yes.");
                scanf("%i", &STEW);
                }
                }
                }

//for FOLLOW and RABBIT
                int RUN = 0;
                int STEW2 = 0;
                if (FOLLOW == 1 && RABBIT == 1){
                printf("\nYou follow the man and the narrow hallway opens into a high ceiling cafeteria. You see at least a dozen people meandering about. They all seem like they are simply wandering with no clear desitnation. 'Won't you have some stew? The cook has been dying for someone to test it.' You are lead towards a massive pot on the counter and you glance inside. The soup looks congealed and lukewarm with puddles of fat pooled into several pockets. You step back just before the smell overwhelms you. 'Oh! It's only rabbit stew. That's a delicacy in many countries! Come on %s... a night in France! Bon Appitite!' He had fixed you a bowl of the gelitan like stew and was pushing it in your direction.\n", name);
                printf("\nWill you eat the stew?\n");
                sleep(1);
                printf("Input '1' for yes. Input '2' to run back to the lab as fast as your feet can take you");
                scanf("%i", &STEW2);
                while (STEW2 != 3){
                        if (STEW2 == 1){
                        STEW2 = STEW2 + 2;
                        EATEND = EATEND + 1; }
                        if (STEW2 == 2){
                        RUN = RUN + 1;
                        STEW2 = STEW2 + 1;}
                        if (STEW2 != 3 || STEW2 > 3){printf("Press '1' for yes. Press '2' to run.");
                        STEW2 = STEW2;
                        scanf("%i", &STEW2);
                        }
                                }
                }

//if RUN same as RETURN but needs pre- write to make sense
                if (RUN == 1)
                {
                        printf("\n You decide the man is NOT to be trusted and turn heel and run as fast as you can through the cafe. All the 'people' at the tables turn to stare at you. No one moves except the man you were talking to and he is gaining on you fast. You jump on top of a table and cups clatter to the floor.");
                }

//if RUN OR RETURN
                int SHELF = 0;
                int DOOR = 0;
                int DESKEND = 0;
                int DESK = 0;
                if (RUN == 1 || RETURN == 1){
                printf("\nYou run as fast as you can. You are about to reach the lab and you can hear the man screaming your name behind you 'YOU CAN'T LEAVE' he yells at your back 'YOU CAN NEVER LEAVE!' You reach the lab and the same closed door, bookshelf and computer desk you saw before.\n\n");
                printf("To hide behind the bookshelf input '1'. To try to open the door press '2'. To hide behind the computer desk '3'.\n");
                int sixth;
                scanf("%i", &sixth);
                while (sixth != 4){
                        if (sixth == 1){SHELF = SHELF + 1;sixth = sixth + 3;}
                        if (sixth == 2){DOOR = DOOR + 1;sixth = sixth + 2;}
                        if (sixth == 3){DESK = DESK + 1; sixth = sixth + 1;}
                        if (sixth != 4 || sixth > 4){printf("\nIncorrect Input! To hide behind the bookshelf input '1'. To try to open the door press '2'. To hide behind the computer desk '3'.\n");scanf("%i", &sixth);}
                }}

//if EATEND
        if (EATEND == 1){
        printf("\nThe stew takes even worse than it looks. The broth is slimy and there is not one vegtable. You bite into a peice of rabbit and are taken aback by the taste. It tastes rancid. It tastes rotting. It tastes like this whole place smells. Your hands begin to shake and you can't keep a grip on the bowl. As you hear it shatter on the floor you skin begins burning and the shivers continue. You look to your body as the edges of your vision begin to blur. 'Whats happening?' You plead as you see green sploches apear and bumps begin to form and burst. 'Don't worry' says the man with a smile. 'Its happened to all of us.'\n\n");
        }

// if DESKEND
         if (DESK == 1){
                printf("\nYou hide behind the computer desk. You can hear the man stalking around in front of you. You shake and keep quiet for as long as possible. He paces and paces. If you can remain quiet you can wait until moring and the 'clearer' comes...\n");
                sleep(5);
                printf("\nHe continues to pace.\n");
                sleep(3);
                printf("You can see him begin to get tired and ... all of a sudden you hear the keypad ringing on the other side of the door. The man gasps and runs through the hallway. The door opens and you can see a man in a janitor's outfit step in. You are safe.\n\n");
        DESKEND = DESKEND + 1;
         }

//if SHELF AND RABBIT
        int HUMANITYEND = 0;
        int RSHELFEND = 0;
        if (SHELF == 1 && RABBIT == 1){
                printf("\nYou run behind the shelf and keep as quiet as possible. The thumping starts up again and you look down to your feet. You see a rabit jumping around but you can't see its face. He jumps on your leg and scratches his claws the whole way back down. You see blood cropping up on the fabric of your pants and the burning begins. The rabbit scurries under the shelf and you are left with several cuts. You hide behind the shelf and nurse you wounds and wait for the 'clearer' to arrive. Hours pass and you the door open and the man haunting you retreats to the hallway. You see green sploches form on your arm. This is not normal. Do you save yourself and run away or do you contain the disease and sacrifice yourself?\n\n");
        printf("To save yourself input '1'. To contain it input '2'\n");
        int seventh;
        scanf("%i", &seventh);
        while (seventh != 3){
                if (seventh == 1){RSHELFEND = RSHELFEND + 1;seventh = seventh + 2;}
                if (seventh == 2){HUMANITYEND = HUMANITYEND + 1;seventh = seventh + 1;}
                if (seventh != 3 || seventh > 3){printf("\nIncorrect Input! To save yourself input '1'. To contain it input '2'\n");scanf("%i", &seventh);}
                                }
        }

//if HUMANITYEND
        if (HUMANITYEND == 1){
                printf("\n You jump out from behind the bookshelf. The clearer jumps back and yells 'NOT AGAIN!' You run to the cafe and join the other people there. You join the other infected. The clearer never follows you down the hallway that day... And no one else has for the next 600 years.\n\n");
        }

//if RSHELFEND
        if (RSHELFEND == 1){
                printf("\n You run to the door and enter the world as you leg begins to burn even more than before. You see green sploches on your arm begin to grow bigger. You roll you sleves down. At least you are free... \n\n");
        }

//if SHELF AND NO RABBIT
        int PSHELFEND = 0;
        if (SHELF == 1 && RABBIT == 0){
                printf("\n You run behind the shelf and keep as quiet as possible. The thumping starts up again and you look down to your feet. You see a rabit jumping around but you can't see its face. He jumps on your leg and scratches his claws the whole way back down. You see blood cropping up on the fabric of your pants and the burning begins. The rabbit scurries under the shelf and you are left with several cuts. You hide behind the shelf and nurse you wounds and wait for the 'clearer' to arrive. Hours pass and you the door open and the man haunting you retreats to the hallway. You run to the door and enter the world as you leg begins to burn even more than before. You see green sploches on your arm begin to form and you roll you sleves down. At least you are free... \n\n");
        PSHELFEND = PSHELFEND + 1;
        }

//if DOOR
        if (DOOR == 1){
        printf("\nYou run to the door and bang once more. There is still no reply. You notice the keypad next to the door and feel your heart swell with hope...\n\n");
        }

//if DOOR and no PRINTER
                int DOOREND = 0;
                int PDOOREND = 0;
                if (DOOR == 1 && PRINTER == 0){
                printf("\nbut you don't have the code... You bang and bang some more. You hope the 'clearer' comes soon and can hear you but the man comes from the hallway with a terrifying look on his face. 'Ah.' he says, 'No one ever leaves.' He walks towards you and you can smell his rotten breath. He raises one hand and tells you 'I didn't want to have to do this the hard way...' He brings his hand down and scratches four long lines down your arm. The wounds begin to burn immediatly and you see green ooze seeping from them. You other arm begins to develop green splotches and you start to shake. You fall to your knees and you hear him in the edge of your consciousness 'Don't worry. You'll get used to it... you'll be here for a long time..........\n\n");
                DOOREND = DOOREND + 1;
                }

//if DOOR and PRINTER
                if (DOOR == 1 && PRINTER == 1){
                printf("\nyou know a code! You try to enter the virus code that was on the slip of paper you found on the printer... if you could only remmeber what it said...\n\n");
                printf("Enter the virus code that was on the slip. You have three tries.");
                int eigth;
                int number = 0;
                int code;
                int none = 0;
                int scancode;
                code = (one*1000)+(two*100)+(three*10)+(four);
                scanf("%i", &scancode);
                while (eigth < 4){
                        if (scancode == code){number = number + 1;eigth = eigth + 4;}
                        if (scancode != code){eigth = eigth + 1;}
                                none = eigth - 3;
                        if (number != 1){printf("\nIncorrect Input! You have %i tries left\n", none);scanf("%i", &scancode);}
                }
                if (number == 1){
                printf("\nYou can hear the man shouting behind you as the door pops open. You see the moonlight streeming in the windows outside the door. You step into it and slam the door shut as fast as you can.The instant you do there is a thud on the door. You hear benging from the other side as the man despretly tries to get ot you. You finally take a breath and walk away from the lab. You are free. You are finally free.\n\n");
                PDOOREND = PDOOREND + 1;
                }

                if (number == 0){
                printf("\nbut you don't have the code... You bang and bang some more. You hope the 'clearer' comes soon and can hear you but the man comes from the hallway with a terrifying look on his face. 'Ah.' he says, 'No one ever leaves.' He walks towards you and you can smell his rotten breath. He raises one hand and tells you 'I didn't want to have to do this the hard way...' He brings his hand down and scratches four long lines down your arm. The wounds begin to burn immediatly and you see greenooze seeping from them. You other arm begins to develop green splotches and you start to shake. You fall to your knees and you hear him in the edge of your consciousness 'Don't worry. You'll get used to it... you'll be here for a long time..........\n\n");
                DOOREND = DOOREND + 1;
                }

                }

printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\nGOOD JOB YOU COMPLETED THE GAME!\n\n");
printf("\n\n\nI will now tell you how you did!\n\n");
sleep (3);
if (DESKEND == 1 || PDOOREND == 1){
printf("\n You are NOT infected. You survived.\n");
}
if (DOOREND == 1 || PSHELFEND == 1 || RSHELFEND == 1 || HUMANITYEND == 1 || EATEND == 1){
printf("\nYou are INFECTED. You will not survive this...\n");
}
if (DESKEND == 1 || DOOREND == 1 || PDOOREND == 1 || HUMANITYEND == 1 || EATEND == 1){
printf("\nYou have NOT infected humanity. The world is safe!\n");
}
if (PSHELFEND == 1 || RSHELFEND == 1){
printf("\nYou have infected humanity. The world falls into chaos.\n");
}

printf("\nGood Job! Thanks for playing. Please play again and try to get another ending!\n");


                return 0;
}