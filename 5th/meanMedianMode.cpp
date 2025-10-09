#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    double d[100];
    float f[100];

    for(int i=0;i<n;i++){
        cin >> d[i];
        f[i]=d[i];
    }

    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(d[i]>d[j]){
                swap(d[i],d[j]);
                swap(f[i],f[j]);
            }

    double dmean=0, dvar=0;
    float fmean=0, fvar=0;

    for(int i=0;i<n;i++){
        dmean+=d[i];
        fmean+=f[i];
    }

    dmean/=n;
    fmean/=n;

    for(int i=0;i<n;i++){
        dvar+=(d[i]-dmean)*(d[i]-dmean);
        fvar+=(f[i]-fmean)*(f[i]-fmean);
    }

    dvar/=n;
    fvar/=n;

    cout<<dmean<<" "<<d[n/2]<<" "<<dvar<<endl;
    cout<<fmean<<" "<<f[n/2]<<" "<<fvar<<endl;

    return 0;
}
