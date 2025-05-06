#include <iostream>

using namespace std;

inline float mul(float x, float y){
    return (x * y);
}
inline double div(float p, float q){
    return (p/q);
}
int main(){
    float a = 12.345;
    float b = 9.82;
    cout<<mul(a,b)<<"\n";
    cout<<div(a,b)<<"\n";
    return 0;
}