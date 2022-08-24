#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef CARD_H
#define CARD_H
#endif

typedef unsigned char uint8_t;


typedef struct ST_cardData_t
{
	uint8_t cardHolderName[25];
	uint8_t primaryAccountNumber[20];
	uint8_t cardExpirationDate[6];
}ST_cardData_t;


typedef enum EN_cardError_t
{
	OK, WRONG_NAME, WRONG_EXP_DATE, WRONG_PAN
}EN_cardError_t;

enum EN_cardError_t err;
enum EN_cardError_t pass;
