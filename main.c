#include <stdio.h>
#include <stdlib.h>
#include "demogame.h"


int main()
{
    int i,j,sp=1,p1val,p2val;
    int flag = 0;

    mx *p=(mx *)malloc(sizeof(mx));
    p->p1=0;
    p->p2=0;







    do{



        printf("");
        p->k=1;
//////////////////////////////////////////////////////////////////////////start matrix
printf("\n------------------------------------------------------------------------------------------------------------------------\n");
        for(int i=0;i<=9;i++)
        {
            for(int j=0;j<=9;j++)
            {

                if(p->k<=10)
                {
                     if(p->k%7==0)
                    {
                        if(p->k <=35)
                        {
                             if(p->p1 == p->k)
                            {
                              // printf("\n <<< player 1 Go 3 Block Back");
                              flag=13;  //first value for player and second value for no. of block ex. 1=first player 3= 3 blocks
                               p->p1=p->p1 - 3;
                               //printf("%d",p->p1);
                            }

                            if(p->p2 == p->k)
                            {
                                //printf("\n <<< player 2 Go 3 Block Back");
                                flag=23;
                                p->p2=p->p2 - 3;
                                 //printf("%d",p->p2);
                            }

                            //p->k=p->k-3;
                             printf("|   <3<%d  ",p->k);
                        }
                        else
                        {
                            if(p->p1 == p->k)
                            {
                               // printf("\n <<< player 1 Go 5 Block Back");
                               flag=15;
                                p->p1=p->p1 - 5;
                               // printf("%d",p->p1);
                            }

                             if(p->p2 == p->k)
                            {
                               // printf("\n <<< player 2 Go 5 Block Back");
                               flag=25;
                               p->p2=p->p2 - 5;
                           // printf("%d",p->p2);
                            }

                             //p->k=p->k-5;
                            printf("|   <5<%d  ",p->k);
                        }

                    }
                    else
                    {
                        printf("|      %d  ",p->k);
                    }


                    //printf(" ");
                    //printf(" ");

                    if(p->p1 == p->k)
                    {
                        printf("#");
                    }
                    else
                    {
                        printf(" ");
                    }


                    if(p->p2 == p->k)
                    {
                        printf("@");
                    }
                    else
                    {
                        printf(" ");
                    }


                    p->k++;


                }
                else
                {

                    if(p->k%7==0)
                    {
                        if(p->k <=35)
                        {
                             if(p->p1 == p->k)
                            {
                           // printf("\n <<< player 1 Go 3 Block Back");
                           flag=13;
                               p->p1=p->p1 - 3;
                               // printf("%d",p->p1);
                            }

                            if(p->p2 == p->k)
                            {
                               //  printf("\n <<< player 2 Go 3 Block Back");
                               flag = 23;
                               p->p2=p->p2 - 3;
                                //printf("%d",p->p2);
                            }


                             //p->k=p->k-3;
                             printf("|  <3<%d  ",p->k);
                        }
                        else
                        {
                            if(p->p1 == p->k)
                            {
                               // printf("\n <<< player 1 Go 5 Block Back");
                               flag=15;
                               p->p1=p->p1 - 5;
                              //  printf("%d",p->p1);

                            }

                             if(p->p2 == p->k)
                            {
                                //printf("\n <<< player 2 Go 5 Block Back");
                                flag = 25;
                               p->p2=p->p2 - 5;
                               // printf("%d",p->p2);
                            }

                            // p->k=p->k-5;
                             printf("|  <5<%d  ",p->k);
                        }
                    }
                    else
                    {
                        printf("|     %d  ",p->k);
                    }


                   // printf("   %d",p->k);
                   // printf(" ");
                   // printf(" ");



                   if(p->p1 == p->k)
                    {
                        printf("#");
                    }
                    else
                    {
                        printf(" ");
                    }


                    if(p->p2 == p->k)
                    {
                        printf("@");
                    }
                    else
                    {
                        printf(" ");
                    }


                    p->k++;
                }
            }
           printf("\n------------------------------------------------------------------------------------------------------------------------\n");
            //printf("\n________________________________________________________________________________________________________________________\n\n");
        }
////////////////////////////////////////////////////////////////////////////

        if(flag == 13)
        {
            printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
            printf("\n| *** Player 1 go back in block %d ***         |",p->p1);
            printf("\n| #NOTE : sign is show in next thrown...       |");
            printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx \n");

        }
        else if(flag == 15)
        {    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
             printf("\n| *** Player 1 go back in block %d ***         |",p->p1);
             printf("\n| #NOTE : sign is show in next thrown...       |");
             printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx \n");
        }

        if(flag == 23)
        {
            printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
            printf("\n| *** Player 2 go back in block %d ***         |",p->p2);
            printf("\n| #NOTE : sign is show in next thrown...       | ");
            printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx \n");
        }
        else if(flag == 25)
        {
             printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
             printf("\n| *** Player 2 go back in block %d ***         |",p->p2);
             printf("\n| #NOTE : sign is show in next thrown...       |");
             printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx \n");
        }





///////////////////////////////////////////////////////////////////////////////end matrix
        printf("=================================");
        printf("\n| Player 1 Score ( # ) : %d      |",p->p1);
        printf("\n=================================");
        printf("\n| Player 2 Score ( @ ) : %d      |",p->p2);
        printf("\n=================================\n");


///////////////////////////////////////////////////////////used for do while loop to exit game
    /* printf("\n+++++++++++++++++++++++++++++++++");
     printf("\n| press >1 to continue game...  |");
     printf("\n---------------------------------");
     printf("\n| press 0 to exit game...!      |");
     printf("\n+++++++++++++++++++++++++++++++++ \n >>");
     scanf("%d",&sp);
     if(sp==0)
     {
         exit(1);
     }*/


     if(p->p1 == 100)
        {
            printf("\n\n#*#*#*#*#*#*#*#*#*#*#*#*#*#*#");
            printf("\n| Player 1 Won *<^>*        |");
            printf("\n| Congratulations...^       |");
            printf("\n#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n\n");

            exit(1);
        }

         if(p->p2 == 100)
        {
            printf("\n\n#*#*#*#*#*#*#*#*#*#*#*#*#*#*#");
            printf("\n| Player 2 Won *<^>*        |");
            printf("\n| Congratulations...^       |");
            printf("\n#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n\n");

            exit(1);
        }


////////////////////////////////////////////////////////////

     int pl;
        printf("\n*********************************");
        printf("\n| who's throw Dice :            |");
        printf("\n*********************************");
        printf("\n| press 1 for player 1          |");
        printf("\n---------------------------------");
        printf("\n| press 2 for player 2          |");
        printf("\n---------------------------------");
        printf("\n| press 9 for Exit Game...!     |");
        printf("\n--------------------------------- \n >>");
        scanf("%d",&pl);

        printf("\n-------------------------------------------------------------------------------------------------------------------------\n");
        switch(pl)
        {
        case 1:
            p1val=dice();
            printf("\n##################################");
            printf("\n| Player 1  Dice value : %d       |",p1val);
            printf("\n##################################");
            p->p1=p->p1+p1val;
            if(p->p1 > 100)
            {
                p->p1=p->p1-p1val;
            }
            break;
        case 2:
            p2val=dice();
            printf("\n##################################");
            printf("\n Player 2 Dice value : %d         |",p2val);
            printf("\n##################################");
            p->p2=p->p2+p2val;
            if(p->p2 > 100)
            {
                p->p2=p->p2-p2val;
            }
            break;
        case 9:
                exit(1);
            break;
        default:

            printf("\n#############################################");
            printf("\n|*something wrong...! Select valid option...|");
            printf("\n#############################################");
            break;

        }
        flag=0;


    }while(sp >=1);




    return 0;
}
