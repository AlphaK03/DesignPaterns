//
// Created by keylo on 19/5/2022.
//

#ifndef MY_PROJECT_NAME_GOOGLEEMAILPROVIDER_H
#define MY_PROJECT_NAME_GOOGLEEMAILPROVIDER_H
#include "IEmail.h"

class GoogleEmailProvider : public IEmail{
public:
    GoogleEmailProvider();

    ~GoogleEmailProvider() override;

    std::string getEmailContent() override;
};


#endif //MY_PROJECT_NAME_GOOGLEEMAILPROVIDER_H
