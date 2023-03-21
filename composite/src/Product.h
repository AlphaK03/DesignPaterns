//
// Created by keylo on 20/5/2022.
//

#ifndef MY_PROJECT_NAME_PRODUCT_H
#define MY_PROJECT_NAME_PRODUCT_H
#include "Component.h"

class Product : public Component{
private:
    std::string productName;
    int price = 0;
public:
    Product(std::string productName, int price);

    bool isComposite() const override;
    int operation() const override;

    ~Product() override;
};


#endif //MY_PROJECT_NAME_PRODUCT_H
