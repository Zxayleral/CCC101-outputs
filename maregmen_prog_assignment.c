#include<stdio.h>    
#include<stdio.h>  
#include<stdlib.h>  
#include<time.h> 
#include<string.h>
#define supported_symbols "!@#$%^&*()-_+={}[]<>?"
#define smol_letters "abcdefghijklmnopqrstuvwxyz"
#define numbers "1234567890"
#define big_letters strupr(smol_letters)
#define minChar 8
 
//You can use this function to get a random number from min to max
int randint();
void generatePassword();
char generateCharacters();

int main() 
{   
    int a, t;
    char password[50];
    srand(time(0));
    do {
        printf("Enter password length");
        scanf("%d", &a);
        if(a<=minChar) {
            password[a] = '\0';
            generatePassword(a, &password);
            printf("%s", password);
        }
    } while (t!=0);
    
} 


int randInt(int min, int max) {
    int random_number = rand() % max + min;
    return random_number;
}

char generateCharacters(int ln, char* chars[]) {
    
    char fuck[ln];

    for(int i = 0; i < ln; i++) {
        fuck[i] = chars[rand() % strlen(chars)];
    }
}

void generatePassword(int len, char* passwd[]) {
    int char_per_type = len/4, excess = len%4;
    strcat(passwd, generateCharacters(char_per_type, smol_letters));
    strcat(passwd, generateCharacters(char_per_type, supported_symbols));
    strcat(passwd, generateCharacters(char_per_type, numbers));
    strcat(passwd, generateCharacters(char_per_type, big_letters));
}
