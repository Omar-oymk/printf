#include "main.h"

int main(void)
{
    int x = 20;
    char* name = "Abdullah";
    char grade = 'A';
    int y = 32523;

    _printf("hi, %s,I am %d years old and I got %c.\n", name, x, grade);
    _printf("hex: %x\n", y);
}
