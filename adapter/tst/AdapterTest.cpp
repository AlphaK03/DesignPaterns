//
// Created by keylo on 20/5/2022.
//
#include "gtest/gtest.h"
#include "iostream"
#include "EmailSender.h"
#include "GoogleEmailProvider.h"
#include "MicrosoftEmailProvider.h"
#include "MicrosoftEmailAdapter.h"

TEST(AdapterTestSuite, PatterAdapterTest){

    auto* hotmail = new MicrosoftEmailProvider();
    IEmail* hotmailAdapted = new MicrosoftEmailAdapter(hotmail);
    IEmail* gmail = new GoogleEmailProvider();

    EmailSender* emailSender = EmailSender::getInstance();

    ASSERT_EQ(emailSender->sendingEmail(gmail), "Hi! This is a Gmail");

    ASSERT_EQ(emailSender->sendingEmail(hotmailAdapted), "Hi! This is a Hotmail");

    // liberar la memoria
    delete hotmailAdapted;
    delete hotmail;
    delete gmail;
}



