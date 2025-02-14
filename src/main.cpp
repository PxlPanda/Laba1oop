#include "utils.hpp"
#include <iostream>


int main(){
    double res1 = add(3.0,5.0);
    double res2 = subs(3.0,5.0);
    double res3 = mult(3.0,5.0);
    int res4 = square(3);
    int res5 = square(5);
    std::cout<< "results: \n"
             << "res of addiction  " << res1 << "\n"
             << "res of substraction  " << res2 << "\n"
             << "res of multiplying  "<< res3 << "\n"
             << "res of squaring a  "<< res4 << "\n"
             << "res of squaring b  "<< res5 << std::endl;
    return 0;
}