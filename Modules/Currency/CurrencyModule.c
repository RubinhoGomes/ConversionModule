/*
* Made By: Rubinho
* This is a Module Converter. That Means that every module is a converter for specific situations.
* The first Module that I created was the currency converter. Now I will expand this program to learn library managment, how to organize code, and getting more knowledge about pointers and really everthing else.
*
*/

#include "CurrencyModule.h"

// ####### Menu #######

enum Currency ChooseBaseCoin(enum currencyChoosen){

  printf("*----- Choose the Base Coin -----* |\n");
  printf("| 1 - United State Dollar (USD)  |\n");
  printf("| 2 - Euro (EUR)                 |\n");
  printf("| 3 - British Pound (GDP)        |\n");
  printf("| 4 - Japanese Yen (JPY)         |\n");
  printf("| 5 - Chinese Yuan (CNY)         |\n");
  printf("| 6 - Canadian Dollar (CAD)      |\n");
  printf("| 7 - Australian Dollar (AUD)    |\n");
  printf("| 8 - Swiss Franc (CHF)          |\n");
  printf("| 9 - Indian Rupee (INR)         |\n");
  printf("| 10 - Russian Ruble (RUB)       |\n");
  printf("|********************************|\n");

}

void menuCurrency(){

  int exitConfirmation = 0;

  while(exitConfirmation == 0){

    // Load all the functions and variables needed to execute the follow code 

    printf("### Welcome to the Currency Converter ###\n");
    printf("1 - Choose Base Coin\n");
    printf("2 - Choose Coin to Convert\n");
    printf("3 - Convert\n");
    printf("0 - Exit\n")

    int option;
    scanf("%d", &option);

    switch(option){
      case 1:
        ChooseBaseCoin();
        break;
      case 2:
        ChooseCoinToConvert();
        break;
      case 3:
        Convert();
        break;
      case 0:
        exitConfirmation = 1;
        break;
      default:
        printf("Invalid Option\n");
        break;
    }
  }
}

void ChooseCoinToConvert(){

  printf("*----- Choose the Coin to Convert -----* |\n");
  printf("| 1 - United State Dollar (USD)  |\n");
  printf("| 2 - Euro (EUR)                 |\n");
  printf("| 3 - British Pound (GDP)        |\n");
  printf("| 4 - Japanese Yen (JPY)         |\n");
  printf("| 5 - Chinese Yuan (CNY)         |\n");
  printf("| 6 - Canadian Dollar (CAD)      |\n");
  printf("| 7 - Australian Dollar (AUD)    |\n");
  printf("| 8 - Swiss Franc (CHF)          |\n");
  printf("| 9 - Indian Rupee (INR)         |\n");
  printf("| 10 - Russian Ruble (RUB)       |\n");
  printf("|********************************|\n");
  printf("| * Enter The Coin you want to convert:\n |");
  printf("| -> ");
  printf("|*****************************************|\n");

}

// You can use the return scanf statment that can be used to validate if the user entered a number or anything else
// If they entered an "Not A Number", will be returned to the main menu so the user can redefine the currency they want to use
void menuCurrencyConverter(void){
  printf("You choosen : (Saved Coin)");
  // If it's "Null", Need to select before any further operations
  printf("You have selected : (Selected Previous Currency)")
}

// ####### Currency Converter Functions #######

// *** Euro *** 
// All the operations that can be done in the Euro currency follow below

void ConvertEuroToUSD(int amout*){
  amount = amount * 1.18;
}

void ConvertEuroToGBP(int amount*){
  amount = amount * 0.86;
}

void ConvertEuroToJPY(int amount*){
  amount = amount * 130.68;
}

void ConvertEuroToCNY(int amount*){
  amount = amount * 7.67;
}

void ConvertEuroToCAD(int amount*){
  amount = amount * 1.48;
}

void ConvertEuroToAUD(int amount*){
  amount = amount * 1.56;
}

void ConvertEuroToCHF(int amount*){
  amount = amount * 1.08;
}

