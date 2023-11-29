#include<stdio.h>
#include<string.h>


// Structure to represent a stack
struct Stack {
    int arr[5];
    int top;
};


// Function prototypes
int linearSearch(int a[], int n, int data);
int binarySearch(int a[], int n, int data);
void bubbleSort(int arr[], int n);
void insertionSort(int a[], int n);
int factorial(int n);
int fibonacci(int n);
void towerOfHanoi(int n, char source, char auxiliary, char destination);
void initializeStack(struct Stack *stack);
void push(struct Stack *stack, int value);
int pop(struct Stack *stack);
int isFull(struct Stack *stack);
int isEmpty(struct Stack *stack);
int peek(struct Stack *stack);

int main(){
    printf("Welcome to Programing world");
    int option, value;
    do{
        //Display menu
        printf("Select any one \n");
        printf("1. Linear Search \n");
        printf("2. Binary Search \n");
        printf("3. Bubble Short  \n");
        printf("4. Insertion  \n");
        printf("5. Factorial\n");
        printf("6. Fibonacci Series\n");
        printf("7. Tower of Hanoi\n");
        printf("8. Stack Operations\n");
        printf("9. Exit program\n");


        printf("Select you option = ");
        scanf("%d", &option);
        switch(option){
            case 0:{
                printf("End");
                printf("----------------------- \n");
                printf("----------------------- \n");
                break;
            }
            case 1: {
                // Linear Search
                int n,i,data;
                printf("Enter how many elements: ");
                scanf("%d",&n);
                int a[n];
                printf("Enter the elements..\n");
                for (i=0; i<n; i++){
                    printf("Index[%d] = ",i);
                    scanf("%d",&a[i]);
                }
                printf("Which number you want to search: ");
                scanf("%d",&data);
                int result = linearsearch(a, n, data);
                printf("----------------------- \n");
                printf("----------------------- \n");
                break;
            }
            case 2: {
                //Binary Search
                int n, i, data;
                printf("Enter array size: ");
                scanf("%d", &n);
                int a[n];

                printf("Enter sorted array: \n");
                for (i = 0; i < n; i++){
                    printf("Index[%d] = ",i);
                    scanf("%d", &a[i]);
                }

                printf("Enter the element to search: ");
                scanf("%d", &data);

                int result = binarySearch(a, n, data);
                if (result != -1){
                    printf("\nElement is found at index %d\n", result);
                }
                else{
                    printf("\nElement not found in the array\n");
                }
                printf("----------------------- \n");
                printf("----------------------- \n");
                break;
            }
            case 3: {
                //Bubble Sort
                int n, i, j, temp;
                printf("Enter array size: ");
                scanf("%d",&n);
                int a[n];
                printf("Enter the original array elements: ");
                for (i=0; i<n; i++){
                    scanf("%d",&a[i]);
                }
                printf("\nOriginal array: ");
                for (i=0; i<n; i++){
                    printf("%d ",a[i]);
                }
                printf("\n\n");
                bubbleSort(a,n);
                printf("----------------------- \n");
                printf("----------------------- \n");
                break;
            }
            case 4: {
                //insertion Sort
                int n, i, result;
                printf("Enter array size: ");
                scanf("%d",&n);
                int a[n];
                printf("Enter the elements: ");
                for (i=0; i<n; i++){
                    scanf("%d",&a[i]);
                }
                printf("\nThe original elements are = ");
                for (i=0; i<n; i++){
                    printf("%d ",a[i]);
                }
                insertionsort(a,n);
                printf("----------------------- \n");
                printf("----------------------- \n");
                break;
            }
            case 5:
                {
                int n;
                printf("Enter a number: ");
                scanf("%d", &n);
                printf("Factorial of %d is: %d\n", n, factorial(n));
                printf("----------------------- \n");
                printf("----------------------- \n");
                break;
                }
            case 6:{
                int n,i;
                printf("Enter the number of terms: ");
                scanf("%d", &n);
                printf("Fibonacci Series up to %d terms: \n", n);
                for (i = 0; i < n; ++i) {
                    printf("%d ", fibonacci(i));
                }
                printf("\n");
                printf("----------------------- \n");
                printf("----------------------- \n");
                break;
                }
            case 7:{
                int n;
                printf("Enter the number of disks: ");
                scanf("%d", &n);
                printf("Tower of Hanoi with %d disks:\n", n);
                towerOfHanoi(n, 'A', 'B', 'C');
                printf("----------------------- \n");
                printf("----------------------- \n");
                break;
                }

            case 8: {
                struct Stack stack;
                initializeStack(&stack);

                int stackOption;

                do {
                    // Display stack operations menu
                    printf("\nStack Operations:\n");
                    printf("1. Push\n");
                    printf("2. Pop\n");
                    printf("3. Peek\n");
                    printf("4. Is Full\n");
                    printf("5. Is Empty\n");
                    printf("6. Back to Main Menu\n");
                    printf("Enter your choice: ");
                    scanf("%d", &stackOption);

                    switch (stackOption) {
                        case 1:
                            if (!isFull(&stack)) {
                                printf("Enter the value to push: ");
                                scanf("%d", &value);
                                push(&stack, value);
                                printf("Pushed %d onto the stack.\n", value);
                            } else {
                                printf("Stack is full. Cannot push.\n");
                            }
                            printf("**********************");
                            break;
                        case 2:
                            if (!isEmpty(&stack)) {
                                printf("Popped value: %d\n", pop(&stack));
                            } else {
                                printf("Stack is empty. Cannot pop.\n");
                            }
                            printf("**********************");
                            break;
                        case 3:
                            if (!isEmpty(&stack)) {
                                printf("Peek value: %d\n", peek(&stack));
                            } else {
                                printf("Stack is empty. Cannot peek.\n");
                            }
                            printf("**********************");
                            break;
                        case 4:
                            if (isFull(&stack)) {
                                printf("Stack is full.\n");
                            } else {
                                printf("Stack is not full.\n");
                            }
                            printf("**********************");
                            break;
                        case 5:
                            if (isEmpty(&stack)) {
                                printf("Stack is empty.\n");
                            } else {
                                printf("Stack is not empty.\n");
                            }
                            printf("**********************");
                            break;
                        case 6:
                            printf("Returning to the main menu.\n");
                            printf("**********************");
                            break;
                        default:
                            printf("Invalid choice. Please enter a valid option.\n");
                    }
                } while (stackOption != 6);
                printf("----------------------- \n");
                printf("----------------------- \n");
                break;
            }

            case 9:{
                printf("Exiting the program.\n");
                printf("----------------------- \n");
                printf("----------------------- \n");
                break;}
            default:
                printf("Please enter a valid option");
                printf("----------------------- \n");
                printf("----------------------- \n");
                break;
        }
    } while(option != 0);
}


