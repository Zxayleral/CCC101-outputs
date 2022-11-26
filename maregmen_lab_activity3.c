#include<stdio.h>

int odd_numbers();   // we initialize two functions
int even_numbers();  // to have a cleaner code

int main(void) {

    int first, second, cond;

    // i will use nested do while loops for this problem. 
    // it will ask the user to input to integers and it will repeat the task until the condition becomes false
    // I first came up with two non-nested do while loops.
    // we can do two do while loops without nesting them and it will still come up with the same output.
    // but as a programmer, I'd like to experiment
    // this problem could be solved using other loops but for me this is a cleaner code to read.
    
    do {
        printf("Enter a number: ");
        scanf("%d", &first);
        printf("Enter another number: ");
        scanf("%d", &second);

        if (first >= second) {
            printf("Invalid input Range.\n");
            continue;
        }
        // I nested 
        do {
            
            printf("Enter [1] to use display even [2] to display odd: ");
            scanf("%d", &cond);

            if (cond > 2) {
                printf("Invalid input!\n");
                continue;
            }

        } while(cond > 2);


    } while (first >= second);
    
    
    if (cond==1) {
        odd_numbers(first, second);
    } else {
        even_numbers(first, second); 
    }
    printf("\n");

}

// odd_numbers funciton, it will return the odd numbers BETWEEEN the first and second integer argument
int odd_numbers(int first, int second) {
    printf("Odd numbers from %d to %d.\n", first, second);
    for(first++; first < second-1; first++) { // it will intialize a statement which is to add 1, in order to skip the number so it cannot proceed to the if condition.
        if ((first%2)) {
            printf("%d ", first);
        }
    }
}

// even_numbers funciton, it will return the even numbers BETWEEEN the first and second integer argument
int even_numbers(int first, int second) {
    printf("Odd numbers from %d to %d.\n", first, second); 
    for(first++; first <= second; first++) { // it will intialize a statement which is to add 1, in order to skip the number so it cannot proceed to the if condition.
        if (!(first%2)) {
            printf("%d ", first);
        }
    }
}
