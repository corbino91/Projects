#include "Product.h"
#include <vector>

class Inventory
{
protected:
	vector<Product> inventory;
	double sum;

	// helpers
	int getPos(string id)
	{
		string newId = "";
		for (int i = 0; i < inventory.size(); i++)
		{
			newId = (inventory.at(i)).getId();
			if (newId == id)
				return i;
		}

		return -1;
	}

public:
	Inventory()
	{
	}

	~Inventory()
	{
	}

	// setters
	

	// getters
	double getSum() { return sum; }

	// primary functions
	void addProduct(string n, double p, int q)
	{
		Product p1(n, p, q);
		inventory.push_back(p1);
		sum += p *q;
	}

	void removeProduct(string n, double p, int q)
	{
		int pos = getPos(n);
		if (pos != -1)
			inventory.erase(inventory.begin() + pos);
		else
			cout << "That isn't a valid product." << endl;
		sum -= p;
	}

	void sellProduct(string n, int num)
	{
		int pos = getPos(n);
		inventory.at(pos).sell(num);
		sum -= inventory.at(pos).getPrice();
	}

	void stockProduct(string n, int num)
	{
		int pos = getPos(n);
		inventory.at(pos).stock(num);
		sum += (inventory.at(pos).getPrice()) * num;
	}

	void printProducts()
	{
		cout << "\nName\tPrice\tOn hand\t Total" << endl;
		cout << "-------------------------------" << endl;

		for(int i = 0; i < inventory.size(); i++) 
		{
    		cout << inventory.at(i).getId() << "\t";
    		cout << "$" << inventory.at(i).getPrice() << "\t";
    		cout << inventory.at(i).getQuantity() << "\t";
    		cout << "$" << inventory.at(i).getPrice() * inventory.at(i).getQuantity() << endl;
		}
		cout << "-------------------------------" << endl;
		cout << "Inventory Value:\t$" << sum << endl;
		cout << endl;
	}
	
};

int main()
{
	Inventory mart;

	mart.addProduct("ham", 12.52, 4);
	mart.addProduct("bread", 3.25, 4);
	mart.addProduct("eggs", 1.25, 36);
	//mart.removeProduct("bread", 3.25, 4);

	mart.printProducts();

	//cout << mart.getSum() << endl;
	//p1.toString();
}