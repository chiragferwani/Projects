package com.controller;

import java.util.Scanner;

import com.serviceImpl.SBI;

public class AdminControllers {

	public static void main(String[] args) {
		System.out.println("Bank application started...");
		boolean flag = true;

		SBI sbi = new SBI();
		do {
			System.out.println("1.Create Account");
			System.out.println("2. Display Balance");
			System.out.println("3.Display Account Details..");
			System.out.println("4.Deposite Money");
			System.out.println("5. Withdrawl Money");
			System.out.println("6.Update profile");
			System.out.println("7.Exit the application..");

			Scanner sc = new Scanner(System.in);
			System.out.println("Enter the choice: ");
			int ch = sc.nextInt();
			switch (ch) {
			case 1:
				System.out.println("User Wants to open account...");
				sbi.createAccount();
				break;
			case 2:
				System.out.println("User Wants to Display Balance...");
				sbi.displayBalance();
				break;
			case 3:
				sbi.displayAccountDetails();
				break;
			case 4:
				sbi.depositeMoney();
				break;
			case 5:

				break;
			case 6:

				break;

			case 7:
				System.out.println("exit the application");
				flag = false;
				break;
			default:
				break;
			}
		} while(flag);
	}

}