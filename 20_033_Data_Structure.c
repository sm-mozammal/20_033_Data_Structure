#include<stdio.h>
int main(){
    printf("Welcome to Programing world");
    int option;
    do{
        printf("Select any one \n");
        printf("1. Linear Search \n");
        printf("2. Binary Search \n");
        printf("3. Bubble Short  \n");
        printf("4. Insertion  \n");

        printf("Select you option = ");
        scanf("%d", &option);
        switch(option){
            case 0:{
                break;
            }
            case 1: {
                printf("linear search");
                break;
            }
            case 2: {
                printf("Binary search");
                break;
            }
            case 3: {
                printf("Bubble short");
                break;
            }
            case 4: {
                printf("Insertion");
                break;
            }
            default:
                printf("Please enter a valid option");
                break;
        }
    } while(option != 0);
}
