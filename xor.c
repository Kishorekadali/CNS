#include <stdio.h>
#include <string.h>

int main() 
{ 
    char str[] = "Hello World"; 
    char str1[12];  // Increased size to 12 to include null terminator
    int i, len; 
    len = strlen(str); 
    for (i = 0; i < len; i++) 
    { 
        str1[i] = str[i] ^ 0;  // XOR with 0 is redundant, but kept as per the original logic
        printf("%c", str1[i]); 
    } 
    str1[len] = '\0';  // Adding null terminator
    printf("\n"); 
    return 0; 
}