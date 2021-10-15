#include <iostream>
#include <cstring>
#include "staff.h"
#include "supplier.h"
#include "supplierDelivery.h"
#include "supplierPayment.h"
#include "supplierReturn.h"
#include "UnCustomer.h"
#include "Product.h"
#include "NewAccount.h"

using namespace std;

int main(){
  staff so1;
  supplier sup01;
  supplierDelivery sd01;
  supplierPayment sp01;
  supplierReturn sr01;
  
  so1.setstaffDetail(001, "John", 28, "Accountant", 80000.00);
  sup01.setsupplierDetails(001, "ABC supply");
  sd01.setSupplierDelivery(001, "01/10/2021", 002, 100);
  sp01.setpayDetails(001, 100000.00, 2500.00);
  sr01.setReturndetail(001, "01/10/2021", "05/10/2021", 001, 10);
  
  UnCustomer u01;
  Product p01;

  u01.setDetail("Saman", 001 , "0772279538", "22/08/1995","12,lake Rd, Kandy");
  p01.setDetails(001,"Leather Bat","SS",05);

 

  return 0; 

}

