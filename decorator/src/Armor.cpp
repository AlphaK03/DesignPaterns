//
// Created by keylo on 19/5/2022.
//

#include "Armor.h"

Armor::Armor(ConcreteEnemy *concreteEnemy) : EnemyDecorator(concreteEnemy) {}

std::string Armor::toString() {
    std::stringstream ss;
    ss << this->concreteEnemy->toString() << std::endl;
    ss << "Enemy wears an Armor" << std::endl;
    return ss.str();
}

Armor::~Armor() = default;
