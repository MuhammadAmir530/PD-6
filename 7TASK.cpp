#include <iostream>
using namespace std;
string studentstatus(int Exam_Hour,int Exam_Minutes,int Arrival_minutes,int Arrival_Hour)
{  string status;int eminutes;
      eminutes=Exam_Hour*60+Exam_Minutes;
    int Atotalminutes=Arrival_Hour*60+Arrival_minutes;
    if(eminutes==Atotalminutes)
        {  status="On time";}
    if(eminutes-Atotalminutes<30)
         {  int min=eminutes-Atotalminutes;
            status="On time \n"+to_string(min)+" minutes before the start"; }
     if(eminutes-Atotalminutes>30 && eminutes-Atotalminutes<60)
    {  int min=eminutes-Atotalminutes;
        status="Early \n"+to_string(min)+" minutes before the start";}
    if(eminutes-Atotalminutes>=60)
    {  int min=eminutes-Atotalminutes;

        status="Early \n"+to_string(min/60)+":"+to_string(min%60)+" hours before the start"; }  
    if(eminutes<Atotalminutes)
    {  int min=Atotalminutes-eminutes;
         status="Late \n"+to_string(min/60)+":"+to_string(min%60)+" minutes after the start"; }     
            return status;

}
main()
{  int Exam_Hour,Arrival_minutes,Exam_Minutes,Arrival_Hour;
   cout<<"Enter Exam Starting Time (hour):";
   cin>>Exam_Hour;
   cout<<"Enter Exam Starting Time (minutes):";
   cin>>Exam_Minutes;
   cout<<"Enter Student hour of arrival:";
   cin>>Arrival_Hour;
   cout<<"Enter Student minutes of arrival:";
   cin>>Arrival_minutes;
   string status =studentstatus(Exam_Hour,Exam_Minutes,Arrival_minutes,Arrival_Hour);
   cout<<status;
}