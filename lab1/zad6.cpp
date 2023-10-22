#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float suma=0.0;
    for(int i=0;i<100;i++){
        suma+=0.1f;
    }
    cout<<fixed<<setprecision(20);
    cout<<"suma="<<suma<<endl;
    return 0;
}