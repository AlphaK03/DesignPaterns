//
// Created by keylo on 19/5/2022.
//

#include "EmailSender.h"

EmailSender::EmailSender() = default;

EmailSender::~EmailSender() = default;

std::string EmailSender::sendingEmail(IEmail * email) {
    return email->getEmailContent();
}

EmailSender *EmailSender::getInstance() {
    static EmailSender instance;
    return &instance;
}


