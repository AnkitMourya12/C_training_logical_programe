#include<stdio.h>
int main()
{
    int a,b;
    while(1)
    {
   
    printf("             CALCULATOR              \n");
    printf("*********************************************\n");
    printf("            addition CHOOSE OPTION 1\n");
    printf("            substraction CHOOSE OPTION 2\n");
    printf("            mul CHOOSE OPTION 3\n");
    printf("            div CHOOSE OPTION 4\n");
    


   
    
        int op;
        printf("enter the option\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
            printf("\nplease enetr two numbers for addition \n");
            
            scanf("%d %d",&a,&b);
            printf("adition is:%d",a+b);
            break;

            case 2:
            printf("\nplease enetr two numbers for substraction \n");
            
            scanf("%d %d",&a,&b);
            printf("sub is:%d",a-b);
            break;

            case 3:
            printf("\nplease enetr two numbers for multiplication \n");
           
            scanf("%d %d",&a,&b);
            printf("mul is:%d",a*b);
            break;

            case 4:
            printf("\nplease enetr two numbers for division\n");
            
            scanf("%d %d",&a,&b);
            printf("division is:%d",a/b);
            break;

            default: printf("invalide option");



        }
        printf("\ndo u want to exit y/n:");
        char ch;
        fflush(stdin);
        
    scanf("%c",&ch);
   //fflush(stdin);
        if(ch=='y')
        {
            printf("\nTHANK YOU ");
            exit(0);
        }


        }
    }


