#include<iostream>
// #include<cmath>
using namespace std;
int main(){
    //area or rectangle
    // define variables

    float length, width, rectangle_area;

    //prompt the user to enter width and length
    cout<<"Enter the length value :";
    cin>>length;
    cout<<"Enter the width value :";
    cin>>width;
    rectangle_area=length*width;
    cout<<"The area of rectangle is : "<<rectangle_area<<" Square units"<<endl;

//area of a square
  float side, square_area;
cout<<"Enter the value of the length :";
cin>>side;
square_area=side*side;
cout<<"The area of a Square is : "<<square_area<< " Square units"<<endl;

//area of a triangle
// define variable to define the sides of the triangle


 float base,height,triangle_area;

cout<<"Enter the Value of the triangle base :";
cin>>base;
cout<<"Enter the value of the perpendicular height :";
cin>>height;
triangle_area= (base*height)/2;
cout<<"The Area of triangle is : "<<triangle_area<<" Square units"<<endl;

//Area of a circle
float radius,circle_area;
const double pi = 3.142;
cout<<"Enter the radius :";
cin>>radius;
circle_area=pi*radius*radius;
cout<<"The area of a circle is :"<<circle_area<<" Square units"<<endl;


//area of a sphere
   	   	   	   	   	// use pi from above 
    double r, sphere_area;
    //where r is the radius of the sphere

    cout << "Enter the r of the sphere: ";
    cin >> r;

    // Calculate the area of the sphere
    sphere_area = 4 * pi * r * r;

    cout << "The area of the sphere is: " << sphere_area << endl;//print the value of the area


//area of trapezium
    float a, b, h;
      //a and b are values of the parallel sides
      //h is the perpendicular height
    cout << "Enter the lengths of the parallel sides of the trapezium: ";
    cin >> a >> b;
    cout << "Enter the height of the trapezium: ";
    cin >> h;
    float area = ((a + b) / 2) * h;
    cout << "The area of the trapezium is " << area << " square units.";
    
return 0;




}
