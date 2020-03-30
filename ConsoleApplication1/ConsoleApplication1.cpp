
#include "app.h"
using namespace std;

int main()
{
  /*  int i = 1;
    while (true)
    {*/


        app a;
        app* aptr = nullptr;
        aptr = &a;
        //aptr->startScreen();
        //aptr->drawGraphics();
        while (true)
        {
            aptr->makeMove('X', aptr->tempPosition);
        }
        

    //    cout << i << endl;
    //    i++;
   // }
    
    
    system("pause");
    
    
}