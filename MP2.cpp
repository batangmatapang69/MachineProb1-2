/************************************************************************************************
Create a program that would compute the following values based on the given sides of the triangle.
Let the measurements of the sides be a user-input.
A. Compute for all interior angles.
B. Classify whether scalene, isosceles, or equilateral.
C. Determine the area and perimeter.
D. Classify whether acute triangle, right triangle, or obtuse triangle.
E. Compute for length of apothem and circumcenter.
************************************************************************************************/
#include <iostream>
#include <conio.h>
#include <cmath> // Header file for use of mathematical functions such as sin(x), cos(x), sqrt(x), etc.
using namespace std; // Invalidates the need to include an "std::" prefix
int main()
{
 double SideA, SideB, SideC, AngleA, AngleB, AngleC, PM, PM2, Area, Apothem, CC;
// Side# = Sides, Angle# = Angles, PM = Perimeter, PM2 = Half of Perimeter, Area = Area of Triangle, Apothem = Apothem, CC = Circumcenter
 const double pi = 3.141592653589793; // Constant declaration for the value of pi (16 decimal places to maximize double and for more accurate output of angle value [whole number!])
cout << "Enter the Triangle's Side A (largest): "; cin >> SideA; // Accepts double inputvalue for Side A
cout << "Enter the Triangle's Side B (smallest): "; cin >> SideB; // Accepts double input value for Side B
cout << "Enter the Triangle's Side C (medium): "; cin >> SideC; // Accepts double input value for Side C
AngleA = ((acos((pow(SideB, 2) + pow(SideC, 2) - pow(SideA, 2)) / (2 * SideB * SideC))) *
(180)) / pi; // Formula to calculate the angle of point A given all three sides (in degrees)
 AngleB = ((acos((pow(SideC, 2) + pow(SideA, 2) - pow(SideB, 2)) / (2 * SideC * SideA))) *
(180)) / pi; // Formula to calculate the angle of point B given all three sides (in degrees)
 AngleC = ((acos((pow(SideA, 2) + pow(SideB, 2) - pow(SideC, 2)) / (2 * SideA * SideB))) *
(180)) / pi; // Formula to calculate the angle of point C given all three sides (in degrees)
cout << "\n" << "The Angle of Point A is: " << AngleA << "\n"
<< "The Angle of Point B is: " << AngleB << "\n"
<< "The Angle of Point C is: " << AngleC << "\n"
<< "\n" << "Triangle's Interior Angle is: " << AngleA + AngleB + AngleC << "\n"
<< "\n" << "Classification (based on Sides): ";
if (SideA == SideB && SideB == SideC) {
 cout << "Equilateral Triangle" << "\n"; // Displays when ALL sides are equal
}
 else if (SideA == SideB || SideA == SideC || SideC == SideB) {
 cout << "Isosceles Triangle" << "\n"; // Displays when two sides are equal
 }

 else 
 {
 cout << "Scalene Triangle" << "\n"; // Displays when ALL sides are not equal
 }
 PM = SideA + SideB + SideC; // Formula to calculate the perimeter of the triangle (sum of all sides)
 PM2 = PM / 2; // Formula to calculate half of the perimeter to be used as a variable in the formula below
Area = sqrt(PM2 * (PM2 - SideA) * (PM2 - SideB) * (PM2 - SideC)); // Formula to calculate the area of the triangle given all three sides
 cout << "\n" << "Perimeter: " << PM << "\n" 
 << "\n" << "Area: " << Area << "\n"
<< "\n" << "Classification (based on angles): ";
if (AngleA < 90 && AngleB < 90 && AngleC < 90) {
cout << "Acute Triangle" << "\n"; // Displays if ALL angles are less than 90 degrees
}

 else if (AngleA > 90 && AngleB > 90 && AngleC > 90)
{
cout << "Obtuse Triangle" << "\n"; // Displays if an angle is greater than 90 degrees
}

 else {
cout << "Right Triangle" << "\n"; // Displays if an angle is equal to 90 degrees
}
Apothem = (2 * Area) / PM; // Formula to calculate the apothem of the triangle
CC = (SideA * SideB * SideC) / sqrt((SideA + SideB + SideC) * (SideB + SideC - SideA) *
(SideC + SideA - SideB) * (SideA + SideB - SideC)); // Formula to calculate the circumcenter of the triangle given all three sides
cout << "\n" << "Apothem: " << Apothem << endl
<< "\n" << "Circumcenter: " << CC;

 _getch();
 return 0;
}
