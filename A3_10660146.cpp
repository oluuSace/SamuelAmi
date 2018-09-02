#include <iostream>
using namespace std;

// using if else to write the grading system in University Of Ghana

int main()
{
 int userInput;
  cout << "Please Enter Your Score To Determine Your Grade" << endl;
  cin >> userInput;

  if ( userInput >= 80 && userInput <= 100 ) {
    cout << " You Had Grade A " << endl;
  }

   else if (userInput >= 75 && userInput <= 79  ) {
    cout << " You Had Grade B+ " << endl;
   }

   else if (userInput >= 70 && userInput <= 74) {
    cout << " You Had Grade B " <<endl;
   }
   else if (userInput >= 65 && userInput <= 69) {
    cout << "You had C+" <<endl;
   }
    else if (userInput >= 60 && userInput <= 64) {
        cout << "You had C " << endl;
    }
    else if (userInput >= 55 && userInput <= 59) {
        cout << " You had D+ " << endl;
    }
    else if (userInput >= 50 && userInput <= 54) {
        cout << "You had D " <<endl;
    }
    else if (userInput >= 45 && userInput <= 49) {
        cout << "You had E" << endl;
    }
    if (userInput >= 0 && userInput <= 44) {
        cout << "You had F " << endl;
    }
     return 0 ;

}
