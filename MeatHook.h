#ifndef TASK_OOP_MEATHOOK_H
#define TASK_OOP_MEATHOOK_H


#include <iostream>
#include <array>


class HookStats
{
public:
    float damage;
    float manaCost;
    float cooldown;

    HookStats(float dmg, float mana, float cd)
    {
        damage = dmg;
        manaCost = mana;
        cooldown = cd;
    }
};

class MeatHook
{
public:
    MeatHook();

    void levelUp();
    void printStats();
    HookStats getStats();
private:
    int level;
    int maxLevel;

    std::array<float, 4> manaCosts;
    std::array<float, 4> cooldowns;
    std::array<float, 4> damages;


};

#endif
