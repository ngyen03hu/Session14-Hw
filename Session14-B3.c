#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    int i = 0;
    while (str[i] != '\0') {
        i++;
	}		
    for (i = i - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}

