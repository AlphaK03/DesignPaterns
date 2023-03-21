//
// Created by keylo on 20/5/2022.
//
#include <algorithm>
#include <list>
#include <string>
#include "Component.h"
#include "Product.h"
#include "Box.h"
#include "gtest/gtest.h"

TEST(CompositeTestSuite, PatternDesignTest){

    Component *objetoSimple = new Product("Tennis", 40);
    Component *cajaPrincipal = new Box();
    Component *cajaInterna1 = new Box();

    Component *producto1 = new Product("Camisa", 10);
    Component *producto2 = new Product("Short", 15);
    Component *producto3 = new Product("Celular", 100);

    cajaInterna1->Add(producto1);
    cajaInterna1->Add(producto2);

    Component *cajaInterna12 = new Box();

    cajaInterna12->Add(producto3);
    cajaPrincipal->Add(cajaInterna1);
    cajaPrincipal->Add(cajaInterna12);
    cajaPrincipal->Add(producto1);

    EXPECT_EQ(cajaPrincipal->operation(), 135);

    /* Agregamos unos tennis de 40 Dólares:*/

    if (cajaPrincipal->isComposite()) {
        cajaPrincipal->Add(objetoSimple);
    }



    EXPECT_EQ(cajaPrincipal->operation(), 175);


    delete objetoSimple;
    delete cajaPrincipal;
    delete cajaInterna1;
    delete cajaInterna12;
    delete producto1;
    delete producto2;
    delete producto3;



}