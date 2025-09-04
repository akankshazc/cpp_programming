#include <iostream>
#include <functional>

auto main() -> int
{
    std::cout << std::plus<int>{}(1, 1.23) << '\n'; // enforces sum of two ints, so returns 2
    std::cout << std::plus<>{}(1, 1.23) << '\n';    // figures out the different types
}