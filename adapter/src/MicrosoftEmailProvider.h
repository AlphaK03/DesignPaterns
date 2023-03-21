//
// Created by keylo on 19/5/2022.
//

#ifndef MY_PROJECT_NAME_MICROSOFTEMAILPROVIDER_H
#define MY_PROJECT_NAME_MICROSOFTEMAILPROVIDER_H
#include "iostream"
#include "IEmailFormProvider.h"

class MicrosoftEmailProvider : public IEmailFormProvider{
public:
    MicrosoftEmailProvider();

    ~MicrosoftEmailProvider() override;

    std::string getEmailContent() override;
};


#endif //MY_PROJECT_NAME_MICROSOFTEMAILPROVIDER_H
