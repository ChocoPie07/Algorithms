#include <iostream>
 
using namespace std;
 
class StudBilet{
public:
int sb,min = 10,max = 0,p;
long long bs = 0;
int Min(int sb){
    p = sb;
    for (int i=0;i<10;i++){
        if (p%10<min){
            min = p%10;
        }
        p = p/10;
    }
}
int Max(int sb){
    p = sb;
    for (int i=0;i<10;i++){
        if (p%10>max){
            max = p%10;
        }
        p = p/10;
    }
}
int Rev(int sb){
    p = sb;
    for (int i=0;i<10;i++){
        bs = bs*10 + p%10;
        p = p/10;
    }
}
};
int main(){
StudBilet ABC;
ABC.Min(1032201677);
ABC.Max(1032201677);
ABC.Rev(1032201677);
cout << ABC.min << '\n';
cout << ABC.max << '\n';
cout << ABC.bs << '\n';
return 0;
}