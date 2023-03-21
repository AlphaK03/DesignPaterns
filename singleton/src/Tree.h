//
// Created by keylo on 20/5/2022.
//

#ifndef SINGLETON_TREE_H
#define SINGLETON_TREE_H
#include "iostream"
#include "sstream"
class Tree {
private:
    int height;
    std::string leafColor;
    Tree();
public:

    static Tree* getSingleton();

    int getHeight() const;

    void setHeight(int height);

    const std::string &getLeafColor() const;

    void setLeafColor(const std::string &leafColor);

    friend std::ostream &operator<<(std::ostream &os, const Tree &tree);

    std::string toString();
};


#endif //SINGLETON_TREE_H
