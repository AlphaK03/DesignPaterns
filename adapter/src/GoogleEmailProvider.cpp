//
// Created by keylo on 19/5/2022.
//

#include "GoogleEmailProvider.h"

GoogleEmailProvider::GoogleEmailProvider() = default;

GoogleEmailProvider::~GoogleEmailProvider() = default;

std::string GoogleEmailProvider::getEmailContent() {
    std::string description = "Hi! This is a Gmail";
    return description;
}
