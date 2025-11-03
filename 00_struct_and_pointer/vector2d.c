#include <stdio.h>

#include "vector2d.h"

VECTOR2D AddVectors(const VECTOR2D* v1, const VECTOR2D* v2)
{
    VECTOR2D result;
    result.x = v1->x + v2->x;
    result.y = v1->y + v2->y;
    return result;
}

VECTOR2D SubtractVectors(const VECTOR2D* v1, const VECTOR2D* v2)
{
    VECTOR2D result;
    result.x = v1->x - v2->x;
    result.y = v1->y - v2->y;
    return result;
}

VECTOR2D ScaleVector(const VECTOR2D* v, float scalar)
{
    VECTOR2D result;
    result.x = v->x * scalar;
    result.y = v->y * scalar;
    return result;
}

float DotProduct(const VECTOR2D* v1, const VECTOR2D* v2)
{
    return (v1->x * v2->x) + (v1->y * v2->y);
}

void DumpVector(const VECTOR2D* v)
{
    printf("Vector2D(x: %.2f, y: %.2f)\n", v->x, v->y);
}
