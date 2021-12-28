#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}
void stat(const double a[],int b,double c[]){
 double sum=0,SD=0,GM=1,HM=0,Max=a[0],Min=a[0];
 for(int i=0;i<b;i++){
     sum += a[i];
     SD += pow(a[i],2);
     GM *= a[i];
     HM += 1/a[i];
     if(a[i]>Max) Max=a[i];
     if(a[i]<Min) Min=a[i];
 }  
    c[0] = sum/b;
    c[1] = sqrt((SD/b)-pow(c[0],2));
    c[2] = pow(GM,1.0/b);
    c[3] = b/HM;
    c[4] = Max;
    c[5] = Min;
}