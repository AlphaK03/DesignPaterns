//
// Created by keylo on 19/5/2022.
//

#include "ConcreteEnemy.h"

#include <utility>

ConcreteEnemy::ConcreteEnemy() = default;

ConcreteEnemy::ConcreteEnemy(std::string name, int attack, int defence, int life) : name(std::move(
        name)), attack(attack), defence(defence), life(life) {}

ConcreteEnemy::~ConcreteEnemy() = default;

const std::string &ConcreteEnemy::getName() const {
    return name;
}

void ConcreteEnemy::setName(const std::string &name) {
    ConcreteEnemy::name = name;
}

int ConcreteEnemy::getAttack() const {
    return attack;
}

void ConcreteEnemy::setAttack(int attack) {
    ConcreteEnemy::attack = attack;
}

int ConcreteEnemy::getDefence() const {
    return defence;
}

void ConcreteEnemy::setDefence(int defence) {
    ConcreteEnemy::defence = defence;
}

int ConcreteEnemy::getLife() const {
    return life;
}

void ConcreteEnemy::setLife(int life) {
    ConcreteEnemy::life = life;
}

int ConcreteEnemy::getDamageReceived() const {
    return damageReceived;
}

void ConcreteEnemy::setDamageReceived(int damageReceived) {
    ConcreteEnemy::damageReceived = damageReceived;
}

std::ostream &operator<<(std::ostream &os, const ConcreteEnemy &enemy) {
    os << " name: " << enemy.name << " attack: " << enemy.attack << " defence: "
       << enemy.defence << " life: " << enemy.life;
    return os;
}

std::string ConcreteEnemy::toString() {
    std::stringstream ss;
    ss << (*this);
    return ss.str();
}
