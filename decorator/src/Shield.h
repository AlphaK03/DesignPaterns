//
// Created by keylo on 19/5/2022.
//

#ifndef MY_PROJECT_NAME_SHIELD_H
#define MY_PROJECT_NAME_SHIELD_H
#include "EnemyDecorator.h"

class Shield : public EnemyDecorator{
public:
    explicit Shield(ConcreteEnemy *concreteEnemy);

    ~Shield() override;

    std::string toString() override;
};


#endif //MY_PROJECT_NAME_SHIELD_H
