//
// Created by keylo on 19/5/2022.
//
#include "iostream"
#include "EnemyDecorator.h"
#include "Helmet.h"
#include "Sword.h"
#include "Armor.h"
#include "Shield.h"

int main(){

        auto * enemy = new ConcreteEnemy();

        enemy = new Helmet(enemy);
        enemy = new Armor(enemy);
        enemy = new Shield(enemy);
        enemy = new Sword(enemy);

        std::cout << enemy->toString();
    return  0;
}