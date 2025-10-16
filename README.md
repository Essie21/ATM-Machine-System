# ATM-Machine-System🏧 

## Overview

A simple C++ console-based ATM simulation program that allows users to check their balance, withdraw money, and deposit funds. The program includes input validation and user-friendly error messages.

## Features

- Check account balance
- Withdraw money with validation
- Deposit money into account
- Input validation for all transactions
- Menu-driven interface

## How It Works

**Main Menu Options:**

1. Balance Inquiry - View current account balance
2. Cash Withdrawal - Withdraw money from account
3. Cash Deposit - Deposit money into account
4. Quit - Exit the program

**Transaction Rules:**

- Initial balance must be entered (invalid balances default to $0)
- Withdrawals cannot exceed available balance
- Withdrawal amounts must be greater than $0
- All monetary values displayed with 2 decimal precision

## Program Flow

**1. Initialization**

- User enters starting account balance
- System validates input (sets to $0 if invalid)


**2. Transaction Menu**

- Display menu with 4 options
- User selects desired transaction


**3. Balance Check**
- Displays current account balance formatted as currency

**4. Withdrawal Process**
- Prompts user for withdrawal amount
- Validates amount is positive and within balance
- Deducts amount and displays new balance
- Shows error if insufficient funds or invalid amount

**5. Deposit Process**
- Prompts user for deposit amount
- Adds amount to account balance
- Displays updated balance

**6. Exit**
- User selects quit option to exit program


## Language Used

C++

---
>_An educational project demonstrating basic ATM functionality using C++ programming fundamentals._
