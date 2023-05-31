#include <iostream>
using namespace std;


int main() {
	printf("Hello Nested if/else\n");
  /*
    User enters side lengths of a traingle (A,B,C)
    пользователь вводит длинну сторон треугольника (А,В,С)
    Program should write out whether that traingle is eqvilateral,isosceles,or scalene
    Программа должна записать является этот треугольник равносторонним,равнобедренным или скалярным
  */
  float a,b,c;
  cout<<"Enter A,B,C ";
  cin>>a>>b>>c;
  if(a==b&&b==c) 
  	cout<<" eqvilateral traingle ";//равносторонний треугольник
   	
	else
	{
		if(a!=b&&b!=c&&c!=a)
		cout<<" scalene traingle ";//скалярный  треугольник	
		else
		cout<<"isosceles  traingle ";//равнобедренный  треугольник	
		
	}
	
	
	
	system("pause>0");
}