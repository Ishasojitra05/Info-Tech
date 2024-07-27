#include <stdio.h>

int main() {
    char msg[100], ch;
    int i, key;
    printf("Enter a message to encrypt: ");
    scanf("%s", msg); 
    printf("Enter key: ");
    scanf("%d", &key);
    key = key % 26;
    for (i = 0; msg[i] != '\0'; ++i) {
        ch = msg[i];
        if (ch >= 'a' && ch <= 'z') {
            if (i % 3 == 0) {
                ch = ch + key;
                if (ch > 'z') {
                    ch = ch - 'z' + 'a' - 1;
                }
            } else {
                ch = ch - key;
                if (ch < 'a') {
                    ch = ch + 'z' - 'a' + 1;
                }
            }
            msg[i] = ch;
        }
    }
    printf("Encrypted message: %s\n", msg);
    return 0;
}
