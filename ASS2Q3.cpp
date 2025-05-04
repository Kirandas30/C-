#include <iostream>
using namespace std;
class DB;
class DM
{
    float metres;
    float centimetres;

public:
    void input(float m, float cm)
    {
        metres = m;
        centimetres = cm;
    }
    void display()
    {
        cout << metres << "m " << centimetres << "cm\n";
    }
    friend DM addObjects(DM, DB);
};
class DB
{
    float feet;
    float inches;

public:
    void input(float f, float i)
    {
        feet = f;
        inches = i;
    }
    void display()
    {
        cout << feet << "feets " << inches << "inches\n";
    }
    friend DM addObjects(DM, DB);
};
DM addObjects(DM dm, DB db)
{
    DM obj;
    obj.metres = dm.metres + (db.feet * 0.3048);
    obj.centimetres = dm.centimetres + (db.inches * 2.54);
    return obj;
}
int main()
{
    DM obj1;
    DB obj2;
    obj1.input(2,45);
    obj1.display();
    obj2.input(3,9);
    obj2.display();
    DM result;
    result= addObjects(obj1, obj2);
    result.display();
    return 0;
}