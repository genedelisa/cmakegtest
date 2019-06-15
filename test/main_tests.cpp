
/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Rockhopper Technologies, Inc. All rights reserved.
 *  Licensed under the MIT License. 
 *  See LICENSE in the project for license information.
 *--------------------------------------------------------------------------------------------*/

#include "Account.hpp"
#include "gtest/gtest.h"

// a test fixture for our account class
struct AccountTest : testing::Test {
 protected:
  Account *account;
  AccountTest() { account = new Account; }
  virtual ~AccountTest() { delete account; }

  // could do this in the ctor, but just showing that this is here
  void SetUp() override { account->deposit(100); }
  void TearDown() override {}
};

// the tests

// https://github.com/google/googletest/blob/master/googletest/docs/primer.md#test-fixtures-using-the-same-data-configuration-for-multiple-tests
// tl;dr use TEST_F if you're using a fixture. F for fixture. clever.
TEST_F(AccountTest, CanDepositMoney) {
  account->deposit(100);
  EXPECT_EQ(200, account->getBalance());
}
TEST_F(AccountTest, CanWithdrawMoney) {
  account->withdraw(50);
  EXPECT_EQ(50, account->getBalance());
}
