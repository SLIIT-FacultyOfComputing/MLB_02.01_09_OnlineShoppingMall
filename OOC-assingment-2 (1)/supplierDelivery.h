/*IT21080258 GamageK.M.
MLB_02.01_09*/
class supplierDelivery{
  private:
    int deliveryID;
    char deliveryDate[10];
    int productID;
    int quantity;
  
  public:
    void setSupplierDelivery(int DID, const char dDate[], int PID, int qty);
};