//
// Created by keylo on 19/5/2022.
//

#ifndef MY_PROJECT_NAME_HELMET_H
#define MY_PROJECT_NAME_HELMET_H
#include "EnemyDecorator.h"

class Helmet : public EnemyDecorator{
public:
     explicit Helmet(ConcreteEnemy *concreteEnemy);

    std::string toString() override;

    ~Helmet() override;
};


#endif //MY_PROJECT_NAME_HELMET_H
