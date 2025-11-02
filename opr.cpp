#include <iostream>
using namespace std;
int add(int a, int b){
    return a + b;
}
int main(){
    int a,b;
    cout<<"Enter a number: ";
    cin>>a;
    cin>>b;
    cout<<add(a,b);
}