#include <iostream>
#include <string>

using namespace std;

#ifndef PRODUCT_H
#define PRODUCT_H

class Product
{
protected:
	int quantity;
	double price;
	string id;

public:
	Product(string, double, int);
	~Product();

	// setters
	//void setQuantity(int);
	void setPrice(double);
	//void setId(string);

	// getters
	int getQuantity() { return quantity; }
	double getPrice() { return price; }
	string getId() { return id; }

	// functions
	void sell(int num)
	{
		int remain = quantity - num;

		if (remain >= 0)
			quantity = remain;
		else
			cout << "You don't have that many items in stock" << endl; 
	}

	void stock(int num)
	{
		quantity += num;
	}

	void toString()
	{
		cout << "Name: " << getId() << endl;
		cout << "Price: $" << getPrice() << endl;
		cout << "In stock: " << getQuantity() << endl;
	}

	};

#endif