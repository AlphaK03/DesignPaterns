//
// Created by keylo on 19/5/2022.
//

#ifndef MY_PROJECT_NAME_CONCRETEENEMY_H
#define MY_PROJECT_NAME_CONCRETEENEMY_H

#include <ostream>
#include "IEnemy.h"

class ConcreteEnemy : public IEnemy{
private:
    std::string name;
    int attack = 50;
    int defence = 20;
    int life = 100;
    int damageReceived = 0;
public:
    ConcreteEnemy();

    ConcreteEnemy(std::string name, int attack, int defence, int life);

    ~ConcreteEnemy() override;

    const std::string &getName() const;

    void setName(const std::string &name);

    int getAttack() const;

    void setAttack(int attack);

    int getDefence() const;

    void setDefence(int defence);

    int getLife() const;

    void setLife(int life);

    int getDamageReceived() const;

    void setDamageReceived(int damageReceived);

    std::string toString() override;

    friend std::ostream &operator<<(std::ostream &os, const ConcreteEnemy &enemy);
};


#endif //MY_PROJECT_NAME_CONCRETEENEMY_H
