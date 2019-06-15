/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Rockhopper Technologies, Inc. All rights reserved.
 *  Licensed under the MIT License. 
 *  See LICENSE in the project for license information.
 *--------------------------------------------------------------------------------------------*/


#include <iomanip>
#include <iostream>
#include "Account.hpp"

int main() {
  std::cout << std::setprecision(2);

  Account *account = new Account();
  account->deposit(100);
  std::cout << "balance after deposit: " << account->getBalance() << std::endl;
  account->withdraw(50);
  std::cout << "balance after withdraw: " << account->getBalance() << std::endl;  

  return EXIT_SUCCESS;
}