int linearsearch(int a[], int n,int data ){
    {
        int i;
        for (i=0; i<n; i++){
            if (a[i]==data){
                printf("\n The value you search is found \n Index no of %d is %d and\n The position is %d\n",data, i,i+1);
                break;
            }
        }
        if (i==n){
            printf("\nNot Found!!\n");
        }
    }
}

int binarySearch(int a[], int n, int data)
{
    int low = 0;
    int high = n - 1;
    while (low <= high){
        int mid = low + (high - low) / 2; // Better way to calculate mid to avoid overflow
        if (data == a[mid])
            return mid;
        else if (data > a[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

void bubbleSort(int a[], int n){
    //Do bubble sort
    int i,j,temp;
    for (i=0; i<n-1; i++){
        int flag = 0;
        for (j=0; j<n-1-i; j++){

            if (a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                flag = 1;
                printf("Swapped: %d and %d\n", a[j], a[j + 1]); // Print the swapping
            }
        }
        if (flag == 0)
            break;
    }
    printf("\nSorted array is: ");
    for (i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

void insertionsort(int a[], int n){


    int i,j,temp;
    for (i=1; i<n; i++){
        temp = a[i];
        j = i-1;
        while (j>=0 && a[j]>temp){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
    printf("\nSorted array is: ");
    for (i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}


// Function to calculate factorial using recursion
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Function to calculate Fibonacci series using recursion
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Function to solve Tower of Hanoi using recursion
void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }
    towerOfHanoi(n - 1, source, destination, auxiliary);
    printf("Move disk %d from %c to %c\n", n, source, destination);
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

void initializeStack(struct Stack *stack) {
    stack->top = -1;
}

// Function to push a value onto the stack
void push(struct Stack *stack, int value) {
    stack->arr[++stack->top] = value;
}

// Function to pop a value from the stack
int pop(struct Stack *stack) {
    return stack->arr[stack->top--];
}

// Function to check if the stack is full
int isFull(struct Stack *stack) {
    return stack->top == 4;  // Assuming the stack has a maximum size of 5
}

// Function to check if the stack is empty
int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

// Function to peek at the top value of the stack
int peek(struct Stack *stack) {
    return stack->arr[stack->top];
}

