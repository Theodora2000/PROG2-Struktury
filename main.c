#include <stdio.h>
#include <math.h>
struct complex
{
    int real, img;
};
void vypis(struct complex *k){
    printf("%d + %di", k->real, k->img);
}
int main()
{
    struct complex a;

    a.real = 4;
    a.img=1;
    vypis(&a);

    return 0;
}