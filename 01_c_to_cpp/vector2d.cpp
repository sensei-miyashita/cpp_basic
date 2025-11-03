#include "vector2d.h"

// コンストラクタの実装
Vector2D::Vector2D() : x(0), y(0)
{
}

Vector2D::Vector2D(float xVal, float yVal) : x(xVal), y(yVal)
{
}

// ベクトル加算（新しいベクトルを返す）
Vector2D Vector2D::add(const Vector2D& other) const
{
    return Vector2D(x + other.x, y + other.y);
}

// ベクトル加算（自分自身を変更）
void Vector2D::addInPlace(const Vector2D& other)
{
    x += other.x;
    y += other.y;
}

// ベクトル減算（新しいベクトルを返す）
Vector2D Vector2D::subtract(const Vector2D& other) const
{
    return Vector2D(x - other.x, y - other.y);
}

// ベクトル減算（自分自身を変更）
void Vector2D::subtractInPlace(const Vector2D& other)
{
    x -= other.x;
    y -= other.y;
}

// スカラー倍（新しいベクトルを返す）
Vector2D Vector2D::multiply(float scalar) const
{
    return Vector2D(x * scalar, y * scalar);
}

// スカラー倍（自分自身を変更）
void Vector2D::multiplyInPlace(float scalar)
{
    x *= scalar;
    y *= scalar;
}

// スカラー除算（新しいベクトルを返す）
Vector2D Vector2D::divide(float scalar) const
{
    return Vector2D(x / scalar, y / scalar);
}

// スカラー除算（自分自身を変更）
void Vector2D::divideInPlace(float scalar)
{
    x /= scalar;
    y /= scalar;
}

// 内積計算
float Vector2D::dot(const Vector2D& other) const
{
    return x * other.x + y * other.y;
}