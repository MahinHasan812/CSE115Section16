#include<stdio.h>
int main()
{
  int choice;
  printf("1. SMS Offer\n");
  printf("2. Talk-Time Offer\n");
  printf("3. Internet Offer\n");
  printf("4. Monthly Plan Offer\n");
  printf("5. Recharge Offer\n");
  printf("6. Star Customer Offer\n");
  printf("7. Gold Customer Offer\n");
  printf("8. Platinum Customer Offer\n");
  printf("9. Pay as you Go\n");
  printf("Choose any offer between <1-9>:");
  scanf("%d", &choice);

  switch (choice)
  {
   case 1:
    printf("SMS Offer:\n 1. 50 sms: 5.99 taka\n 2. 100 sms: 8.02 taka\n 3. 300 sms: 15.00 taka\n valid 7 days\n");
    break;
   case 2:
    printf("Talk-Time offer:\n 1. 50 minutes: 31.95 taka\n 2. 300 minutes: 179.89 taka\n 3. 1000 minutes: 599.63 taka\n validity 15 days");
    break;
   case 3:
    printf("Internet Offer:\n 1. 100 MB: 42.70 taka\n 2. 250 MB: 52.37 taka\n 3. 1.5 GB: 93.95 taka\n validity 30 days\n");
    break;
   case 4:
    printf("Monthly Plan Offer:\n 500 MB, 200 SMS, 100 minutes Talk-Time: 293.47 taka\n validity 30 days\n");
    break;
   case 5:
    printf("Recharge Offer:\n 250 MB, 20 SMS: on 29 taka recharge\n validity 21 days\n");
    break;
   case 6:
    printf("Star Customer Offer:\n 3 GB, 100 minutes, 50 sms: 120 taka\n validity 45 days\n");
    break;
   case 7:
    printf("Gold Customer Offer:\n 5GB, 150 minutes, 100 sms: 130 taka\n validity 45 days\n");
    break;
   case 8:
    printf("Platinum Customer Offer:\n 9 GB, 200 minutes, 150 sms: 150 taka\n validity 45 days \n");
    break;
   case 9:
    printf("Pay as you Go:\n 60 taka per second\n validity till balance remains\n");
    break;
   default:
    printf("Sorry! There is no offer available");
    break;
  }
  return 0;
}
