#include "Product.h"
#include <iostream>
#include <cstring>
using namespace std;

Product::Product(int pID,const char pName[],const char pBrand[])
{
productID = pID;
strcpy(productName, pName);
productBrand = pBrand;

}
void Product::setQuantity(int Qty)
{
}
int Product::getQuantity()
{
}
void Product::displayDetails()
{
}
void Product::updateDetails()
{
}
Product::~Product()
{
}