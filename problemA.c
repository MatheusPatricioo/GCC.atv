#include <stdio.h>

    
    int palindromo (char*str, int size) {
        for(int i= 0; i < size /2; i++)
        if (str[i] != str[size - i - 1]) return 0;
        return 1;
    }

    int main() {
        char str [] = "ovo";
        if(palindromo(str, 3)) {
            printf("sim eh um palindromo");
        } else {
            printf("nao eh um palindromo");
        }

    return 0;
}