#include <iostream>
using namespace std;
int calculategame(string year,int holiday,int weekends)
{ float game;
   game=(48-weekends)*.75+weekends+holiday*.6666;
   if(year=="leap")
   {float increase=game*.15;
     game=increase+game;}
   return int(game);
}
main()
{ string year;
int holiday,weekends;
  cout<<"Enter year type: ";
  cin>>year;
  cout<<"Enter number of holiday: ";
  cin>>holiday;
  cout<<"Enter number of weekends: ";
  cin>>weekends;
  int number=calculategame(year,holiday,weekends);
  cout<<number;
  

}