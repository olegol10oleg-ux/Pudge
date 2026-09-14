
#ifndef TASK_OOP_FLESHHEAP_H
#define TASK_OOP_FLESHHEAP_H

#include <iostream>

struct FleshHeapStats
{
    float magicResistance;
    float strengthBonusPerStack;
    int totalStacks;
    float totalBonusStrength;


    FleshHeapStats(float res, float strPerStack, int stacks)
    {
        magicResistance = res;
        strengthBonusPerStack = strPerStack;
        totalStacks = stacks;
        totalBonusStrength = strPerStack * stacks;
    }
};

class FleshHeap
{
public:
    FleshHeap();

    void addStack();
    void levelUp();

    FleshHeapStats getStats() const;
    void printStats() const;

private:
    int level;
    int maxLevel;
    int stacks;

    std::array<float, 4> magicResistances;
    std::array<float, 4> bonusStrengthPerStack;


};

#endif //TASK_OOP_FLESHHEAP_H
