#include <stdio.h>

int main(int argc, char *argv[])
{
    (void)argc;            // argc istifade  olunmur, amma compiler warning veresin de istifade etmek olar
    printf("%s\n", argv[0]); // argv[0] proqramın adını saxlayır, onu çap edirik
    return 0;               // proqram ugurla basa çatd
}

