//
// Created by keylo on 19/5/2022.
//

#include "Helmet.h"

std::string Helmet::toString() {
    std::stringstream ss;
    ss << this->concreteEnemy->toString() << std::endl;
    ss << "Enemy wears a helmet" << std::endl;
    return ss.str();
}


Helmet::Helmet(ConcreteEnemy *concreteEnemy) : EnemyDecorator(concreteEnemy) {}

Helmet::~Helmet() = default;
