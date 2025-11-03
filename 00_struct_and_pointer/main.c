#include <stdio.h>

#include "vector2d.h"

int main()
{
    VECTOR2D v1 = {3.0f, 4.0f};
    VECTOR2D v2 = {1.0f, 2.0f};

    VECTOR2D sum = AddVectors(&v1, &v2);
    VECTOR2D diff = SubtractVectors(&v1, &v2);
    VECTOR2D scaled = ScaleVector(&v1, 2.0f);
    float dot = DotProduct(&v1, &v2);

    printf("Sum: ");
    DumpVector(&sum);
    printf("Difference: ");
    DumpVector(&diff);
    printf("Scaled v1: ");
    DumpVector(&scaled);
    printf("Dot Product: %.2f\n", dot);

    return 0;
}