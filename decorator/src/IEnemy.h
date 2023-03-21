//
// Created by keylo on 19/5/2022.
//

#ifndef MY_PROJECT_NAME_IENEMY_H
#define MY_PROJECT_NAME_IENEMY_H
#include "iostream"
#include "sstream"

class IEnemy {
public:
    IEnemy() = default;

    virtual ~IEnemy() = default;

    virtual std::string toString() = 0;
};


#endif //MY_PROJECT_NAME_IENEMY_H
