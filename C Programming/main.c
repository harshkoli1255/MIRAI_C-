#include<stdio.h>
#include<ctype.h>
int main() {
    char key;
    key = getchar();

    if(isupper(key)) {
        printf("It is a upper case char\n");
    }
    else if(islower(key)) {
        printf("It is a lowercase char\n");
    }
    else if(isdigit(key)) {
        printf("It is a digit\n");
    }
    return 0;
}