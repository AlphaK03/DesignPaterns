//
// Created by keylo on 21/5/2022.
//

#ifndef ADAPTER_IEMAILFORMPROVIDER_H
#define ADAPTER_IEMAILFORMPROVIDER_H
#include "iostream"

class IEmailFormProvider {
public:
    IEmailFormProvider() = default;

    virtual ~IEmailFormProvider() = default;

    virtual std::string getEmailContent() = 0;
};


#endif //ADAPTER_IEMAILFORMPROVIDER_H
