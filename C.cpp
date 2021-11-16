#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {
    int N;
    cin>>N;
    int answer=0;
    for(int i=1; i<N; i++) {
        int answer=1;
        for(int j=1; j<N; j++) {
            cout<<setw(3);
            answer=(answer*i) % N;
            cout<<answer;
        }
        cout<<endl;
    }
    return 0;
}