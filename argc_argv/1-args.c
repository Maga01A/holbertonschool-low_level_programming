#include <stdio.h>

int main(int argc, char *argv[])
{
    (void)argv;                 /* argv istifadə olunmur, warning verməsin deyə */
    printf("%d\n", argc - 1);   /* argc - 1 = istifadəçi tərəfindən verilən sözlərin sayı */
    return 0;                    /* proqram uğurla başa çatdı */
}
