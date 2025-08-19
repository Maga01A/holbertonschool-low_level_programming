#include <stdio.h>

int main(int argc, char *argv[])
{
    for (int i = 0; i < argc; i++)   /* i=0-dan başlayır, argv[0]=proqram adı */
    {
        printf("%s\n", argv[i]);     /* argv[i] = i-ci söz, hər sətri çap et */
    }
    return 0;                         /* proqram uğurla başa çatdı */
}
