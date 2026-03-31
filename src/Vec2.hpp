#pragma once

#include <math.h>

class Vec2
{
  public:
    float x = 0;
    float y = 0;

    Vec2() = default;
    Vec2(float xin, float yin);

    bool operator ==(const Vec2 &rhs) const;
    bool operator !=(const Vec2 &rhs) const;

    Vec2 operator +(const Vec2 &rhs) const;
    Vec2 operator -(const Vec2 &rhs) const;
    Vec2 operator /(const float val) const;
    Vec2 operator *(const float val) const;

    void operator +=(const Vec2 &rhs);
    void operator -=(const Vec2 &rhs);
    void operator *=(const float val);
    void operator /=(const float val);

    float distance(const Vec2 &rhs) const;
    float angleTo(const Vec2 &rhs) const;
    // Distance from the origine to the current point
    float distanceFromOrigin() const;
    // Vec2  normilizeAlg(const Vec2 &) const;
};
