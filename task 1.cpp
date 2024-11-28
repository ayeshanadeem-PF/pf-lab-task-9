#include <iostream>
using namespace std;
int main(){
    int num[4][4]={{1,2,3,4},
    {2,3,4,5},
    {4,5,6,7},
    {5,6,2,3}};
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<num[i][j];
        }
        cout<<endl;
    }
    return 0;
}