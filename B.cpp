#include <iostream>

using namespace std;

int main()
{
    int a[2][2], b[2][2], ans[2][2];

    for (int cnt = 0; cnt < 3; cnt++)
    {
        if (cnt == 0) cout << "First group:" << endl;
        else if (cnt == 1) cout << "Second group:" << endl;
        else cout << "Third group:" << endl;

        for(int number=0; number<2; number++) {
            for(int row=0; row<2; row++) {
                for(int column=0; column<2; column++) {
                    if(number==0) cin>>a[row][column];
                    else if(number==1) cin>>b[row][column];
                }
            }
        }
        ans[0][0] = a[0][0]*b[0][0] + a[0][1]*b[1][0];
        ans[0][1] = a[0][0]*b[0][1] + a[0][1]*b[1][1];
        ans[1][0] = a[1][0]*b[0][0] + a[1][1]*b[1][0];
        ans[1][1] = a[1][0]*b[0][1] + a[1][1]*b[1][1];
        
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << ans[i][j];
                if (j == 0) cout << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}