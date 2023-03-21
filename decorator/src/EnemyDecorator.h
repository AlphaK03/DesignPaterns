//
// Created by keylo on 19/5/2022.
//

#ifndef MY_PROJECT_NAME_ENEMYDECORATOR_H
#define MY_PROJECT_NAME_ENEMYDECORATOR_H
#include "ConcreteEnemy.h"

class EnemyDecorator : public ConcreteEnemy{
protected:
    ConcreteEnemy* concreteEnemy;
public:
    explicit EnemyDecorator(ConcreteEnemy *concreteEnemy);

    std::string toString() override;

    ~EnemyDecorator() override;

};


#endif //MY_PROJECT_NAME_ENEMYDECORATOR_H
