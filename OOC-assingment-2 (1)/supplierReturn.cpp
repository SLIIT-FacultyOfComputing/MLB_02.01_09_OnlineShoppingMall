/*IT21080258 GamageK.M.
MLB_02.01_09*/
#include "supplierReturn.h"
#include <iostream>
#include <cstring>
using namespace std;

void supplierReturn::setReturndetail(int RID, const char delDate[], const char retDate[], int PID, int retQty){
  RID = returnID;
  strcpy(deliveryDate,delDate);
  strcpy(returnDate,retDate);
  PID = productID;
  retQty = returnQuantity;
}