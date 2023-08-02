#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isStringIsomorphic(char a[], char b[]) {
    int ma[256] = {0},mb[256] = {0};
    if (strlen(a) != strlen(b))
        return 0;

    for (int i = 0; a[i]; i++) {
        if (ma[a[i]] == 0 && mb[b[i]] == 0){
            ma[a[i]] = b[i];
            mb[b[i]] = a[i];
        }
        else if (ma[a[i]] != b[i] || mb[b[i]]!=a[i])
            return 0;
    }

    return 1;
}

int main() {
    char a[100], b[100];

    printf("Enter two strings: ");
    scanf("%s %s", a, b);

    if (isStringIsomorphic(a, b))
        printf("The strings are isomorphic.\n");
    else
        printf("The strings are not isomorphic.\n");

    return 0;
}

