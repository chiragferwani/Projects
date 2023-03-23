package com.serviceImpl;

import java.util.Scanner;

import com.model.Account;

public class SBI {

	Account ac = new Account();
	Scanner sc = new Scanner(System.in);

	public void createAccount() {

		System.out.println("Enter Account Number:");
		int accNo = sc.nextInt();

		System.out.println("Enter Your Name:");
		String name = sc.next();

		System.out.println("Enter Your Mobile Number:");
		long mobile = sc.nextLong();

		System.out.println("Enter Your balance:");
		float balance = sc.nextFloat();
		ac.accountNumber = accNo;
		ac.name = name;
		ac.mobileNum = mobile;
		ac.balance = balance;
	}

	private int getAccountNumber() {
		System.out.println("Enter Account Numb:");
		int accNum = sc.nextInt();
		return accNum;
	}

	public void displayBalance() {
		int accNum = getAccountNumber();
		if (accNum == ac.accountNumber) {
			System.out.println("Your account balance is :" + ac.balance);
		} else {
			System.out.println("Invalid account number...Try again..");
		}
	}

	public void displayAccountDetails() {
		int accNum = getAccountNumber();
		if (accNum == ac.accountNumber) {
			System.out.println("Account Details are: Name:" + ac.name + " , Account Numb:" + ac.accountNumber
					+ "  , Mobile :" + ac.mobileNum + " Balance: " + ac.balance);
		} else {
			System.out.println("Invalid account number...Try again..");
		}
	}

	public void depositeMoney() {
		System.out.println("Enter AMount to be deposited ?");
		float depositAmount = sc.nextFloat();

		float originalBalance = ac.balance;

		float newBalance = originalBalance + depositAmount;

		ac.balance = newBalance;

	}
	//

}