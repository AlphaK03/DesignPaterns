//
// Created by keylo on 19/5/2022.
//

#ifndef MY_PROJECT_NAME_ARMOR_H
#define MY_PROJECT_NAME_ARMOR_H
#include "EnemyDecorator.h"

class Armor : public EnemyDecorator{
public:
    explicit Armor(ConcreteEnemy *concreteEnemy);

    ~Armor() override;

    std::string toString() override;
};


#endif //MY_PROJECT_NAME_ARMOR_H
