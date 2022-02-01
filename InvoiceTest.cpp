#include "Invoice.h"
#include <iostream>
#include <string>


void Invoice::set_partNumber(string pn)
{
	part_number = pn;
}

void Invoice::set_partDescription(string pd)
{
	part_description = pd;
}

void Invoice::set_quantity(int qy)
{
		quantity = qy;

}
void Invoice::set_Price(int p)
{
	Price = p;
}



string Invoice::get_partNumber()
{
	return part_number;
}
string Invoice::get_partDescription()
{
	return part_description;
}
int Invoice::get_quantity()
{
	return quantity;
}
int Invoice::get_Price()
{
	return Price;
}
int Invoice::getInvoiceAmount()
{
	if (quantity<0)
	{
		quantity = 0;
		return quantity * Price;
	}
	else if (Price < 0)
	{
		Price = 0;
		return quantity * Price;
	}
	else
	{
		return quantity * Price;
	}
	
}
