/*IT21080258 GamageK.M.
MLB_02.01_09*/
#include "supplierDelivery.h"
#include <iostream>
#include <cstring>
using namespace std;

void supplierDelivery::setSupplierDelivery(int DID, const char dDate[], int PID, int qty){
    DID = deliveryID;
    strcpy(deliveryDate,dDate);
    PID = productID;
    quantity = qty; 
}