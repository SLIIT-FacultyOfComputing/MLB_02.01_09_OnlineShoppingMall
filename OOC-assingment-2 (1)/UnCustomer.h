class UnCustomer
{
private:
char customerName[20];
int customerID;
char customerTelNo[10];
char CustomerDOB[12];
char customerAddress[50];

public:
UnCustomer(const char Name[], int ID);
void setDetails(const char tNo,const char DOB,const char add);
int getDetails();
void displayDetails();
~UnCustomer();
};