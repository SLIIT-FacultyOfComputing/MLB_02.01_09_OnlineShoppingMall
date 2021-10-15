/*IT21080258 GamageK.M.
MLB_02.01_09*/
class supplierReturn{
  private:
    int returnID;
    char deliveryDate[10];
    char returnDate[10];
    int productID;
    int returnQuantity;
  public:
    void setReturndetail(int RID, const char delDate[], const char retDate[], int PID, int retQty);
};