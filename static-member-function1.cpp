#include<iostream>
using namespace std;

class Customer
{
  string name;
  int acc_no, balance;
  static int total_cutomer;
   
   public:
  Customer(string name, int acc_no, int balance)
  {
    this->name=name;
    this->acc_no=acc_no;
    this->balance=balance;;
    total_cutomer++;
    
  }
  static void assestatic()
  {
    cout<<total_cutomer<<endl;
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

int main ()
{
    Customer A1("Rakesh",1,1000);
    Customer A2("Rajesh",2,2000);
    Customer A3("jagesh",3,3000);
    Customer::assestatic();
    A1.display_total();
}