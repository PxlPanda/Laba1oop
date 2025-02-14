#include "utils.hpp"
#include <iostream>


int main(){
    double res1 = add(3.0,5.0);
    double res2 = subs(3.0,5.0);
    double res3 = mult(3.0,5.0);
    std::cout<< "results: \n"
             << "result of addiction  " << res1 << "\n"
             << "result of substraction  " << res2 << "\n"
             << "result of multiplying  "<< res3 << std::endl;
    return 0;
}