void ConvertEuroToINR(int amount*){
  amount = amount * 88.6;
}

void ConvertEuroToRUB(int amount*){
  amount = amount * 90.6;
}

// *** USD ***
// All the operations that can be done in USD currency follow below 


void ConvertUSDToEuro(int amount*){
  amount = amount * 0.85;
}

void ConvertUSDToGBP(int amount*){
  amount = amount * 0.73;
}

void ConvertUSDToJPY(int amount*){
  amount = amount * 110.14;
}

void ConvertUSDToCNY(int amount*){
  amount = amount * 6.48;
}

void ConvertUSDToCAD(int amount*){
  amount = amount * 1.25;
}

void ConvertUSDToAUD(int amount*){
  amount = amount * 1.31;
}

void ConvertUSDToCHF(int amount*){
  amount = amount * 0.91;
}

void ConvertUSDToINR(int amount*){
  amount = amount * 74.8;
}

void ConvertUSDToRUB(int amount*){
  amount = amount * 76.4;
}

// *** GBP ***
// All the operations that can be done in GBP currency follow belo

void ConvertGBPToEuro(int amount*){
  amount = amount * 1.16;
}

void ConvertGBPToUSD(int amount*){
  amount = amount * 1.37;
}

void ConvertGBPToJPY(int amount*){
  amount = amount * 150.63;
}

void ConvertGBPToCNY(int amount*){
  amount = amount * 8.88;
}

void ConvertGBPToCAD(int amount*){
  amount = amount * 1.71;
}

void ConvertGBPToAUD(int amount*){
  amount = amount * 1.79;
}

void ConvertGBPToCHF(int amount*){
  amount = amount * 1.24;
}

void ConvertGBPToINR(int amount*){
  amount = amount * 102.3;
}

void ConvertGBPToRUB(int amount*){
  amount = amount * 104.1;
}

// *** JPY ***
// All the operations that can be done in JPY currency follow belo

void ConvertJPYToEuro(int amount*){
  amount = amount * 0.0070;
}

void ConvertJPYToUSD(int amount*){
  amount = amount * 0.0091;
}

void ConvertJPYToGBP(int amount*){
  amount = amount * 0.0066;
}

void ConvertJPYToCNY(int amount*){
  amount = amount * 0.059;
}

void ConvertJPYToCAD(int amount*){
  amount = amount * 0.011;
}

void ConvertJPYToAUD(int amount*){
  amount = amount * 0.011;
}

void ConvertJPYToCHF(int amount*){
  amount = amount * 0.0077;
}

void ConvertJPYToINR(int amount*){
  amount = amount * 0.63;
}

void ConvertJPYToRUB(int amount*){
  amount = amount * 0.64;
}

// *** CNY ***
// All the operations that can be done in CNY currency follow belo

void ConvertCNYToEuro(int amount*){
  amount = amount * 0.13;
}

void ConvertCNYToUSD(int amount*){
  amount = amount * 0.16;
}

void ConvertCNYToGBP(int amount*){
  amount = amount * 0.11;
}

void ConvertCNYToJPY(int amount*){
  amount = amount * 16.9;
}

void ConvertCNYToCAD(int amount*){
  amount = amount * 0.19;
}

void ConvertCNYToAUD(int amount*){
  amount = amount * 0.20;
}

void ConvertCNYToCHF(int amount*){
  amount = amount * 0.14;
}

void ConvertCNYToINR(int amount*){
  amount = amount * 11.5;
}

void ConvertCNYToRUB(int amount*){
  amount = amount * 11.7;
}

// *** CAD ***
// All the operations that can be done in CAD currency follow belo

void ConvertCADToEuro(int amount*){
  amount = amount * 0.67;
}

void ConvertCADToUSD(int amount*){
  amount = amount * 0.82;
}

void ConvertCADToGBP(int amount*){
  amount = amount * 0.57;
}

void ConvertCADToJPY(int amount*){
  amount = amount * 89.3;
}

