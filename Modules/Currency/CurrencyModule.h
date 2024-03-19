/*
 * Made by: Rubinho
 * This is the first module that I created. A Currency Converter which you choose the currency that you "have"
 * A little confusing I know. Will create a file to save the current currency that you have and which operation you selected will pass your currency to the currency you selected or you can revert a amount of an currency to the saved one.
 * A feature to be add is you can select a "not use the saved currency" and select both currency you want to make an exchange and it gives the value.
 *
 */


/*
 * TODO
 * All the conversion system functions (CHAT GPT) just paste it in there. But firstly just correct them.
 */


#define CURRENCYMODULE_H

// Number of Currencies (Enum Size) Counting from 0, Don't forget to change if you add more currencies
#define CurrencySize 9 
// File Name
#define CurrencyFile "Currency.txt"


// ****** Enum *******

enum Currency {
    USD,    // US Dollar
    EUR,    // Euro
    GBP,    // British Pound
    JPY,    // Japanese Yen
    CNY,    // Chinese Yuan
    CAD,    // Canadian Dollar
    AUD,    // Australian Dollar
    CHF,    // Swiss Franc
    INR,    // Indian Rupee
    RUB     // Russian Ruble
};


// ****** Menu Functions ********

enum Currency ChooseBaseCoin(enum currencyChoosen);

void menuCurrency(void);

void menuCurrencyConverter(void);

void ChooseCoinConvertTo();

// ****** Currency Converter Functions *******




// ****** File Managment Functions *******

void SaveCurrency(enum Currency);

enum Currency LoadCurrency(void);

void DeleteCurrency(void);

// ******* Useful Functions *******
