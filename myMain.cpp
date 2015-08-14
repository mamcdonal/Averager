#include <iostream>
#include <iomanip>
#include "average.h"

int main(){
	average myAvg;
	std::cout << std::setprecision(16);

	unsigned long long numIts = 0;
	unsigned long long maxIts = 1000000;

	// find the precision limit of our averager
	while (numIts < maxIts){

		numIts*=2;

		for (int i=0; i<=numIts; i++){
			myAvg.add_value(float(i));
		}

		if (myAvg.get() - float(numIts)/2.0 != 0.0){
			std::cout << "Limit of precision found at: " << numIts << std::endl;
			std::cout << "Recursive Average is: " << myAvg.get() << std::endl;
			std::cout << "Actual Average is: " << float(numIts)/2.0 << std::endl;
			break;
		}
	}

	std::cout << "Recursive Average is: " << myAvg.get() << std::endl;
	std::cout << "Actual Average is: " << float(numIts)/2.0 << std::endl;
	std::cout << "Error at "<< maxIts << ": " << myAvg.get() - float(numIts)/2.0 << std::endl;


	return 0;
}
