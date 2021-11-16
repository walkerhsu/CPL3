#include<iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;

    int chicken=0 , rabbit=0;
    if(b%2==1) cout<<"There is no solution"<<endl;
    else {
        rabbit = (b-2*a)/2;
        chicken = a-rabbit;
        if(rabbit<0 || chicken<0) cout<<"There is no solution"<<endl;
        else cout<<chicken<<' '<<rabbit<<endl;
    }
    
    return 0;
}