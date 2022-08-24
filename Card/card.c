#include "card.h"



EN_cardError_t getCardHolderName(ST_cardData_t* cardData)
{
	char* Name;
	int BufferSize = 24;
	printf("Please enter your name.""\n");
	Name = (char*)malloc(BufferSize * sizeof(char));
	fgets(Name, 25, stdin);
	int namelen = strlen(Name);
	if (20 >= namelen || namelen >= 24 || namelen == NULL)
	{
		return WRONG_NAME;
	}
	else
	{
		strcpy(cardData->cardHolderName, Name);
		return OK;
	};
};

EN_cardError_t getCardExpiryDate(ST_cardData_t* cardData)
{
	printf("Please enter your card expiration date in this format MM/YY");
	
	scanf("%[^\n]*c", &cardData->cardExpirationDate);
	if (cardData->cardExpirationDate[2] != '/' || strlen(cardData->cardExpirationDate) != 5 
		|| cardData->cardExpirationDate == NULL || isdigit(cardData->cardExpirationDate[0]) == 0 || isdigit(cardData->cardExpirationDate[1]) == 0 || isdigit(cardData->cardExpirationDate[3]) == 0 || isdigit(cardData->cardExpirationDate[4]) == 0)
	{
		return WRONG_EXP_DATE;
	}
	else
	{
		return OK;
	}

};

EN_cardError_t getCardPAN(ST_cardData_t* cardData)
{
	printf("Please Enter Your Pan Number");
	gets(cardData->primaryAccountNumber);
	if (strlen(cardData->primaryAccountNumber) < 16 || strlen(cardData->primaryAccountNumber) > 19)
	{
		return WRONG_PAN;
	}
	else
	{
		return OK;
	};
};