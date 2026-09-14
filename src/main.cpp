#include "FleshHeap.h"
#include "MeatHook.h"
#include "Rot.h"

int main()
{
    MeatHook hook;
    Rot rot;
    FleshHeap fleshHeap;
    std::cout << " Stats " << std::endl;
    hook.printStats();
    rot.printStats();
    fleshHeap.printStats();


    hook.levelUp();
    rot.levelUp();
    fleshHeap.levelUp();
    fleshHeap.addStack();
    hook.levelUp();
    rot.levelUp();
    fleshHeap.levelUp();
    fleshHeap.addStack();
    hook.levelUp();
    rot.levelUp();
    fleshHeap.levelUp();
    fleshHeap.addStack();


    return 0;
}
