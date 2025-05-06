#include <iostream>
using namespace std;
class complex
{
    float x,y;
    public:
    void input(float real, float img)
    {
        x = real;
        y = img;
    }
    void show(complex);
    friend complex sum(complex, complex);
};
complex sum(complex c1, complex c2)
{
    complex c3;
    c3.x = c1.x + c2.x;
    c3.y= c1.y+c2.y;
    return c3;
}
void complex::show(complex c)
{
    cout<<c.x<<"+ j"<<c.y<<endl;
}
int main()
{
    complex c1,c2,c3;
    c1.input(3.1, 5.65);
    c2.input(2.75, 1.2);
    cout<<"A= ";
    c1.show(c1);
    cout<<"B= ";
    c2.show(c2);
    c3= sum(c1, c2);
    cout<<"C= ";
    c3.show(c3);

    return 0;
}