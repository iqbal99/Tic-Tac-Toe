
#include "App.h"
using namespace std;

int main()
{
        App a;
        App* aptr = nullptr;
        aptr = &a;
        //aptr->startScreen();
        //aptr->drawGraphics();
        while (true)
        {
            aptr->initGame();
        }  
    system("pause");  
}