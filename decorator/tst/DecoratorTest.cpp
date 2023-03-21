//
// Created by keylo on 20/5/2022.
//
#include "gtest/gtest.h"
#include "iostream"
#include "EnemyDecorator.h"
#include "Helmet.h"
#include "Sword.h"
#include "Armor.h"
#include "Shield.h"

TEST(DecoratorTestSuite, DecoratorPatternTest){
    auto * enemy = new ConcreteEnemy();

    enemy = new Helmet(enemy);
    enemy = new Armor(enemy);
    enemy = new Shield(enemy);
    enemy = new Sword(enemy);


    EXPECT_EQ(enemy->toString(), " name:  attack: 50 defence: 20 life: 100\n"
                                 "Enemy wears a helmet\n"
                                 "\n"
                                 "Enemy wears an Armor\n"
                                 "\n"
                                 "Enemy have a Shield\n"
                                 "\n"
                                 "Enemy have a Sword\n");

    delete enemy;

}