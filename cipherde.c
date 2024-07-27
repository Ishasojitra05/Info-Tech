#include<stdio.h>
int main() {
    char message[100], ch;
    int i, key;
    printf("Enter a message to decrypt: ");
    scanf("%s", message); 
    printf("Enter key: ");
    scanf("%d", &key);
    key = key % 26;
    for (i = 0; message[i] != '\0'; ++i) {
        ch = message[i];
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - key;
            if (ch > 'z') {
                ch = ch - 'z' + 'a' - 1;
            }
            message[i] = ch;
        } 
    }
    printf("Encrypted message: %s\n", message);
    return 0;
}
