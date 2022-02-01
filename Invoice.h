#pragma once
#include <iostream>
#include <string>
using namespace std;
class Invoice
{
private:
	string part_number;
	string part_description;
	int quantity;
	int Price;
public:

	Invoice(string pn,string pd, int qy,int p)
	{
		part_number = pn;
		part_description = pd;
		quantity = qy;
		Price = p;
	}

	void set_partNumber(string a);
	void set_partDescription(string b);
	void set_quantity(int c);
	void set_Price(int d);
	void fill(Invoice[]);
	void print(Invoice[]);
	

	string get_partNumber();
	string get_partDescription();
	int get_quantity();
	int get_Price();
	int getInvoiceAmount();

};

