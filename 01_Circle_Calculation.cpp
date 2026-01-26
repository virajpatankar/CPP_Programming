#include<iostream>
#include<conio.h>
using namespace std;

class Circle
{


    public :

          float Rad,Area,Circum;   /// Data Member

          Circle()          /// Default Constructor
          {
              Rad = Area = Circum = 0.0;
              cout << "\n Inside Default Constructor." << endl;
          }

          /// Member Function
          void Accept_Radius()
          {

              cout << "\n Enter a Radius : ";
              cin  >> Rad;

          }

          void Area_of_Circle()
          {

              Area = 3.14 * Rad * Rad;
              cout << "\n Area Calculated." << endl;

          }

           void Circumference_of_Circle()
           {
               Circum = 2 * 3.14 * Rad;
               cout << "\n Circumference Calculated." << endl;
           }

           void Display_Details()
           {

               cout << "\n =============== ***** ======================= \n";

               cout << "\n Radius of circle     : " << Rad;
               cout << "\n Area of circle     : " << Area;
               cout << "\n Circumference of circle     : " << Circum;

               cout << "\n ============== ***** ======================== \n ";

            }
};

int main()
{

        Circle Cir1;  /// Object Created With Default Constructor

       getch();
       Cir1.Display_Details();

       Cir1.Accept_Radius();
       Cir1.Circumference_of_Circle();
       Cir1.Area_of_Circle();

       getch();
       Cir1.Display_Details();

       getch();
       return 0;
}
