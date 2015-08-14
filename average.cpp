#include "average.h"

average::average():avg(.0),count(.0){
}

void average::add_value(float val){
	count ++;
	this->avg = count == 1 ? (long double)val :
			((long double)(this->avg)*(long double)(count-1) + (long double)(val))/(long double)(count);
			//(this->avg*(count-1) + val)/count;
}

float average::get(){
	return (float)this->avg;
}

void average::reset(){
	this->avg = .0;
	this->count = .0;
}
