//
// Created by keylo on 19/5/2022.
//

#include "MicrosoftEmailAdapter.h"

std::string MicrosoftEmailAdapter::getEmailContent() {
    return this->microsoftEmailProvider->getEmailContent();
}

MicrosoftEmailAdapter::MicrosoftEmailAdapter(MicrosoftEmailProvider *microsoftEmailProvider) : microsoftEmailProvider(
        microsoftEmailProvider) {}

MicrosoftEmailAdapter::MicrosoftEmailAdapter() {
    this->microsoftEmailProvider = nullptr;
}

MicrosoftEmailAdapter::~MicrosoftEmailAdapter() = default;
