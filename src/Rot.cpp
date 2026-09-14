
#include "Rot.h"


Rot::Rot()
{
    level = 1;
    maxLevel = 4;

    damage = {80.0f, 120.0f, 160.0f, 220.0f};
    slow = {14.0f, 22.0f, 30.0f, 38.0f};
    range = {250.0f, 250.0f, 250.0f, 250.0f};

}

Rotstats Rot::getStats()
{
    int index = level - 1;
    Rotstats stats(damage[index], slow[index], range[index]);
    return stats;
}
void Rot::levelUp()
{
 if (level < maxLevel)
 {
     level++;
     std::cout << "Rot upgraded to level " << level << std::endl;
     printStats();
 }
    else
    {
        std::cout <<  "Rot Already at maximum level!" << std::endl;
        std::cout << std::endl;
     }
}

void Rot::printStats()
{
    Rotstats stats = getStats();
    std::cout << "Rot Level: " << level << std::endl;
    std::cout << "DPS:  " << stats.damagePerSeconds << std::endl;
    std::cout << "Movement slow: " << stats.slowPercentsge << std::endl;
    std:: cout << "Radius ability: " << stats.radius << std::endl;
    std::cout << "Manacost: 0" << std::endl;
    std::cout << std::endl;
}