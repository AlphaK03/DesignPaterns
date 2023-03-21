//
// Created by keylo on 19/5/2022.
//

#ifndef MY_PROJECT_NAME_SWORD_H
#define MY_PROJECT_NAME_SWORD_H

#include "EnemyDecorator.h"

class Sword : public EnemyDecorator{
public:
    explicit Sword(ConcreteEnemy *concreteEnemy);

    ~Sword() override;

    std::string toString() override;

};


#endif //MY_PROJECT_NAME_SWORD_H
