#include <iostream>
#include <cmath>

using namespace std;

int main() {
  cout << "#7:-> Write a program to calculate"<<endl;
  cout << "i.	(a+b)2"<<endl;
  cout << "ii.	(a+b)3"<<endl;
  cout << "iii.	(a2-b2)"<<endl;
  cout << "\n=========================================================================================";
  cout << "\nProgram Start here:->" << endl;
  cout << "\n+++++++++++++++++++++";

  double a = 0, b = 0;
  cout << "Type a: ";
  cin >> a;

  cout << "Type b: "<<endl;
  cin >> b;


  cout << "i.	(a+b)2 ="<< pow(a+b,2) <<endl;
  cout << "ii.	(a+b)3 ="<< pow(a+b,3) <<endl;
  cout << "iii.	(a2-b2) ="<< pow(a,2)-pow(b,2) <<endl;

  return 0;
}




