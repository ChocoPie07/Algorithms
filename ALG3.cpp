#include <iostream>

using namespace std;

class GamingField{
    public:
    char **A;
    int n,i,j,x,y;
    int w,a,s,d,q,e;
    void Matrix(int dimension){
        n = dimension;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                A[i][j] = rand()%2;
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
    /*/
    int Coords(int CoordX,int CoordY){
        x = CoordX;
        y = CoordY;
    }
    /*/
    void Simulation(int CoordX, int CoordY, char command){
        x = CoordX;
        y = CoordY;
        switch(command){
        case 'w':
            y = y - 1;
            cout << '(' << x << ',' << y << ')' << endl;
            if (x < 0 || y < 0 || A[x][y - 1] == 1){
                cout << "Препятствие";
            }
            break;
        case 'a':
            x = x - 1;
            cout << '(' << x << ',' << y << ')' << endl;
            if (x < 0 || y < 0 || A[ - 1][y] == 1){
                cout << "Препятствие";
            }
            break;
        case 's':
            y = y + 1;
            cout << '(' << x << ',' << y << ')' << endl;
            if (x < 0 || y < 0 || A[x][y + 1] == 1){
                cout << "Препятствие";
            }
            break;
        case 'd':
            x = x + 1;
            cout << '(' << x << ',' << y << ')' << endl;
            if (x < 0 || y < 0 || A[x+1][y] == 1){
                cout << "Препятствие";
            }
            break;
        case 'q':
            break;
        case 'e':
            break;
        }
    }
    //~Matrix();
    //~Coords();
};

int main(){
    GamingField GF;
    GF.Matrix(3);
//    GF.Coords();
    GF.Simulation(2,2,'w');
    return 0;
}