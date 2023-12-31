#pragma once

#include "figure.hpp"

class Octagon : public Figure {
public:
    Octagon() = default;
    Octagon(const Vector<Point>& points);
    Octagon(const Point&, const Point&, const Point&, const Point&, const Point&, const Point&, const Point&, const Point&);
    Octagon(const Octagon& other) noexcept;
    Octagon(Octagon&& other) noexcept;

    Octagon& operator = (const Octagon& other) noexcept;
    Octagon& operator = (Octagon&& move) noexcept;

    virtual ~Octagon() = default;
    
    virtual Point geometricCenter() const noexcept override;
    virtual double area() const noexcept override;

    virtual operator double() const override;

    bool operator == (const Octagon& other) const;
    bool operator != (const Octagon& other) const;

    friend std::istream& operator>>(std::istream&, Octagon&);
    friend std::ostream& operator<<(std::ostream&, const Octagon&);

private:
    bool checkOctagon(const Point&, const Point&, const Point&, const Point&, const Point&, const Point&, const Point&, 
        const Point&) noexcept;

};