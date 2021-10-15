/*IT21080258 GamageK.M.
MLB_02.01_09*/
#include "supplier.h"
#include <iostream>
#include <cstring>
using namespace std;
void supplier::setsupplierDetails(int supID, const char supName[]){
  supID = supplierID;
  strcpy(supplierName,supName);
}  

