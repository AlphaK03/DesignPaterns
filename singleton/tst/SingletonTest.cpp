//
// Created by keylo on 20/5/2022.
//
#include "gtest/gtest.h"
#include "iostream"
#include "Tree.h"

TEST(SingletonTestSuite, SingletonPatternTest){
    Tree* tree1 = Tree::getSingleton();
    tree1->setHeight(5);
    tree1->setLeafColor("Green");

    std::cout << "Tree #1 : " << tree1->toString() << std::endl;
    tree1->setHeight(7);

    Tree* tree2 = Tree::getSingleton();
    std::cout << "Tree #2 : " << tree2->toString() << std::endl;

    tree2->setLeafColor("White");

    Tree* tree3 = Tree::getSingleton();

    std::cout << "Tree #3 : " << tree3->toString() << std::endl;

    EXPECT_EQ(tree1->toString(),"height: 7 leafColor: White");
    EXPECT_EQ(tree1, tree2);
    EXPECT_EQ(tree2, tree3);
    EXPECT_EQ(tree1, tree3);
}