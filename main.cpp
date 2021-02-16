#include <iostream>
#include <iomanip>
using namespace std;


double convertMilesToKm (double miles)
{
   int km = miles * 1.61;
   return km;
}

double convertKilometersToM (double kilometers)
{
  int m = kilometers * .621;
  return m;
}
int main() {

int miles;
int kilometers;
int input;

cout << setprecision (2) << fixed;

cout << "Please input\n";
cout << "   1 Convert miles to kilometers\n" << "   2 Convert kilometers to miles\n" << endl;
cin >> input;  

if (input == 1)
{
  cout << "Please input the miles to be converted\n" << endl;
  cin >> miles;
  kilometers = convertMilesToKm(miles);
  cout << miles << " miles = " << kilometers << " kilometers\n" << endl;

}

if (input == 2)

{
  cout << "Please input the kilometers to be converted\n" << endl;
  cin >> kilometers;
  miles = convertKilometersToM(kilometers);
  cout << kilometers << " kilometers = " << miles << " miles\n" << endl;


}




}