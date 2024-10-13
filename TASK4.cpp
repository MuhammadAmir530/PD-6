#include <iostream>
using namespace std;
float Premium_Amount_due(char time_of_call,int minutes)
{   float amount;
   if(time_of_call=='n' || time_of_call=='N' )
    {
        amount=25;
    }
    if(time_of_call=='d' || time_of_call=='D' )
    { 
        amount=25;
    }
return amount;
}
float service_Amount_due(char time_of_call,int minutes)
{
   float amount;
   amount=10+((minutes-50)*.2);
   return amount;
}
main()
{  char service_code,time_of_call;int minutes;float Amount_Due;
    cout<<"Enter the service code (R/r for regular,P/p for premium); ";
    cin>>service_code;
    cout<<"Enter the number of minutes used: ";
    cin>>minutes;
    if(service_code=='p' || service_code=='P')
      {   cout<<"Enter the time of call: ";
          cin>>time_of_call;
           Amount_Due=Premium_Amount_due(time_of_call,minutes);
          cout<<"Service Type:Premium"<<endl;
          }
    if(service_code=='r' || service_code=='R')
      {   Amount_Due=service_Amount_due(time_of_call,minutes);
        cout<<"Service Type:Premium"<<endl;} 
          cout<<"Total Minutes Used: "<<minutes<<" minutes"<<endl;
          cout<<"Amount Due: $"<<Amount_Due;           



}