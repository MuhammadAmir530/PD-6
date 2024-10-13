#include <iostream>
using namespace std;
string decideActivity(string temp,string hum)
{   string act;
   if(temp=="warm" && hum=="dry")
   {  act="Play tennis";}
   if(temp=="warm" && hum=="humid")
   {  act="swim";}
   if(temp=="cold" && hum=="dry")
   {  act="Play basketball";}
   if(temp=="cold" && hum=="humid")
   {  act="Watch TV";}
   return act;
}
main()
{
    string temp,hum;
    cout<<"Enter temperature(warm or cold): ";
    cin>>temp;
    cout<<"Enter humidity(dry or humid): ";
    cin>>hum;
    string act=decideActivity(temp,hum);
    cout<<"Recommended activity: "<<act;

}