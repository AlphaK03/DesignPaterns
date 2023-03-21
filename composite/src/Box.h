//
// Created by keylo on 20/5/2022.
//

#ifndef MY_PROJECT_NAME_BOX_H
#define MY_PROJECT_NAME_BOX_H
#include "list"
#include "Component.h"

class Box : public Component{
private:
    std::list<Component*> objectsList;
public:
    void Add(Component *component) override;
    void remove(Component *component) override;

    bool isComposite() const override;
    int operation() const override;
};


#endif //MY_PROJECT_NAME_BOX_H
