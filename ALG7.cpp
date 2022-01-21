#include <iostream>
#include <cmath>
 
using namespace std;
 
class Matrix{
private:
    int **A;
    int **B;
    int **C;
    int i,j,k,N;
public:
    int GetMatrix(int dimension){
        int N=dimension;
        int **A=new int*[N];
        int **B=new int*[N];
        int **C=new int*[N];
        for(int i=0;i<N;i++){
            A[i]=new int[N];
            B[i]=new int[N];
            C[i]=new int[N];
        }
        cout<<"Matrix A:\n";
        for(i=0; i < N; i++)
            for(j=0; j < N; j++)
                cin >> A[i][j];
        cout << "Matrix B:\n";
        for(i=0; i < N; i++)
            for(j=0; j < N; j++)
                cin>>B[i][j];
}
 
void Actions(char action){
    switch(action){
        case'+':
            cout << "Matrix C=A+B:\n";
            for(i=0;i<N;i++){
                for(j=0;j<N;j++){
                    C[i][j]=A[i][j]+B[i][j];
                    cout << C[i][j];
                }
                cout << endl;
            }

        case'-':
            cout << "Matrix C=A-B:\n";
            for(i=0;i<N;i++){
                for(j=0;j<N;j++){
                    C[i][j]=A[i][j]-B[i][j];
                    cout << C[i][j];
                }
                cout << endl;
            }
        case'*':
            cout << "Matrix C=A*B:\n";
            for(i=0; i < N; i++){
                for(j=0; j < N; j++){
                C[i][j]=0;
                for(k=0; k < N; k++)
                C[i][j]+=A[i][k]*B[k][j];
                cout << C[i][j] << " ";
                }
                cout << endl;
            }
    }
}

/*/void getMatrixWithoutRowAndCol(int **matrix, int size, int row, int col, int **newMatrix) {
  int offsetRow = 0; 
  int offsetCol = 0; 

  for(int i = 0; i < size-1; i++) {
    if(i == row) {
      offsetRow = 1; 
    }
 
    offsetCol = 0;
    for(int j = 0; j < size-1; j++) {
      if(j == col) {
        offsetCol = 1; 
      }
 
      newMatrix[i][j] = matrix[i + offsetRow][j + offsetCol];
    }
  }
}

int MatrixDet(){
    int det = 0;
    int degree = 1;
    int **matrix=new int*[N];
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            matrix[i][j]=A[i][j];
        }
    }
    int size = N;

    if(size == 1) {
        return matrix[0][0];
    }
    else if(size == 2) {
        return matrix[0][0]*matrix[1][1] - matrix[0][1]*matrix[1][0];
    }
    else {
        int **newMatrix = new int*[size-1];
        for(int i = 0; i < size-1; i++) {
            newMatrix[i] = new int[size-1];
        }

        for(int j = 0; j < size; j++) {
            getMatrixWithoutRowAndCol(matrix, size, 0, j, newMatrix);

            det = det + (degree * matrix[0][j] * matrixDet(newMatrix, size-1));
            degree = -degree;
        }

        for(int i = 0; i < size-1; i++) {
            delete [] newMatrix[i];
        }
        delete [] newMatrix;
    }

    return det;
}
/*/
};
 
int main(){
    
int P;
cout << "Введите размерность матриц: " << endl;
cin >> P;
    
Matrix M;
 
M.GetMatrix(P);

char o;
cout << "Введите действие: " << endl;
cin >> o;

//M.Actions(o);

M.MatrixDet()
 
return 0;
}

