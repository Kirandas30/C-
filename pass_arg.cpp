/*  Method	                      Data Copied?	Original Modified?	    Syntax
Pass by Value	                   ✅ Yes	    ❌ No	             func(int x)
Pass by Reference	                 ❌ No	    ✅ Yes	             func(int &x)
Pass by Pointer	                     ❌ No	    ✅ Yes	       func(int *x) and call as func(&a)    */


/*#include <iostream>
using namespace std;

void passByReference(int &x) {
    x = x + 10;
    cout << "Inside function (reference): " << x << endl;//15
}

int main() {
    int a = 5;
    passByReference(a);
    cout << "Outside function: " << a << endl;  // 15. a is modified
    return 0;
}*/


/*#include <iostream>
using namespace std;

void passByValue(int x) {
    x = x + 10;
    cout << "Inside function (value): " << x << endl;//15
}

int main() {
    int a = 5;
    passByValue(a);
    cout << "Outside function: " << a << endl;  // 5, a remains unchanged
    return 0;
}
*/


/*#include <iostream>
using namespace std;

void passByPointer(int *x) {
    *x = *x + 10;
    cout << "Inside function (pointer): " << *x << endl;  // 15
}

int main() {
    int a = 5;
    passByPointer(&a);
    cout << "Outside function: " << a << endl;  // 15,a is modified
    return 0;
}
*/
