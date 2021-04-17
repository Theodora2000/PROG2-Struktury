#include <stdio.h>
#include <math.h>
struct complex
{
    int real, img;
};

int main()
{
    struct complex a,b,c;

    printf("Enter a and b where a + ib is the first complex number.\n");
    scanf("%d%d", &a.real, &a.img);
    printf("Enter a and b where a + ib is the first complex number.\n");
    scanf("%d%d", &b.real, &b.img);

   c.real = a.real+b.real;
   c.img = a.img + b.img;

    printf("%d + %d i", c.real, c.img);

    return 0;
}