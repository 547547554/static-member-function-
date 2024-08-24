#include<iostream>
using namespace std;

class Customer
{
  string name;
  int acc_no, balance;
  static int total_cutomer;
  static int total_balance;
   
   public:
  Customer(string name, int acc_no, int balance)
  {
    this->name=name;
    this->acc_no=acc_no;
    this->balance=balance;;
    total_cutomer++;
    total_balance+=balance;
    
  }
  static void assestatic()
  {
    cout<<"Total number of customer "<<total_cutomer<<endl;
       cout<<"Total balance : "<<total_balance<<endl;
  }

  void diposit(int amount)
  {
    if (amount>0)
    {
        balance+=amount ;
        total_balance+=amount;
    }
  }

  void withdraw(int amount)
  {
    if (amount<=balance&&amount>0)
    {
        balance-=amount;
        total_balance-=amount;
    }
  }

  void display()
  {
    cout<<name <<" " <<acc_no<<" " <<balance<<" "<<total_cutomer<<endl;
  }
  void display_total()
  {
    cout<<total_cutomer<<endl;
  }
};

int Customer :: total_cutomer=0;
int Customer :: total_balance=0;

int main ()
{
    Customer A1("Rakesh",1,1000);
    Customer A2("Rajesh",2,2000);
    Customer A3("jagesh",3,3000);
    Customer::assestatic();
    // A1.display_total();
    A1.diposit(800);
    A2.withdraw(2000);
    Customer::assestatic();

}