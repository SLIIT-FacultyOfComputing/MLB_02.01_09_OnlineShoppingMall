class NewAccount
{
private:
char customerName[30];
int customerId;
char customerEmail[40];
char Username[10];
char Password[10];
public:
NewAccount();
NewAccount(const char cname[],int cid,const char cmail[],const char uname[],const char pword[]);
void regisration();
void cancel();
~NewAccount();
};