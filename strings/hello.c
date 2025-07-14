#include <stdio.h>

int main() 
{
    char name[100];

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);  // Reads including spaces

    printf("Hello %s", name);

    return 0;
}

