/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Rockhopper Technologies, Inc. All rights reserved.
 *  Licensed under the MIT License. 
 *  See LICENSE in the project for license information.
 *--------------------------------------------------------------------------------------------*/

#include "Account.hpp"

Account::Account(): balance(0) {}

Account::~Account() {}

void Account::deposit(double amount) { balance += amount; }

void Account::withdraw(double amount) { balance -= amount; }

double Account::getBalance() { return balance; }
