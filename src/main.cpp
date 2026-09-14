#include "MeatHook.h"
#include "Rot.h"

int main()
{
    MeatHook hook;
    Rot rot;

    std::cout << " Stats " << std::endl;
    hook.printStats();
    rot.printStats();

    hook.levelUp();
    rot.levelUp();
    hook.levelUp();
    rot.levelUp();
    hook.levelUp();
    rot.levelUp();
    


    return 0;
}
