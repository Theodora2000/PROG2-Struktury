#include <stdio.h>
#include <math.h>
struct complex
{
    int real, img;
};

int main()
{
    struct complex a, b, c;

    printf("Enter a and b where a + ib is the first complex number.\n");
    scanf("%d%d", &a.real, &a.img);

    float koren, absolutna;

    koren = sqrt(pow(a.real, 2)+pow(a.img, 2));
    absolutna = abs(koren);

    printf("Absolutna hodnota: %.1f", absolutna);

    return 0;
}