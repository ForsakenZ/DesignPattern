#include <iostream>
#include "SimpleFactory.h"

int main()
{
	printf("简单工厂模式\n");
	
	//创造工厂对象
	Factory *fac = new Factory();
	AbstractSportProduct *product = NULL;

	product = fac->getSportProduct("Basketball");
	if (product) {
		delete product;
	}

	product = fac->getSportProduct("Football");
	if (product) {
		delete product;
	}

	product = fac->getSportProduct("Volleyball");	
	if (product) {
		delete product;
	}

	delete fac;
	return 0;
}