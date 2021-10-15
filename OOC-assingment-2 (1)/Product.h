class Product
{
private:
int productID;
char productName[25];
char productBrand[15];
int Quantity;

public:
Product(int pID,const char pName[],const char pBrand[]);
void setQuantity(int Qty);
int getQuantity();
void displayDetails();
void updateDetails();
~Product();
};