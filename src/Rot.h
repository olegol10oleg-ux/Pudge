//
// Created by Oleg Ugrik on 14.09.2026.
//

#ifndef TASK_OOP_ROT_H
#define TASK_OOP_ROT_H

#include <iostream>
#include <array>

class Rotstats
{
public:
    float damagePerSeconds;
    float slowPercentsge;
    float radius;

    Rotstats (float damage, float slow, float range)
    {
        damagePerSeconds = damage;
        slowPercentsge = slow;
        radius = range;
    }

};

class Rot
{
    public:
    Rot();
    
    void levelUp();
    void printStats();
    Rotstats getStats();


private:
    int level;
    int maxLevel;


    std::array<float,4> damage;
    std::array<float,4> slow;
    std::array<float,4> range;


};

#endif //TASK_OOP_ROT_H
