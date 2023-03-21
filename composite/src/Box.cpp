//
// Created by keylo on 20/5/2022.
//

#include "Box.h"

void Box::Add(Component *component) {
    this->objectsList.push_back(component);
    setMainBox(this);
}

void Box::remove(Component *component) {
    objectsList.remove(component);
    component->setMainBox(nullptr);
}

bool Box::isComposite() const {
    return true;
}

int Box::operation() const {
    int result = 0;
    for (const Component *object : objectsList) {
       result += object->operation();
    }
    return result;
}
