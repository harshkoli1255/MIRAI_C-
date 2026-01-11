#include<stdio.h>
int main() {
    char ope;
    printf("What Operation you want to perform (Add: a, Subtract: s, Multiplay: M, Divide: d, modolus: m): ");
    scanf("%c", &ope);

    int a,b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    switch (ope) {
        case 'a' :
            printf("Result: %d+%d=%d", a, b, a+b);
            break;
        case 's' :
            printf("Result: %d-%d=%d", a, b, a-b);
            break;
        case 'M' :
            printf("Result: %d*%d=%d", a, b, a*b);
            break;
        case 'd' :
            if(b!=0) {
                printf("Result: %d/%d=%d", a, b, a/b);
            }
            break;
        case 'm' :
            printf("Result: %d%%%d=%d", a, b, a%b);
            break;
        default:
            printf("Not a valid operation\n");
    }

    printf("\n");

    return 0;
}