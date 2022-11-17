#include <iostream>

using namespace std;

int main()
{
   int coursework;
   int Finalexam;
   int sum;
   int grade;

       cout << "enter the course work total marks";
       cin >>coursework;

       cout << "enter final exam marks";
       cin >>Finalexam;

       sum=coursework+Finalexam;
        cout << "total marks"<<sum<<endl;
    if (sum <40)
     {cout << "you have failed";
     }
    if (sum>=40)
  {
    if (coursework<15)
  {
      printf("you did not meet passmark");

  }
  if (Finalexam<15)
  {
      printf("you did not meet passmark");

  }
  }
    cout<< "please enter total marks";
    cin>> grade;

    if ((grade>=70) && (grade<=100))
    {
        cout << "your grade is :"<<"A";
    }
     else if((grade>=60) && (grade<70))
    {
        cout << "your grade is :"<<"B";
    }

    else if ((grade>=50) && (grade<60))
    {
        cout << "your grade is :"<<"c";
    }
    else if((grade>=40) && (grade<50))
    {
        cout << "your grade is :"<<"D";
    }
    else if((grade>0) && (grade<40))
    {
        cout << "your grade is :"<<"F";
    }
    return 0;
}
