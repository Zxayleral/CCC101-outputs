#include<stdio.h>

int odd_numbers();
int even_numbers();

int main(void) {

    int first, second, cond;
    do {
        printf("Enter first number: "); scanf("%d", &first);
        printf("Enter second number: "); scanf("%d", &second);
        printf("Enter [1] to use display even [2] to display odd: "); scanf("%d", &cond);
        
        if (first > second) {
            printf("Invalid Input Range.");
            continue;
        }
        if (cond > 2) {
            printf("Invalid Input");
            continue;
        }
        break;

    } while (second > first && cond < 3);

    if (cond == 1) { 
        printf("h");
        even_numbers(first, second);
    } else if (cond == 2) {
        odd_numbers(first, second);
    }

}

int odd_numbers(int first, int second) {
    for(int i = 1; first <= second; first += i) {
        if ((first%2)) {
            printf("%d ", first);
        }
    }
}

int even_numbers(int first, int second) {
    for(int i = 1; first <= second; first += i) {
        if (!(first%2)) {
            printf("%d ", first);
        }
    }
}
