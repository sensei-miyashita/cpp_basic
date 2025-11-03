#pragma once

class Vector2D
{
    float x;
    float y;

    Vector2D() : x(0), y(0)
    {
    }
    Vector2D(float xVal, float yVal) : x(xVal), y(yVal)
    {
    }

    Vector2D operator+(const Vector2D& other) const
    {
        return Vector2D(x + other.x, y + other.y);
    }
    Vector2D& operator+=(const Vector2D& other)
    {
        x += other.x;
        y += other.y;
        return *this;
    }

    Vector2D operator-(const Vector2D& other) const
    {
        return Vector2D(x - other.x, y - other.y);
    }
    Vector2D& operator-=(const Vector2D& other)
    {
        x -= other.x;
        y -= other.y;
        return *this;
    }

    Vector2D operator*(float scalar) const
    {
        return Vector2D(x * scalar, y * scalar);
    }
    Vector2D& operator*=(float scalar)
    {
        x *= scalar;
        y *= scalar;
        return *this;
    }

    Vector2D operator/(float scalar) const
    {
        return Vector2D(x / scalar, y / scalar);
    }
    Vector2D& operator/=(float scalar)
    {
        x /= scalar;
        y /= scalar;
        return *this;
    }

    float dot(const Vector2D& other) const
    {
        return x * other.x + y * other.y;
    }
};