#include "my_library/my_library.hpp"

void MyLibrary::hello()
{
    std::cout << "Hello, world!" << std::endl;
}

double MyLibrary::square(double x)
{
    return boost::math::round(x * x);
}