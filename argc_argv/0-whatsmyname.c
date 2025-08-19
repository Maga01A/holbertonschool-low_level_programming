#include <stdio.h>

int main(int argc, char *argv[])
{
    (void)argc;  /* argc istifadə olunmur, warning verməmək üçün */
    printf("%s\n", argv[0]);  /* argv[0] proqramın adını saxlayır və çap edirik */
    return 0;  /* proqram uğurla başa çatdı */
}

