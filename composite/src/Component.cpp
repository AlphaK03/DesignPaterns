//
// Created by keylo on 20/5/2022.
//

#include "Component.h"

Component::~Component() = default;


bool Component::isComposite() const {
    return false;
}

Component::Component(Component *mainBox) : mainBox(mainBox) {}

Component *Component::getMainBox() const {
    return mainBox;
}

void Component::setMainBox(Component *mainBox) {
    Component::mainBox = mainBox;
}

Component::Component() = default;
