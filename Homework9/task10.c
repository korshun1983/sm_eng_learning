#include <stdio.h>

int main() {
    char s[1001];
    scanf("%1000s", s);

    int i = 0;
    while (s[i] != '.' && s[i] != '\0') {
        char ch = s[i];
        int count = 1;
        while (s[i + 1] == ch && s[i + 1] != '.') {
            count++;
            i++;
        }
        printf("%c%d", ch, count);
        i++;
    }
    printf("\n");
    return 0;
}
