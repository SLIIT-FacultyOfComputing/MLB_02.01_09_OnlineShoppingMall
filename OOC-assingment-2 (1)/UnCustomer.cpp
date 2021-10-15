#include "UnCustomer.h"
#include <iostream>
#include <cstring>
using namespace std;

UnCustomer::UnCustomer(const char Name[], int ID)
{
strcpy(customerName, Name);
customerID = ID;
}
void UnCustomer::setDetails(const char tNo,const char DOB,const char add)
{
}
int UnCustomer::getDetails()
{
}
void UnCustomer::displayDetails()
{
}

UnCustomer::~UnCustomer()
{
}