// LOCAL TRAIN RESERVATION SYSTEM

#include <stdio.h>
void station(int n) {
  switch (n) {
  case 0: printf("Sealdah TM    "); break;
  case 1: printf("Bidhannagar Rd"); break;
  case 2:
    printf("Dum Dum JN    ");
    break;
  case 3:
    printf("Belghoria     ");
    break;
  case 4:
    printf("Agarpara      ");
    break;
  case 5:
    printf("Sodepur       ");
    break;
  case 6:
    printf("Khardah       ");
    break;
  case 7:
    printf("Titagarh      ");
    break;
  case 8:
    printf("Barrackpore HI");
    break;
  case 9:
    printf("Palta         ");
    break;
  case 10:
    printf("Icchapur      ");
    break;
  case 11:
    printf("Shyamnagar    ");
    break;
  case 12:
    printf("Jagadal       ");
    break;
  case 13:
    printf("Kankipara     ");
    break;
  case 14:
    printf("Naihati JN    ");
    break;
  }
  return;
}

void stationcode(void) {
  printf("\nStation Code Table:\n");
  printf("\n       Sealdah TM <---> Naihati JN\n");
  printf("\n Station Sealdah TM            ---- Code: 0\n");
  printf("\n Station Bidhannagar Road      ---- Code: 1");
  printf("\n Station Dum Dum JN            ---- Code: 2");
  printf("\n Station Belghoria             ---- Code: 3");
  printf("\n Station Agarpara              ---- Code: 4");
  printf("\n Station Sodepur               ---- Code: 5");
  printf("\n Station Khardaha              ---- Code: 6");
  printf("\n Station Titagarh              ---- Code: 7");
  printf("\n Station Barrackpore HI        ---- Code: 8");
  printf("\n Station Palta                 ---- Code: 9");
  printf("\n Station Ichchhapur            ---- Code: 10");
  printf("\n Station Shyamnagar            ---- Code: 11");
  printf("\n Station Jagaddal              ---- Code: 12");
  printf("\n Station Kankinara             ---- Code: 13\n");
  printf("\n Station Naihati JN            ---- Code: 14\n");
  return;
}

void book(void) {
  int departure, arrival;
  int index, ticketcost;
  int pnum, cnum;
  int returnjor;
  int num;
  printf("\nEnter station code for departure: ");
  scanf("%d", &departure);
  station(departure);
  while (departure > 14 || departure < 0) {
    printf("ERROR 611! Station code does not exist\nPlease enter valid station "
           "code: ");
    scanf("%d", &departure);
    station(departure);
  }
  printf("\nEnter station code for arrival: ");
  scanf("%d", &arrival);
  while (departure == arrival) {
    printf("ERROR 613! Station of departure and Station of arrival cannot be "
           "same\nPlease enter valid station code: ");
    scanf("%d", &arrival);
  }
  station(arrival);
  while (arrival > 14 || arrival < 0) {
    printf("ERROR 612! Station code does not exist\nPlease enter valid station "
           "code: ");
    scanf("%d", &arrival);
    station(arrival);
  }

  index = arrival - departure;
  if (index < 0) {
    index = -1 * index;
  }

  printf("\n\n(20 Max Allowed At A Time! For more passengers you can book "
         "again separately!)\nEnter number of passengers: ");
  scanf("%d", &pnum);
  while (pnum < 1) 
  {
    printf("ERROR 621! Passenger number cannot be null!");
    printf("\nPlease enter correct number of passengers: ");
    scanf("%d", &pnum);
  }
  while (pnum > 20 || pnum < 1) 
  {
    printf("ERROR 622! Passenger number invalid");
    printf("\nPlease enter correct number of passengers: ");
    scanf("%d", &pnum);
    
  }

  printf("Enter the children among them: ");
  scanf("%d", &cnum);
  while (cnum > pnum) 
  {
    printf("ERROR 623! Children number cannot exceed passenger number! "
           "\nPlease enter correct number of children passengers: ");
    scanf("%d", &cnum);
    while (cnum == pnum) 
    {
      printf("ERROR 624! Children number cannot be same as passenger number! "
             "\nPlease enter correct number of children passengers: ");
      scanf("%d", &cnum);
    }
  }
  while (cnum == pnum) {
    printf("ERROR 624! Children number cannot be same as passenger number! "
           "\nPlease enter correct number of children passengers: ");
    scanf("%d", &cnum);
    while (cnum > pnum) {
      printf("ERROR 623! Children number cannot exceed passenger number! "
             "\nPlease enter correct number of children passengers: ");
      scanf("%d", &cnum);
    }
  }
  ticketcost = 5 + (index * ((pnum - cnum) * 2)) + (index * (cnum * 1));
  printf("\nDo you want Return Journey?\n");
  printf("Enter 0 for no and 1 for yes: ");
  scanf("%d", &returnjor);
  while ((returnjor != 0) && (returnjor != 1)) {
    printf("ERROR 631! Please enter the correct Digit: ");
    scanf("%d", &returnjor);
  }
  if (returnjor == 1) {
    ticketcost = ticketcost * 2;
  } else {
    ticketcost = ticketcost * 1;
  }

  printf("\n\n PROCESSING....     DONE!!\n\n");
  printf("********************************************************\n");
  printf("* Eastern Railways wishes you a happy and safe journey *\n");
  printf("*                                                      *\n");
  printf("* TRAVEL TICKET                                        *\n");
  printf("*                                                      *\n");
  printf("* Board: ");
  station(departure);
  printf("     Arrive: ");
  station(arrival);
  printf("     *\n*                                                      *\n");
  if (pnum < 10) {
    printf("* Total Passengers: %d      Adult: %d   Children: %d      *\n",
           pnum, pnum - cnum, cnum);
  } else if (pnum > 9 && (pnum - cnum) < 10 && cnum < 10) {
    printf("* Total Passengers: %d     Adult: %d   Children: %d      *\n", pnum,
           pnum - cnum, cnum);
  } else if (pnum > 9 && cnum < 9) {
    printf("* Total Passengers: %d     Adult: %d  Children: %d      *\n", pnum,
           pnum - cnum, cnum);
  } else if (pnum > 9 && (pnum - cnum) < 10 && cnum > 9) {
    printf("* Total Passengers: %d     Adult: %d   Children: %d     *\n", pnum,
           pnum - cnum, cnum);
  } else {
    printf("* Total Passengers: %d     Adult: %d  Children: %d     *\n", pnum,
           pnum - cnum, cnum);
  }
  if (ticketcost < 10) {
    printf("* Ticket Price: %d          Return Included: ", ticketcost);
  } else if (ticketcost < 100) {
    printf("* Ticket Price: %d         Return Included: ", ticketcost);
  } else if (ticketcost < 1000) {
    printf("* Ticket Price: %d        Return Included: ", ticketcost);
  } else {
    printf("* Ticket Price: %d       Return Included: ", ticketcost);
  }
  if (returnjor == 1)
    printf("Yes        *\n");
  else
    printf("No         *\n");
  printf("*                                                      *\n");
  printf("********************************************************\n\n");
  if (returnjor == 1) {
    printf("********************************************************\n");
    printf("* Eastern Railways wishes you a happy and safe journey *\n");
    printf("*                                                      *\n");
    printf("* TRAVEL TICKET (RETURN)                               *\n");
    printf("*                                                      *\n");
    printf("* Board: ");
    station(departure);
    printf("     Arrive: ");
    station(arrival);
    printf(
        "     *\n*                                                      *\n");
    if (pnum < 10) {
      printf("* Total Passengers: %d      Adult: %d   Children: %d      *\n",
             pnum, pnum - cnum, cnum);
    } else if (pnum > 9 && (pnum - cnum) < 10 && cnum < 10) {
      printf("* Total Passengers: %d     Adult: %d   Children: %d      *\n",
             pnum, pnum - cnum, cnum);
    } else if (pnum > 9 && cnum < 9) {
      printf("* Total Passengers: %d     Adult: %d  Children: %d      *\n",
             pnum, pnum - cnum, cnum);
    } else if (pnum > 9 && (pnum - cnum) < 10 && cnum > 9) {
      printf("* Total Passengers: %d     Adult: %d   Children: %d     *\n",
             pnum, pnum - cnum, cnum);
    } else {
      printf("* Total Passengers: %d     Adult: %d  Children: %d     *\n", pnum,
             pnum - cnum, cnum);
    }
    if (ticketcost < 10) {
      printf("* Ticket Price: %d          Return Included: ", ticketcost);
    } else if (ticketcost < 100) {
      printf("* Ticket Price: %d         Return Included: ", ticketcost);
    } else if (ticketcost < 1000) {
      printf("* Ticket Price: %d        Return Included: ", ticketcost);
    } else {
      printf("* Ticket Price: %d       Return Included: ", ticketcost);
    }
    if (returnjor == 1)
      printf("Yes        *\n");
    else
      printf("No         *\n");
    printf("*                                                      *\n");
    printf("********************************************************\n\n");
  }
  return;
}

