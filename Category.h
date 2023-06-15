#pragma once
#include <iostream>
#include "Product.h"

class Category
{
	std::string name;
	bool isActive;
	Product* products;
	
	bool isExistProduct(int id)
	{
		if (products != nullptr)
		{
			for (int i = 0; i < Product::getCountProduct(); i++)
			{
				if (products[i].id == id)
				{
					return true;
				}
			}
		}
		return false;
	}

public:
	Category(std::string name, bool isActive)
	{
		this->name = name;
		this->isActive = isActive;
		this->products = nullptr;
	}
	bool addProduct(int id,std::string name, int price)
	{
		if (isExistProduct(id))
		{
			std::cout << "Duplicate id\n";
			return false;
		}
		int size = Product::getCountProduct();
		Product::countProduct++;
			//������� �������� ��
			Product* temp = new Product[size + 1];
			for (size_t i = 0; i < size; i++)
			{
				temp[i].setId(products[i].getId());
				temp[i].setPrice(products[i].getPrice());
				temp[i].setName(products[i].getName());
			}
			temp[size].setId(id);
			temp[size].setPrice(price);
			temp[size].setName(name);
			if (products != nullptr)
			{
				delete[] products;
			}
			products = temp;
			return true;
	}

	void deleteProductById(int id)
	{
		if (isExistProduct(id))
		{
			Product* temp = new Product[Product::getCountProduct() - 1];
			int j = 0;
			for (int i = 0; i < Product::getCountProduct(); i++)
			{
				if (products[i].id != id)
				{
					temp[j].setId(products[i].id);
					temp[j].setPrice(products[i].price);
					temp[j].setName(products[i].name);
					j++;
				}
			}
			Product::countProduct--;
			delete[] products;
			products = temp;
		}
	}

	void showProducts()
	{
		if (products != nullptr)
		{
			for (int i = 0; i < Product::getCountProduct(); i++)
			{
				products[i].print();
			}
		}
	}

	~Category()
	{
		if (products != nullptr)
			delete[] products;
	}
};

