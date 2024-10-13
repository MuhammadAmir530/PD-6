#include <iostream>
using namespace std;
float price(string name, string day, double quantity)
{
  
  if (!(day == "Sunday" || day == "Saturday"))
  {
    float banana=2.5,apple=1.2,orange=0.85,grapefruit=1.45,kiwi=2.7,pineapple=5.5,grapes=3.85;
    if(name=="banana")
    {return banana*quantity;}
    if(name=="apple")
    {return apple*quantity;}
    if(name=="orange")
    {return orange*quantity;}
    if(name=="grapefruit")
    {return grapefruit*quantity;}
    if(name=="kiwi")
    {return kiwi*quantity;}
    if(name=="pineapple")
    {return pineapple*quantity;}
    if(name=="grapes")
    {return grapes*quantity;}
  }
   else if ((day == "Sunday" || day == "Saturday"))
  {
    float banana=2.7,apple=1.25,orange=0.9,grapefruit=1.6,kiwi=3,pineapple=5.6,grapes=4.2;
    if(name=="banana")
    {return banana*quantity;}
    if(name=="apple")
    {return apple*quantity;}
    if(name=="orange")
    {return orange*quantity;}
    if(name=="grapefruit")
    {return grapefruit*quantity;}
    if(name=="kiwi")
    {return kiwi*quantity;}
    if(name=="pineapple")
    {return pineapple*quantity;}
    if(name=="grapes")
    {return grapes*quantity;}

  }
}
main()
{
  string name, day;
  double quantity;
  cout << "Enter the fruit name: ";
  cin >> name;
  cout << "Enter the day of the week: ";
  cin >> day;
  cout << "Enter the quantity: ";
  cin >> quantity;
  if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday" || day == "Saturday" || day == "Sunday")
  {
    float price1 = price(name, day, quantity);
    cout << price1;
  }
  else
    cout << "Error";
}
