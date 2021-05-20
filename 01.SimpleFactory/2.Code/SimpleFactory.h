#ifndef __SIMPLE_FACTORY__
#define __SIMPLE_FACTORY__7\(^o^)/~23 

#include <iostream>
#include <string.h>
using namespace std;

//AbstractProduct
class AbstractSportProduct
{
public:
	AbstractSportProduct(){

	}
	virtual ~AbstractSportProduct(){}
    //抽象方法
	virtual void printName(){};
	virtual void play(){};
};

//Basketball
class Basketball :public AbstractSportProduct
{
public:
	Basketball(){
		printName();
		play();
	}
	~Basketball()
	{

	}

	void printName(){
		printf("Jungle get Basketball\n");
	}
	void play(){
		printf("Jungle play Basketball\n");
	}
};

//Football
class Football :public AbstractSportProduct
{
public:
	Football(){
		printName();
		play();
	}
	~Football()
	{

	}

	void printName(){
		printf("Jungle get Football\n");
	}
	void play(){
		printf("Jungle play Football\n");
	}
};

//Volleyball
class Volleyball :public AbstractSportProduct
{
public:
	Volleyball(){
		printName();
		play();
	}
	~Volleyball()
	{
		
	}

	void printName(){
		printf("Jungle get Volleyball\n");
	}
	void play(){
		printf("Jungle play Volleyball\n");
	}
};

class Factory
{
public:
	AbstractSportProduct *getSportProduct(string productName)
	{
		AbstractSportProduct *pro = NULL;
		if (productName == "Basketball"){
			pro = new Basketball();
		}
		else if (productName == "Football"){
			pro = new Football();
		}
		else if (productName == "Volleyball"){
			pro = new Volleyball();
		}
		return pro;
	}
};


#endif //__SIMPLE_FACTORY__