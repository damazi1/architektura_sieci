#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double a=0.1,b=0.2;
    double c=a+b;
    double epsilon =1e-9;
    if(c-0.3<epsilon){
        cout<<"suma ="<<c<<endl;
    }

    return 0;
}