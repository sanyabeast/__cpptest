#include <iostream>
#include "TestMathClass.h"
#define RETURN return 0

TestMathClass tmath;

std::string kek = "privet";

int main() {

	std::string bla_minus_1 = "privetulichki";
	std::string* bla_0;
	bla_0 = new std::string();
	// *bla_0 = "hi there";
	bla_0 = &bla_minus_1;

	bla_minus_1 = "privetiki privetiki";

	std::string bla_1 = "poshel ti kozel!";

    std::cout << tmath.add( 11, 12 ) << std::endl;

	std::cout << "-----------------------------------" << std::endl;

    std::cout << bla_0 << std::endl;
    std::cout << *bla_0 << std::endl;
    std::cout << &bla_0 << std::endl;

    std::cout << "-----------------------------------" << std::endl;

    std::cout << bla_1 << std::endl;
    // std::cout << *bla_1 << std::endl;
    std::cout << &bla_1 << std::endl;

    RETURN;
}