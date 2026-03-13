#include <stdio.h>
int main() {
    char str[100];
    printf("Enter characters : ");
    scanf("%[^A-Za-z]", str);
    printf("Entered non-alphabetic characters: %s\n", str);

    return 0;
}
