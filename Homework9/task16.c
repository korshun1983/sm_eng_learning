#include <stdio.h>

int main() {
    char s[3];
    scanf("%2s", s);
    
    int col = s[0] - 'A' + 1;   // A=1, B=2, ..., H=8
    int row = s[1] - '0';       // преобразуем цифру из символа в число
    
    if ((col + row) % 2 == 0) {
        printf("BLACK\n");
    } else {
        printf("WHITE\n");
    }
    return 0;
}
