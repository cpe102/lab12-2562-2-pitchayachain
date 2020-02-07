#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double []);

int main()
{
    double A[] = {1.2,-3.5,6.9,7.8,12.5,-0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[4];
    stat(A,N,B);
    cout << "Average = " << B[0];
    cout << "\nS.D. = " << B[1];
    cout << "\nMax = " << B[2];
    cout << "\nMin = " << B[3];
    return 0;
}
float sum;
void stat(const double M[],int N,double O[]){
    float min = 0,max = 0;
    for(int i=0;i<N;i++){
        O[0] += M[i]/N;
        sum += pow(M[i],2);
    }
     O[1] = sqrt(sum/N-pow(O[0],2));
     for(int j=0;j<N;j++){
        if (min>M[j])
        min=M[j];
        else if (max<M[j])
        max=M[j];
        O[2] = max;
        O[3] = min;
     }
}

    
