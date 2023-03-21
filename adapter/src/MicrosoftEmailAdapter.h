//
// Created by keylo on 19/5/2022.
//

#ifndef MY_PROJECT_NAME_MICROSOFTEMAILADAPTER_H
#define MY_PROJECT_NAME_MICROSOFTEMAILADAPTER_H
#include "MicrosoftEmailProvider.h"
#include "IEmail.h"

class MicrosoftEmailAdapter : public IEmail{
private:
    MicrosoftEmailProvider* microsoftEmailProvider;
public:
    MicrosoftEmailAdapter();

    explicit MicrosoftEmailAdapter(MicrosoftEmailProvider *microsoftEmailProvider);

    ~MicrosoftEmailAdapter() override;

    std::string getEmailContent() override;

};


#endif //MY_PROJECT_NAME_MICROSOFTEMAILADAPTER_H
