#include <iostream>
#include <cstring>
using namespace std;

class String{
    char *str;
    int length;
    public:
    String(){// a)Creates uninitialized string objects.

        length =0;
        str = new char[1];
        str[0] = '\0';
}
String(char *s){ // b) Creates objects with string constants.
    length = strlen(s);
    str = new char[length+1];// memory allocation happens
    strcpy(str, s);
}
void join(String  &s1, String &s2){     // c) Concatenates two strings properly.

    length = s1.length + s2.length;
    delete str;// freeing the previous memory
    str = new char[length+1];// allocating memory to concatenated string.
    strcpy(str, s1.str);// first string s1 is copied
    strcat(str, s2.str);// concatenated the 2nd string
}
void display(){// (d) Displays a desired string object
    cout<<str<<endl;


}
};
int main(){
    String obj1;
    cout<<"Uninitialised string : "<< endl;
    obj1.display();
    String obj2("Well done ");
    cout<<"String with string constant : "<<endl;
    obj2.display();
    String obj3;
    obj3 = obj2 ;// reasonable expression to copy one string to another
    cout<<"Objects with Copied string constants : "<<endl;
    obj3.display();
    String obj4("Hello World");
    cout<<"Objects with string constants :"<<endl;
    obj4.display();
    String obj5;
    obj5.join(obj2,obj4);// concatenating two strings
    cout<<"Objects with concatenated string constants : "<<endl;
    obj5.display();
    return 0;
}
   
