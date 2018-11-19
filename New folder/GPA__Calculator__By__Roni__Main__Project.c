#include<stdio.h>

int main()
{
    int num,cse,mat,phy,eng,choice;
    float gp1,gp2,gp3,gp4,cgpa;
    printf("\n");
    printf("                                    CGPA Calculator By Roni + Wafi + Nahid\n\n\n");
    printf("ENTER YOUR CSE MARKS (course code 131):");
    scanf("%d",&cse);
    printf("ENTER YOUR MAT MARKS (course code 132):");
    scanf("%d",&mat);
    printf("ENTER YOUR PHY MARKS (course code 133):");
    scanf("%d",&phy);
    printf("ENTER YOUR ENG MARKS (course code 134):");
    scanf("%d",&eng);

    if (cse<40 || mat<40 || phy<40 || eng<40)
    {
        gp1=0.00;
        gp2=0.00;
        gp3=0.00;
        gp4=0.00;
    }
   else if (cse<45 || mat<45 || phy<45 || eng<45)
    {
        gp1=2.00;
        gp2=2.00;
        gp3=2.00;
        gp4=2.00;
    }
   else if (cse<50 || mat<50 || phy<50 || eng<50)
    {
        gp1=2.25;
        gp2=2.25;
        gp3=2.25;
        gp4=2.25;
    }
   else if (cse<55 || mat<55 || phy<55 || eng<55)
    {
        gp1=2.50;
        gp2=2.50;
        gp3=2.50;
        gp4=2.50;
    }
   else if (cse<60 || mat<60 || phy<60 || eng<60)
    {
        gp1=2.75;
        gp2=2.75;
        gp3=2.75;
        gp4=2.75;
    }
   else if (cse<65 || mat<65 || phy<65 || eng<65)
    {
        gp1=3.00;
        gp2=3.00;
        gp3=3.00;
        gp4=3.00;
    }
    else if (cse<70 || mat<70 || phy<70 || eng<70)
    {
        gp1=3.25;
        gp2=3.25;
        gp3=3.25;
        gp4=3.25;
    }
    else if (cse<75 || mat<75 || phy<75 || eng<75)
    {
        gp1=3.50;
        gp2=3.50;
        gp3=3.50;
        gp4=3.50;
    }
    else if (cse<80 || mat<80 || phy<80 || eng<80)
    {
        gp1=3.75;
        gp2=3.75;
        gp3=3.75;
        gp4=3.75;
    }
    else if (cse>=80 || mat>=80 || phy>=80 || eng>=80)
    {
        gp1=4.00;
        gp2=4.00;
        gp3=4.00;
        gp4=4.00;
    }


    cgpa = ((gp1*3)+(gp2*3)+(gp3*3)+(gp4*2))/11;

    printf("\n\t\t\t\t\tPress 1 for CGPA\n\t\t\t\t\tPress 2 for Grade\n\t\t\t\t\tENTER YOUR CHOICE:");
    scanf("%d",&choice);

    switch (choice)
    {
        case 1: printf(" %.02f",cgpa);
break;
        case 2:

            if (cgpa<2)
            {
                printf("Fail");
            }
            else if (cgpa<2.25)
            {
                printf("D");
            }
             else if (cgpa<2.50)
            {
                printf("C");
            }
             else if (cgpa<2.75)
            {
                printf("C+");
            }
             else if (cgpa<3.00)
            {
                printf("B-");
            }
             else if (cgpa<3.25)
            {
                printf("B");
            }
             else if (cgpa<3.50)
            {
                printf("B+");
            }
             else if (cgpa<3.75)
            {
                printf("A-");
            }
             else if (cgpa<4.00)
            {
                printf("A");
            }
             else if (cgpa=4)
            {
                printf("A+");
            }
break;

    }



    getch();
    return 0;

}
