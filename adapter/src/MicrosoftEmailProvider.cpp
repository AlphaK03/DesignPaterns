//
// Created by keylo on 19/5/2022.
//

#include "MicrosoftEmailProvider.h"

MicrosoftEmailProvider::MicrosoftEmailProvider() = default;

MicrosoftEmailProvider::~MicrosoftEmailProvider() = default;

std::string MicrosoftEmailProvider::getEmailContent() {
    std::string description = "Hi! This is a Hotmail";
    return description;
}
