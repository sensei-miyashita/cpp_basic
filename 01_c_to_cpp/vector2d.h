#pragma once

class Vector2D
{
public:
    float x;
    float y;

    // コンストラクタ
    Vector2D();
    Vector2D(float xVal, float yVal);

    // ベクトル演算関数
    Vector2D add(const Vector2D& other) const;
    void addInPlace(const Vector2D& other);
    
    Vector2D subtract(const Vector2D& other) const;
    void subtractInPlace(const Vector2D& other);
    
    Vector2D multiply(float scalar) const;
    void multiplyInPlace(float scalar);
    
    Vector2D divide(float scalar) const;
    void divideInPlace(float scalar);
    
    float dot(const Vector2D& other) const;
};