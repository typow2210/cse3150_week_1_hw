#include <iostream>
#include "MathUtils.h"
#include "AdvancedMath.h"

int main(){
	std::cout << "Using square() with 9 as n, the result is: " << AdvancedMath::square(9) << std::endl;

	std::cout << "Using add() with 3 as a and 6 as b, the result is: " << MathUtils::add(3,6) << std::endl;

	std::cout << "Using multiply() with 3 as a and 6 as b, the result is: " << MathUtils::multiply(3,6) << std::endl;

	return 0; 
}

