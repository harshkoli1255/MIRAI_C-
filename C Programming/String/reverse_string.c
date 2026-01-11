#include<stdio.h>
#include<string.h>
int main() {
    char str[20];
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);

    if(len > 0 && str[len-1] == '\n') {
        str[len-1] = '\0';
        len--;
    }
    
    int i = 0;
    int j = len-1;
    while(i  < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    printf("%s\n", str);
    return 0;
}