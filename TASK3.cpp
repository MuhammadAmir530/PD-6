#include <iostream>
using namespace std;
string findZodaicSign(int day,string month)
{ string sign;
  if((day>=21 && month=="March") || (day<=19 && month=="April"))
   {sign="Aries";}
   if((day>=20 && month=="April") || (day<=20 && month=="May"))
   {sign="Taurus";}
   if((day>=21 && month=="May") || (day<=20 && month=="June"))
   {sign="Gemini";}
   if((day>=21 && month=="June") || (day<=22 && month=="July"))
   {sign="Cancer";}
   if((day>=23 && month=="July") || (day<=22 && month=="August"))
   {sign="Leo";}
   if((day>=23 && month=="August") || (day<=22 && month=="September"))
   {sign="Virgo";}
   if((day>=23 && month=="September") || (day<=22 && month=="October"))
   {sign="Libra";}
   if((day>=23 && month=="October") || (day<=21 && month=="November"))
   {sign="Scorpio";}
   if((day>=22 && month=="November") || (day<=21 && month=="December"))
   {sign="Sagittarius";}
   if((day>=22 && month=="December") || (day<=19 && month=="January"))
   {sign="Capricorn";}
   if((day>=20 && month=="January") || (day<=18 && month=="February"))
   {sign="Aquarius";}
   if((day>=19 && month=="February") || (day<=20 && month=="March"))
   {sign="Pisces";}
   return sign;



}
main()
{ int day;string month;
 cout<<"Enter the day of birth: ";
 cin>>day;
 cout<<"Enter the month of birth: ";
 cin>>month;
 string sign=findZodaicSign(day,month);
 cout<<"Zodaic Sign: "<<sign;

}