//
// Created by keylo on 19/5/2022.
//

#ifndef MY_PROJECT_NAME_EMAILSENDER_H
#define MY_PROJECT_NAME_EMAILSENDER_H

#include "IEmail.h"

class EmailSender {
private:
    EmailSender();
public:
    static EmailSender* getInstance();

    virtual ~EmailSender();

    static std::string sendingEmail(IEmail*);
};


#endif //MY_PROJECT_NAME_EMAILSENDER_H