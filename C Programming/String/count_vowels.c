#include<stdio.h>
int main() {
    char str[20];
    fgets(str, sizeof(str), stdin);
    int count = 0;
    printf("Vowels Are: ");
    for(int i = 0; i < sizeof(str); i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            printf("%c", str[i]);
            count++;
        }
    }
    printf("\n");
    printf("Number of Vowels: %d", count);
    printf("\n");
    return 0;
}