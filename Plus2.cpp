#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
    int i, x2, y2;
    int iWait = 0;
    int iStop = 0;
    int x1 = 1;
    int y1 = 1;
    for(i  = 0; !iStop; i++)
    {
        printf("\nIteration # %d\n", i + 1);
        iWait = true;
        while(iWait && !iStop)
        {
            switch(getch())
            {
            case 13:
                iWait = 0;
                cout << "Where:" << endl;
                cin >> x2 >> y2;
                //cout << x2 << " " << y2 << endl;
                if (x1 == x2 || y1 == y2)
                {
                    cout << "Done!" << endl;
                    cout << "Now:" << endl;
                    cout << x2 << " " << y2 << endl;
                    x1 = x2;
                    y1 = y2;
                }
                else
                {
                    cout << "Error!";
                }
                break;
            case 27:
                iStop = 1;
                break;
            }
            printf("\rPress Enter for continue or ESC for exit");
        }
    }
    return 0;
}