void menu() {
  int want;
  int num, num2;
  int x;
  printf("\nWelcome to Eastern Railways \n\n");
  printf("What would you like? \n");
  printf("1. Ticket Reservation\n");
  printf("2. Ticket Cost Structure\n");
  printf("3. Station Code Information\n");
  printf("\nEnter your choice: ");
  scanf("%d", &want);
  printf("\n");
  while (want > 3 || want == 0) {
    printf("ERROR 601! Please Enter Correct Choice: ");
    scanf("%d", &want);
  }
  switch (want) {
  case 1:
    printf("\nDo you want to know Station Code first?\nOr do you want to "
           "continue?\nPress 1 for Station Code Information or 0 to "
           "continue\n\nEnter your choice: ");
    scanf("%d", &num);
    while (num != 1 && num != 0) {
      printf("\nERROR 641! Please Enter Correct Digit: ");
      scanf("%d", &num);
    }
    if (num == 1) {
      stationcode();
      printf(
          "\n\nNow do you want to continue your booking?\nYou can press 1 to "
          "continue or 0 to exit the booking process\n\nEnter your choice: ");
      scanf("%d", &num2);
      while (num2 != 1 && num2 != 0) {
        printf("\nERROR 642! Please Enter Correct Digit: ");
        scanf("%d", &num2);
      }
      if (num2 == 1) {
        book();
      }
    } else {
      book();
    }
    break;

  case 2:
    printf("\nTicket Cost Structure:\n\n");
    printf("Railway Fixed Preliminary Cost (a) -> 5\nCost per Station Index "
           "(b) -> 1 x Station Index Difference\nAdult Passenger (c) -> 2 x "
           "Number of Adult Passenger\nChild Passenger (d) -> 1 x Number of "
           "Child Passenger\n\nFinal Cost = a + (b x c) + (b x d)\n\n");
    break;

  case 3:
    stationcode();
    break;
  }
  printf("\nDo you want to continue or end the process?\n");
  printf("Press 1 to continue again or 0 to exit!\n");
  scanf("%d", &x);
  while (x != 0 && x != 1) {
    printf("ERROR 602! Please Enter Correct Choice: ");
    scanf("%d", &x);
  }
  if (x == 1) {
    menu();
  }
}

int main(void) {
  menu();
  return 0;
}