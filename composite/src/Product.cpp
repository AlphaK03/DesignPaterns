//
// Created by keylo on 20/5/2022.
//

#include "Product.h"

#include <utility>

bool Product::isComposite() const {
    return false;
}

int Product::operation() const {
    return price;
}

Product::Product(std::string productName, int price) : productName(std::move(productName)), price(price) {}

Product::~Product() = default;
