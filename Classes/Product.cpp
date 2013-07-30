#include "Product.h"

// constructor
Product::Product(string name, double cost, int num)
{
	id = name;
	price = cost;
	quantity = num;
}

// destructor
Product::~Product()
{

}

// setters
/*void Product::setQuantity(int num)
{
	quantity = num;
}*/

void Product::setPrice(double p)
{
	price = p;
}

/*void Product::setId(string name)
{
	id = name;
}*/