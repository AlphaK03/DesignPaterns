//
// Created by keylo on 19/5/2022.
//

#include "Sword.h"

Sword::Sword(ConcreteEnemy *concreteEnemy) : EnemyDecorator(concreteEnemy) {}

std::string Sword::toString() {
    std::stringstream ss;
    ss << this->concreteEnemy->toString() << std::endl;
    ss << "Enemy have a Sword" << std::endl;
    return ss.str();
}

Sword::~Sword() = default;
