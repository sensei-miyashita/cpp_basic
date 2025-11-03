#include <iostream>

#include "vector2d.h"

int main()
{
    Vector2D vec1(3.0f, 4.0f);
    Vector2D vec2(1.0f, 2.0f);

    Vector2D vec3 = vec1.add(vec2);
    Vector2D vec4 = vec1.subtract(vec2);

    std::cout << "Vector 1: (" << vec1.x << ", " << vec1.y << ")\n";
    std::cout << "Vector 2: (" << vec2.x << ", " << vec2.y << ")\n";
    std::cout << "Vector 3 (Addition): (" << vec3.x << ", " << vec3.y << ")\n";
    std::cout << "Vector 4 (Subtraction): (" << vec4.x << ", " << vec4.y << ")\n";

    return 0;
}