void ConvertCADToCNY(int amount*){
  amount = amount * 5.3;
}

void ConvertCADToAUD(int amount*){
  amount = amount * 1.05;
}

void ConvertCADToCHF(int amount*){
  amount = amount * 0.73;
}

void ConvertCADToINR(int amount*){
  amount = amount * 60.0;
}

void ConvertCADToRUB(int amount*){
  amount = amount * 61.0;
}

// *** AUD ***
// All the operations that can be done in AUD currency follow belo

void ConvertAUDToEuro(int amount*){
  amount = amount * 0.64;
}

void ConvertAUDToUSD(int amount*){
  amount = amount * 0.78;
}

void ConvertAUDToGBP(int amount*){
  amount = amount * 0.54;
}

void ConvertAUDToJPY(int amount*){
  amount = amount * 84.6;
}

void ConvertAUDToCNY(int amount*){
  amount = amount * 5.0;
}

void ConvertAUDToCAD(int amount*){
  amount = amount * 0.95;
}

void ConvertAUDToCHF(int amount*){
  amount = amount * 0.70;
}

void ConvertAUDToINR(int amount*){
  amount = amount * 57.5;
}

void ConvertAUDToRUB(int amount*){
  amount = amount * 58.5;
}

// *** CHF ***
// All the operations that can be done in CHF currency follow belo

void ConvertCHFToEuro(int amount*){
  amount = amount * 0.91;
}

void ConvertCHFToUSD(int amount*){
  amount = amount * 1.11;
}

void ConvertCHFToGBP(int amount*){
  amount = amount * 0.77;
}

void ConvertCHFToJPY(int amount*){
  amount = amount * 120.0;
}

void ConvertCHFToCNY(int amount*){
  amount = amount * 7.1;
}

void ConvertCHFToCAD(int amount*){
  amount = amount * 1.37;
}

void ConvertCHFToAUD(int amount*){
  amount = amount * 1.43;
}

void ConvertCHFToINR(int amount*){
  amount = amount * 82.0;
}

void ConvertCHFToRUB(int amount*){
  amount = amount * 83.0;
}

// *** INR ***
// All the operations that can be done in INR currency follow belo

void ConvertINRToEuro(int amount*){
  amount = amount * 0.013;
}

void ConvertINRToUSD(int amount*){
  amount = amount * 0.016;
}

void ConvertINRToGBP(int amount*){
  amount = amount * 0.011;
}

void ConvertINRToJPY(int amount*){
  amount = amount * 1.7;
}

void ConvertINRToCNY(int amount*){
  amount = amount * 0.10;
}

void ConvertINRToCAD(int amount*){
  amount = amount * 0.019;
}

void ConvertINRToAUD(int amount*){
  amount = amount * 0.018;
}

void ConvertINRToCHF(int amount*){
  amount = amount * 0.012;
}

void ConvertINRToRUB(int amount*){
  amount = amount * 1.0;
}

// *** RUB ***
// All the operations that can be done in RUB currency follow belo

void ConvertRUBToEuro(int amount*){
  amount = amount * 0.013;
}

void ConvertRUBToUSD(int amount*){
  amount = amount * 0.016;
}

void ConvertRUBToGBP(int amount*){
  amount = amount * 0.011;
}

void ConvertRUBToJPY(int amount*){
  amount = amount * 1.7;
}

void ConvertRUBToCNY(int amount*){
  amount = amount * 0.10;
}

void ConvertRUBToCAD(int amount*){
  amount = amount * 0.019;
}

void ConvertRUBToAUD(int amount*){
  amount = amount * 0.018;
}

void ConvertRUBToCHF(int amount*){
  amount = amount * 0.012;
}

void ConvertRUBToINR(int amount*){
  amount = amount * 1.0;
}

// ####### File Managment Functions #######

void SaveCurrency(enum Currency){

}

enum Currency LoadCurrency(void){

}

void DeleteCurrency(void){

}

// ####### Useful Functions #######
