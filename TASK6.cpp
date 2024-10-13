#include <iostream>
using namespace std;
string price(string month,int numberofstays)
{ 
    float total1,total2;string rate;
  float may=65,june=68.7,july=77;
  if (month=="May" || month=="October")
   {total1=may*numberofstays;
    total2=50*numberofstays; }
   if (month=="June" || month=="September")
   { total1=june*numberofstays;
     total2=75.2*numberofstays; }
   if (month=="July" || month=="August")
   {total1=july*numberofstays;
     total2=76*numberofstays; }
   if(numberofstays>14)
   {
    float discount=total1*.1;
    total1=total1-discount;
   }
  if((month=="May" || month=="October") )
  {  
    if(numberofstays>7 && numberofstays<=14 )
        {total2=total2-(total2*.05);} 
      else if(numberofstays>14)
      { total2=total2-(total2*0.3);}
      }
    if((month=="June" || month=="September") )
  {  if(numberofstays>14)
        {float total2=total2-(total2*0.2);} }
   return "Appartment:"+to_string(total1)+"$\nStudio:"+to_string(total2)+"$";


}
main()
{ string month;int numberofstays;
cout<<"Enter the month: ";
cin>>month;
cout<<"Enter the number of stays: ";
cin>>numberofstays;
string rate=price(month,numberofstays);
cout<<rate;
}