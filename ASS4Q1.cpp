#include<iostream>

#include<cmath>

using namespace std;

#define pi 3.14

class Polar{

float r,a,x,y;

public:

void setvalue(float p, float q){

r=p;

a=q;

x=r*cos(a*pi/180);

y=r*sin(a*pi/180);
}
void display(){

cout<<"The angle and radius are "<<r<<" and "<<a<<endl;

cout<<"The coordinates are "<<x<<" and "<<y<<endl;

} Polar operator+(Polar p1);

};

Polar Polar::operator+(Polar p2){

Polar p;

p.x=x+p2.x;

p.y=y+p2.y;

p.a=atan(p.y/p.x); p.r=sqrt(p.x*p.x + p.y*p.y);

return p;
}
int main(){

Polar p1,p2, p3;

float p,q;

cout<<"enter the 1st polar coordinates (both radius and angel): ";

cin>>p>>q; p1.setvalue(p,q);

cout<<"Displaying the 1st polar coordinates (radius, angel,x and y): "<<endl; p1.display();

cout<<"enter the 2nd polar coordinates (both radius and angel): ";

cin>>p>>q;

p2.setvalue(p,q);

cout<<"Displaying the 2nd polar coordinates (radius, angel,x and y): "<<endl;

p1.display();
 p3=p1+p2; //calling the operator+ function 
 cout<<"After addition, displaying the 3rd polar coordinates (radius, angel,x and y): "<<endl; p3.display();

return 0;

}