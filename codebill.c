#include<stdio.h>
int main(){
    int choice1,choice2, choice3, choice4, choice5, choice6, choice7, choice8, cost1,cost2,cost3, cost4,cost5,cost6,cost7,cost8, bill, n1, n2, n3, n4 ,n5 ,n6, n7, n8;
    printf("\n********MENU********\n");
    printf("1. Pizza - $10\n");
    printf("2. Burger - $5\n");
    printf("3. Pasta - $7\n");
    printf("4. Fries - $3\n");
    printf("5. Salad - $4\n");
    printf("6. Soda - $2\n");
    printf("7. Water - $1\n");
    printf("8. Exit\n");
    printf("************************\n");
    printf("Enter your first choice: \n");
    scanf("%d", &choice1);
      if(choice1==8){
        printf("Exiting the program.\n");
        choice1=0;
        choice2=0;  
        choice3=0;      
        choice4=0;
        choice5=0;
        choice6=0;
        choice7=0;
        choice8=0;
        return 1;

    }
    printf("Enter the quantity for your first choice: \n");
    scanf("%d", &n1);
    printf("Enter your second choice: \n");
    scanf("%d", &choice2);
    if(choice2==8){
        printf("Exiting the program.\n");
        choice2=0;
        choice3=0;      
        choice4=0;
        choice5=0;
        choice6=0;
        choice7=0;
        choice8=0;
        return 1;
    }
    printf("Enter the quantity for your second choice: \n");
    scanf("%d", &n2);
    printf("Enter your third choice: \n");
    scanf("%d", &choice3);
    if(choice3==8){
        printf("Exiting the program.\n");
         choice3=0;      
        choice4=0;
        choice5=0;
        choice6=0;
        choice7=0;
        choice8=0;
        return 1;
    }  
    printf("Enter the quantity for your third choice: \n");
    scanf("%d", &n3);
    printf("Enter your fourth choice: \n");
    scanf("%d", &choice4);
    if(choice4==8){
        printf("Exiting the program.\n");
        choice4=0;
        choice5=0;
        choice6=0;
        choice7=0;
        choice8=0;
        return 1;
    }
    printf("Enter the quantity for your fourth choice: \n");
    scanf("%d", &n4);
    printf("Enter your fifth choice: \n");
    scanf("%d", &choice5);
    if(choice5==8){
        printf("Exiting the program.\n");
        choice5=0;
        choice6=0;
        choice7=0;
        choice8=0;
        return 1;
    }
    printf("Enter the quantity for your fifth choice: \n");
    scanf("%d", &n5);
    printf("Enter your sixth choice: \n");
    scanf("%d", &choice6);
    if(choice6==8){
        printf("Exiting the program.\n");
        choice6=0;
        choice7=0;
        choice8=0;
        return 1;
    }
    printf("Enter the quantity for your sixth choice: \n");
    scanf("%d", &n6);
    printf("Enter your seventh choice: \n");
    scanf("%d", &choice7);
    if(choice7==8){
        printf("Exiting the program.\n");
        choice7=0;
        choice8=0;
        return 1;
    }
    printf("Enter the quantity for your seventh choice: \n");
    scanf("%d", &n7);
    printf("Enter your eighth choice: \n");
    scanf("%d", &choice8);
    if(choice8==8){
        printf("Exiting the program.\n");
        choice8=0;
        return 1;
    }
    printf("Enter the quantity for your eighth choice: \n");
    scanf("%d", &n8);
    if(choice1<1 || choice1>8 || choice2<1 || choice2>8 || choice3<1 || choice3>8){
        printf("Invalid choice!\n");
        return 1;
    }
    if(choice1 != 8){
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

        case 4:
            cost1 = 3;
            printf("You ordered Fries. Total bill: $%d\n", cost1);
            break;

        case 5:
            cost1 = 4;
            printf("You ordered Salad. Total bill: $%d\n", cost1);
            break;

        case 6:
            cost1 = 2;
            printf("You ordered Soda. Total bill: $%d\n", cost1);
            break;

        case 7:
            cost1 = 1;
            printf("You ordered Water. Total bill: $%d\n", cost1);
            break;

        }
    }
    else{
        printf("You did not order anything.\n");
        cost1 = 0;
    }
    if(choice2 != 8){
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

        case 4:
            cost2 = 3;
            printf("You ordered Fries. Total bill: $%d\n", cost2);
            break;

        case 5:
            cost2 = 4;
            printf("You ordered Salad. Total bill: $%d\n", cost2);
            break;

        case 6:
            cost2 = 2;
            printf("You ordered Soda. Total bill: $%d\n", cost2);
            break;
        
        case 7:
            cost2 = 1;
            printf("You ordered Water. Total bill: $%d\n", cost2);
            break;
        }
    }
    else{
        printf("You did not order anything for your second choice.\n");
        cost2 = 0;
    }
    if(choice3 != 8){
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
            printf("You ordered Pasta. Total bill: $%d\n", cost3);
            break;

        case 4:
            cost3 = 3;
            printf("You ordered Fries. Total bill: $%d\n", cost3);
            break;

        case 5:
            cost3 = 4;
            printf("You ordered Salad. Total bill: $%d\n", cost3);
            break;

        case 6:
            cost3 = 2;
            printf("You ordered Soda. Total bill: $%d\n", cost3);
            break;
        
        case 7:
            cost3 = 1;
            printf("You ordered Water. Total bill: $%d\n", cost3);
            break;
        
        }
    }
    else{
        printf("You did not order anything for your third choice.\n");
        cost3 = 0;
    }
    if(choice4 != 8){
        switch(choice4){
            case 1:
            cost4 = 10;
            printf("You ordered Pizza. Total bill: $%d\n", cost4);
            break;
        case 2:
            cost4 = 5;
            printf("You ordered Burger. Total bill: $%d\n", cost4);
            break;
        case 3:
            cost4 = 7;
            printf("You ordered Pasta. Total bill: $%d\n", cost4);
            break;

        case 4:
            cost4 = 3;
            printf("You ordered Fries. Total bill: $%d\n", cost4);
            break;

        case 5:
            cost4 = 4;
            printf("You ordered Salad. Total bill: $%d\n", cost4);
            break;

        case 6:
            cost4 = 2;
            printf("You ordered Soda. Total bill: $%d\n", cost4);
            break;
        
        case 7:
            cost4 = 1;
            printf("You ordered Water. Total bill: $%d\n", cost4);
            break;
        
        }
    }
    else{
        printf("You did not order anything for your fourth choice.\n");
        cost4 = 0;
    }
    if(choice5 != 8){
        switch(choice5){
            case 1:
            cost5 = 10;
            printf("You ordered Pizza. Total bill: $%d\n", cost5);
            break;
        case 2:
            cost5 = 5;
            printf("You ordered Burger. Total bill: $%d\n", cost5);
            break;
        case 3:
            cost5 = 7;
            printf("You ordered Pasta. Total bill: $%d\n", cost5);
            break;

        case 4:
            cost5 = 3;
            printf("You ordered Fries. Total bill: $%d\n", cost5);
            break;

        case 5:
            cost5 = 4;
            printf("You ordered Salad. Total bill: $%d\n", cost5);
            break;

        case 6:
            cost5 = 2;
            printf("You ordered Soda. Total bill: $%d\n", cost5);
            break;
        
        case 7:
            cost5 = 1;
            printf("You ordered Water. Total bill: $%d\n", cost5);
            break;
        
        }
    }
    else{
        printf("You did not order anything for your fifth choice.\n");
        cost5 = 0;
    }
    if(choice6 != 8){
        switch(choice6){
            case 1:
            cost6 = 10;
            printf("You ordered Pizza. Total bill: $%d\n", cost6);
            break;
        case 2:
            cost6 = 5;
            printf("You ordered Burger. Total bill: $%d\n", cost6);
            break;
        case 3:
            cost6 = 7;
            printf("You ordered Pasta. Total bill: $%d\n", cost6);
            break;

        case 4:
            cost6 = 3;
            printf("You ordered Fries. Total bill: $%d\n", cost6);
            break;

        case 5:
            cost6 = 4;
            printf("You ordered Salad. Total bill: $%d\n", cost6);
            break;

        case 6:
            cost6 = 2;
            printf("You ordered Soda. Total bill: $%d\n", cost6);
            break;
        
        case 7:
            cost6 = 1;
            printf("You ordered Water. Total bill: $%d\n", cost6);
            break;
        
        }
    }
    else{
        printf("You did not order anything for your sixth choice.\n");
        cost6 = 0;
    }
    if(choice7 != 8){
        switch(choice7){
            case 1:
            cost7 = 10;
            printf("You ordered Pizza. Total bill: $%d\n", cost7);
            break;
        case 2:
            cost7 = 5;
            printf("You ordered Burger. Total bill: $%d\n", cost7);
            break;
        case 3:
            cost7 = 7;
            printf("You ordered Pasta. Total bill: $%d\n", cost7);
            break;

        case 4:
            cost7 = 3;
            printf("You ordered Fries. Total bill: $%d\n", cost7);
            break;

        case 5:
            cost7 = 4;
            printf("You ordered Salad. Total bill: $%d\n", cost7);
            break;

        case 6:
            cost7 = 2;
            printf("You ordered Soda. Total bill: $%d\n", cost7);
            break;
        
        case 7:
            cost7 = 1;
            printf("You ordered Water. Total bill: $%d\n", cost7);
            break;
        
        }
    }
    else{
        printf("You did not order anything for your seventh choice.\n");
        cost7 = 0;
    }
    if(choice8 != 8){
        switch(choice8){
            case 1:
            cost8 = 10;
            printf("You ordered Pizza. Total bill: $%d\n", cost8);
            break;
        case 2:
            cost8 = 5;
            printf("You ordered Burger. Total bill: $%d\n", cost8);
            break;
        case 3:
            cost8 = 7;
            printf("You ordered Pasta. Total bill: $%d\n", cost8);
            break;

        case 4:
            cost8 = 3;
            printf("You ordered Fries. Total bill: $%d\n", cost8);
            break;

        case 5:
            cost8 = 4;
            printf("You ordered Salad. Total bill: $%d\n", cost8);
            break;

        case 6:
            cost8 = 2;
            printf("You ordered Soda. Total bill: $%d\n", cost8);
            break;
        
        case 7:
            cost8 = 1;
            printf("You ordered Water. Total bill: $%d\n", cost8);
            break;
        
        }
    }
    else{
        printf("You did not order anything for your eighth choice.\n");
        cost8 = 0;
    }
    bill = (cost1 * n1) + (cost2 * n2) + (cost3 * n3) + (cost4 * n4) + (cost5 * n5) + (cost6 * n6) + (cost7 * n7) + (cost8 * n8);
    printf("Your total bill is: $%d\n", bill);
    return 0;
}
    
    

