#include <iostream>
#include <string>
#include "Category.h"
using namespace std;

int main()
{
	Product pr;
	string nameCategory;
	cout << "Enter name category:";
	getline(cin, nameCategory);
	bool isActive;
	cout << "Is active(0 - false, 1 - true)";
	cin >> isActive;
	Category category(nameCategory, isActive);
	int size;
	cout << "How many products?";
	cin >> size;
	for (size_t i = 0; i < size; i++)
	{
		string title;
		int price;
		int id;
		cout << "Enter id:";
		cin >> id;
		cin.ignore('\n', 10);
		cout << "Enter title: ";
		getline(cin, title);
		cout << "Enter price: ";
		cin >> price;
		if (!category.addProduct(id, title, price))
		{
			i--;
		}
	}
	category.showProducts();
	cout << "Enter ID for remove: ";
	int id;
	cin >> id;
	category.deleteProductById(id);
	category.showProducts();


	return 0;
}