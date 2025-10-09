#include <iostream>
using namespace std;

int main() {
    int n = 2;
    int a[2][2] = {{100000,2},{3,4}};
    float af[2][2];
    double ad[2][2];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            af[i][j]=a[i][j];
            ad[i][j]=a[i][j];
        }

    float rf[2][2]={0};
    double rd[2][2]={0};

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            for(int k=0;k<n;k++){
                rf[i][j]+=af[i][k]*af[k][j];
                rd[i][j]+=ad[i][k]*ad[k][j];
            }

    cout<<rf[0][0]<<" "<<rd[0][0]<<endl;
    return 0;
}
