
#include "Rot.h"


Rot::Rot()
{
    level = 1;
    maxLevel = 4;

    damage = {80, 120, 160, 220};
    slow = {14, 22, 30, 38};
    range = {250, 250, 250, 250};

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
}