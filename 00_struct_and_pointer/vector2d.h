#pragma once

typedef struct tagVECTOR2D
{
    float x;
    float y;
} VECTOR2D;

VECTOR2D AddVectors(const VECTOR2D* v1, const VECTOR2D* v2);
VECTOR2D SubtractVectors(const VECTOR2D* v1, const VECTOR2D* v2);
VECTOR2D ScaleVector(const VECTOR2D* v, float scalar);
float DotProduct(const VECTOR2D* v1, const VECTOR2D* v2);
void DumpVector(const VECTOR2D* v);
