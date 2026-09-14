#include "FleshHeap.h"


FleshHeap::FleshHeap()
{
    level = 1;
    maxLevel = 4;
    stacks = 0;

    magicResistances = {8.0f, 12.0f, 16.0f, 20.0f};
    bonusStrengthPerStack = {1.5f, 2.0f, 2.5f, 3.0f};
}

void FleshHeap::addStack()
{
    stacks++;
    std::cout << "Flesh Heap Stack added! Total stacks: " << stacks << std::endl;
    std::cout << std::endl;
}

void FleshHeap::levelUp()
{
    if (level < maxLevel)
        {
        level++;
        std::cout << "Flesh Heap upgraded to Level " << level << std::endl;
        std::cout << std::endl;
    }
    else
    {
        std::cout << "Flesh Heap Already at max level!" << std::endl;
        std::cout << std::endl;
    }
}

FleshHeapStats FleshHeap::getStats() const
{
    int index = level - 1;
    return FleshHeapStats(magicResistances[index], bonusStrengthPerStack[index], stacks);
}

void FleshHeap::printStats() const
{
    FleshHeapStats stats = getStats();
    std::cout << "Flesh Heap level " << level << std::endl;
    std::cout << "Magic Resistance: " << stats.magicResistance << std::endl;
    std::cout << " Bonus / Stack: " << stats.strengthBonusPerStack << std::endl;
    std::cout << "Total Stacks: " << stats.totalStacks << std::endl;
    std::cout << "Total Bonus Strength: " << stats.totalBonusStrength << std::endl;
    std::cout << std::endl;
}