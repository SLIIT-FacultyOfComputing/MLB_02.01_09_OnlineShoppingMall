#include "NewAccount.h"
#include <iostream>
#include <cstring>
using namespace std;

NewAccount::NewAccount()
{
strcpy(customerName, " ");
customerId = 0;
strcpy(customerEmail, " ");
strcpy(Username, "");
strcpy(Password, "");
}
NewAccount::NewAccount(const char cname[],int cid,const char cmail[],const char uname[],const char pword[])
{

strcpy(customerName, cname);
customerId = cid;
strcpy(customerEmail, cmail);
strcpy(Username,uname);
strcpy(Password,pword);
}
void NewAccount::regisration()
{
}
void NewAccount::cancel()
{
}
NewAccount:: ~NewAccount()
{
}