#ifndef MY_LIBRARY_HPP
#define MY_LIBRARY_HPP

#include <iostream>
#include <boost/math/special_functions/round.hpp>

class MyLibrary
{
public:
    MyLibrary() {};
    virtual ~MyLibrary() {};

    void hello();
    double square(double x);
};

#endif