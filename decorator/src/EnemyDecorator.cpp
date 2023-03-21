//
// Created by keylo on 19/5/2022.
//

#include "EnemyDecorator.h"

std::string EnemyDecorator::toString() {
    return this->concreteEnemy->toString();
}


EnemyDecorator::EnemyDecorator(ConcreteEnemy *concreteEnemy) : concreteEnemy(concreteEnemy) {}

EnemyDecorator::~EnemyDecorator() = default;
