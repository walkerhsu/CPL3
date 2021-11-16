#include<iostream>
using namespace std;
#define SIZE 9
int main() {
    int a[SIZE][SIZE]={};
    for(int number=0; number<5; number++) {
        for(int i=0; i<SIZE; i++) {
            for(int j=0; j<SIZE; j++) {
                cin>>a[i][j];
            }
        }

        for(int i=0; i<SIZE; i++) {
            for(int j=0; j<SIZE; j++) {
                for(int k=0; k<j; k++) {
                    if(a[i][j]==a[i][k]) {cout<<0<<endl; goto next;}
                }
            }
        }
        for(int i=0; i<SIZE; i++) {
            for(int j=0; j<SIZE; j++) {
                for(int k=0; k<j; k++) {
                    if(a[j][i]==a[k][i]) {cout<<0<<endl; goto next;}
                }
            }
        }
        for(int i=0; i<SIZE/3; i++) {
            for(int j=0; j<SIZE/3; j++) {
                int array[9] = {0};
                int times=0;
                for(int k=0; k<SIZE/3; k++) {
                    for(int l=0; l<SIZE/3; l++) {
                        for(int m=0; m<times; m++) {
                            if( a[i*3+k][j*3+l] == array[m]) {cout<<0<<endl; goto next;}
                        }
                        array[times] = a[i*3+k][j*3+l];
                        times++;
                    }
                }
            }
        }
        cout<<1<<endl;
        next:;
    }
    


    
    return 0;
}
/*
4 8 1 5 7 6 2 3 9
3 2 9 4 1 8 6 5 7
5 6 7 3 9 2 8 4 1
1 4 2 7 8 5 3 9 6
7 5 8 9 6 3 4 1 2
9 3 6 1 2 4 5 7 8
6 9 5 2 3 1 7 8 4
2 1 3 8 4 7 9 6 5
8 7 4 6 5 9 1 2 3
*/