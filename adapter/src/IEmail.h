//
// Created by keylo on 19/5/2022.
//

#ifndef LAB05_DP_PART1_ALPHAK03_IEMAIL_H
#define LAB05_DP_PART1_ALPHAK03_IEMAIL_H
#include "iostream"

class IEmail {
public:
    IEmail() = default;

    virtual std::string getEmailContent() = 0;

    virtual ~IEmail() = default;
};


#endif //LAB05_DP_PART1_ALPHAK03_IEMAIL_H
