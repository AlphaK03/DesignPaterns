//
// Created by keylo on 20/5/2022.
//

#include "Tree.h"


Tree::Tree(){
    height = 0;
    leafColor = "";
};

Tree* Tree::getSingleton() {
    static auto * winterTree = new Tree();
    return winterTree;
}

int Tree::getHeight() const {
    return height;
}

void Tree::setHeight(int height) {
    Tree::height = height;
}

const std::string &Tree::getLeafColor() const {
    return leafColor;
}

void Tree::setLeafColor(const std::string &leafColor) {
    Tree::leafColor = leafColor;
}

std::ostream &operator<<(std::ostream &os, const Tree &tree) {
    os << "height: " << tree.height << " leafColor: " << tree.leafColor;
    return os;
}

std::string Tree::toString() {
    std::stringstream ss;
    ss << (*this);
    return ss.str();
}
