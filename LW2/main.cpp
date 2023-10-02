#include "include/decimal.h"

int main() {
    Decimal d0(5, 7);
    d0.print();

    Decimal dd("1");
    std::cout << std::endl;

    Decimal d1 = {1, 2, 3};

    ++d1;
    std::cout << "++d1  -- " << d1 << std::endl;

    d1++;
    std::cout << "d1++  -- " << d1 << std::endl;

    --d1;
    std::cout << "--d1 -- " << d1 << std::endl;

    d1--;
    std::cout << "d1--  -- " << d1 << std::endl;

    Decimal d2 = {4, 5, 6};
    std::cout << "d1 + d2  -- " << d1 + d2 << std::endl;
    std::cout << "d2 - dd  -- " << d2 - dd << std::endl;

    std::cout << "d2 > d1  -- " << (d2 > d1) << std::endl;
    std::cout << "d2 < d1  -- " << (d2 < d1) << std::endl;
    std::cout << "d2 == d1  -- " << (d2 == d1) << std::endl;

    Decimal d3 = d2;

    std::cout << "d2 == d3  -- " << (d2 == d3) << std::endl;




    return 0;
}