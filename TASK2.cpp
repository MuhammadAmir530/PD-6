#include <iostream>
using namespace std;
float percentage;
float calculateaverage(float eng,float math,float chem,float soc,float bio)
{   
   percentage=(eng+math+chem+soc+bio)/5;
   return percentage;
}
string calculateGrade(float percentage)
{   string grade;
  if (percentage>=90 && percentage<=100)
  {
     grade="A+";
     return grade;
  }
  else if (percentage>=80 && percentage<90)
  {
     grade="A";
     return grade;
  }
  else if (percentage>=70 && percentage<80)
  {
     grade="B+";
     return grade;
  }
  else if (percentage>=60 && percentage<70)
  {
     grade="B";
     return grade;
  }
  else if (percentage>=50 && percentage<=60)
  {
     grade="C";
     return grade;
  }
  else if (percentage>=40 && percentage<50)
  {
     grade="D";
     return grade;
  }
  else if (percentage<40 && percentage>=0)
  {
     grade="F";
     return grade;
  }
  
}
main()
{  float eng, math, chem, soc, bio;string name;
  cout<<"Enter student name: ";
  cin>>name;
  cout<<"Enter marks for English: ";
  cin>>eng;
  cout<<"Enter marks for Math: ";
  cin>>math;
  cout<<"Enter marks for Chemistry: ";
  cin>>chem;
  cout<<"Enter marks for Social Science: ";
  cin>>soc;
  cout<<"Enter marks for Biology: ";
  cin>>bio;
  float percentage= calculateaverage(eng, math, chem, soc,bio);
   string grade=calculateGrade(percentage);
  cout<<"Student Name: "<<name<<endl;
  cout<<"Percentage :"<<percentage<<"%"<<endl;
  cout<<"Grade :"<<grade;

}