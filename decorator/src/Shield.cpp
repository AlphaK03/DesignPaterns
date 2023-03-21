//
// Created by keylo on 19/5/2022.
//

#include "Shield.h"

Shield::Shield(ConcreteEnemy *concreteEnemy) : EnemyDecorator(concreteEnemy) {}

std::string Shield::toString() {
    std::stringstream ss;
    ss << this->concreteEnemy->toString() << std::endl;
    ss << "Enemy have a Shield" << std::endl;
    return ss.str();
}

Shield::~Shield() = default;
