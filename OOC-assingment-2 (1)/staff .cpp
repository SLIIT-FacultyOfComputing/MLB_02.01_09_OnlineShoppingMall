/*IT21080258 GamageK.M.
MLB_02.01_09*/
#include "staff.h"
#include <iostream>
#include <cstring>
using namespace std;

void staff::setstaffDetail(int SID, const char stName[], int stAge, const char post[], double stSalary){
  staffID = SID;
  strcpy(name,stName);
  age = stAge;
  strcpy(position,post);
  salary = stSalary;
}