#include <stdio.h>
#include <iostream>

using namespace std;

class Matrix{
    private:
    int n;
    int ** matrix;
    public:
    int Matrix(int number){
        int number1 = number;
        n = 1;
        while (number1>=10){
            n++;
            number1 /= 10;
        }
    }
    matrix = new int*[n];
    for(int i=n- 1;i>=0;i--){
        matrix[n- i- 1]=new int[n];
        matrix[0][i]=number%10;
        number %= 10;
    }
    int Shift(int*ar){
        int number1 = ar[0];
        for(int i=0;i<n-1;i++){
            ar[i]=ar[i+ 1];
        }
        ar[n- 1]=number1;
        return ar;
    }
    void MakeMatrix(){
        for(int i=1;i<n;i++){
            Matrix[i]=Shift(matrix[i- 1]);
        }
    }
    int Display(){
        for(int i=1;i<=n;i++){
            for(int j=1;i<=n;j++){
                cout << matrix[i][j];
            }
        }
    }
    ~Matrix();
};

int main(){
    Matrix matr;
    matr.Matrix(1234);
    matr.Shift();
    matr.MakeMatrix();
    matr.Display();
    return(0);
}
