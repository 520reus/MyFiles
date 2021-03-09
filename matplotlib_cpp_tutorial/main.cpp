#include<iostream>
#include "matplotlibcpp.h"
namespace plt = matplotlibcpp;

using std::cout;
using std::endl;


int main()
{
    plt::plot({1,3,2,4,6.7,5});
    plt::show();
    return 0;
}
