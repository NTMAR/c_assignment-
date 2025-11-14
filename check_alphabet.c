//Q.47.Write a program to determine whether the input character is in upper
//case/lower case/numeric/alphabate/punctuation ? 
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("The character is an UPPERCASE letter.\n");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("The character is a LOWERCASE letter.\n");
    }
    else if (ch >= '0' && ch <= '9') {
        printf("The character is NUMERIC.\n");
    }
    else if ((ch >= 33 && ch <= 47) ||   // punctuation ! " # $ % & ' ( ) * + , - . /
             (ch >= 58 && ch <= 64) ||   // punctuation : ; < = > ? @
             (ch >= 91 && ch <= 96) ||   // punctuation [ \ ] ^ _ `
             (ch >= 123 && ch <= 126)) { // punctuation { | } ~
        printf("The character is PUNCTUATION or SPECIAL SYMBOL.\n");
    }
    else {
        printf("The character is UNKNOWN or WHITESPACE.\n");
    }

    return 0;
}
