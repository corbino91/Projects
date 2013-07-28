#include <iostream>
#include <string>

using namespace std;

class Product
{
public:
	Product(string);
	~Product();
	void setQuantity(int);
	void setPrice(double);
	void setId(string);

	int getQuantity();
	double getPrice();
	string getId();

protected:
	int quantity;
	double price;
	string id;
};

Product::Product(string name)
{
	id = name;
}

Product::~Product()
{

}

// setters
void Product::setQuantity(int num)
{
	quantity = num;
}

void Product::setPrice(double p)
{
	price = p;
}

void Product::setId(string name)
{
	id = name;
}

// getters
int Product::getQuantity()
{
	return quantity;
}

double Product::getPrice()
{
	return price;
}

string Product::getId()
{
	return id;
}

int main()
{
	Product ham("test");

	//compute.setSpeed(25);
	cout << ham.getId() << endl;
}