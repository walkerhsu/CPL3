#include<iostream>
using namespace std;
int main() {
    int number;
    cin>>number;
    int columns = number*2-1;
    int middle = number;
    for(int i=0; i<(number+4); i++) {
        if(i<number) {
            for(int column=0; column<columns; column++) {
                if((column < middle-i-1) || (column>=middle+i)) cout<<' ';
                else {
                    if(number%2==1) {
                        if((column+1)%2==1) cout<<(i+1)%10;
                        else cout<<'*';
                    }
                    else {
                        if((column+1)%2==0) cout<<(i+1)%10;
                        else cout<<'*';
                    }
                } 
            }
        }
        else {
            for(int j=0; j<number-3; j++) cout<<' ';
            cout<<"@@@@@";
            for(int j=0; j<number-3; j++) cout<<' ';
        }
        cout<<endl;
    }
    return 0;
}
