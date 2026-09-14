#include "MeatHook.h"

MeatHook::MeatHook()
{
    level = 1;
    maxLevel = 4;

    manaCosts = {110.0f, 120.0f, 130.0f, 140.0f};
    cooldowns = {18.0f, 16.0f, 14.0f, 12.0f};
    damages   = {150.0f, 220.0f, 290.0f, 360.0f};
}

HookStats MeatHook::getStats()
{
    int index = level - 1;
    HookStats stats(damages[index], manaCosts[index], cooldowns[index]);
    return stats;
}

void MeatHook::levelUp()
{
    if (level < maxLevel)
    {
        level = level + 1;
        std::cout << "Meat Hook Upgraded to level " << level << std::endl;
        std::cout << std::endl;
        printStats();
    }
    else
    {
        std::cout << "Meat Hook Already at maximum level!" << std::endl;
    }
}

void MeatHook::printStats()
{
    HookStats stats = getStats();

    std::cout << std::endl;
    std::cout << " Hook Level: " << level << std::endl;
    std::cout << " Damage:  " << stats.damage << std::endl;
    std::cout << " Mana Cost:  " << stats.manaCost << std::endl;
    std::cout << " Cooldown:   " << stats.cooldown << " sec. " << std::endl;
    std::cout << std::endl;
}