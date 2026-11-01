#include<stdio.h>
int main(){
    int choice1,choice2, choice3, cost1,cost2,cost3, bill ;
    printf("\n********MENU********\n");
    printf("1. Pizza - $10\n");
    printf("2. Burger - $5\n");
    printf("3. Pasta - $7\n");
    printf("4. Exit\n");
    printf("************************\n");
    printf("Enter your first choice: \n");
    scanf("%d", &choice1);
     printf("Enter your second choice: \n");
    scanf("%d", &choice2);
     printf("Enter your third choice: \n");
    scanf("%d", &choice3);
    if(choice1<1 || choice1>4 || choice2<1 || choice2>4 || choice3<1 || choice3>4){
        printf("Invalid choice!\n");
        return 1;
    }
    if(choice1==4 && choice2==4 && choice3==4){
        printf("Exiting the program.\n");
        return 1;

    }
    if(choice1 != 4){
        switch(choice1){
        case 1:
        cost1 = 10;
            printf("You ordered Pizza. Total bill: $%d\n", cost1);
            break;
        case 2:
            cost1 = 5;
            printf("You ordered Burger. Total bill: $%d\n", cost1);
            break;
        case 3:
            cost1 = 7;
            printf("You ordered Pasta. Total bill: $%d\n", cost1);
            break;
        }
    }
    else{
        printf("You did not order anything for your first choice.\n");
        cost1 = 0;
    }
    if(choice2 != 4){
        switch(choice2){
        case 1:
            cost2 = 10;
            printf("You ordered Pizza. Total bill: $%d\n", cost2);
            break;
        case 2:
            cost2 = 5;
            printf("You ordered Burger. Total bill: $%d\n", cost2);
            break;
        case 3:
            cost2 = 7;
            printf("You ordered Pasta. Total bill: $%d\n", cost2);
            break;
        }
    }
    else{
        printf("You did not order anything for your second choice.\n");
        cost2 = 0;
    }
    if(choice3 != 4){
        switch(choice3){
        case 1:
            cost3 = 10;
            printf("You ordered Pizza. Total bill: $%d\n", cost3);
            break;
        case 2:
            cost3 = 5;
            printf("You ordered Burger. Total bill: $%d\n", cost3);
            break;
        case 3:
            cost3 = 7;
            printf("You ordered Pasta. cost for item: $%d\n", cost3);
            break;
        }
    }
    else{
        printf("You did not order anything for your third choice.\n");
        cost3 = 0;
    }
    bill = cost1 + cost2 + cost3;
    printf("Your total bill is: $%d\n", bill);
    return 0;
}
    
    

