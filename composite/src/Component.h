//
// Created by keylo on 20/5/2022.
//

#ifndef MY_PROJECT_NAME_COMPONENT_H
#define MY_PROJECT_NAME_COMPONENT_H
#include "iostream"

class Component {
protected:
    Component *mainBox{};
public:
    Component();

    explicit Component(Component *mainBox);
    virtual ~Component();

    virtual void Add(Component *component) {}
    virtual void remove(Component *component) {}

    virtual bool isComposite() const;
    virtual int operation() const = 0;

    Component *getMainBox() const;
    void setMainBox(Component *mainBox);
};


#endif //MY_PROJECT_NAME_COMPONENT_H
