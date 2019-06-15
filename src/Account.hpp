/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Rockhopper Technologies, Inc. All rights reserved.
 *  Licensed under the MIT License. 
 *  See LICENSE in the project for license information.
 *--------------------------------------------------------------------------------------------*/


#pragma once

class Account {
 public:
  Account();
  virtual ~Account();

  void deposit(double amount);
  void withdraw(double amount);
  double getBalance();

 private:
  double balance;
};