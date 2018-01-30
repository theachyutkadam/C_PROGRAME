#include "stdio.h"
void main() {
  int movie_name = 0, seats, i, j,ticket_type;
  int ticket[3][5]={{1, 2, 3, 4, 5},{1, 2, 3, 4, 5},{1, 2, 3, 4, 5}};
  printf("*************************************************************\n" );
  printf("1.Avengers : \n" );
  printf("2.Hindi Medium : \n" );
  printf("3.Justise legue : \n" );
  printf("*************************************************************\n" );
  printf("Select your Movies Using Number : ");
  scanf("%d",&movie_name );
  switch (movie_name) {
    case 1:
      printf("You Select Avengers Movie \n" );
    break;

    case 2:
      printf("You Select Hindi Medium Movie \n" );
    break;

    case 3:
      printf("You Select Justise legue Movie \n" );
    break;
    default:
    printf("Yout not select any movie\n" );
  }
  printf("*************************************************************\n" );
  printf("\nPrice of Seats : \n" );
  printf("\t Gold(Rs.500)per Seat" );
  printf("\n" );
  printf("\t Silver(Rs.300)per Seat" );
  printf("\n" );
  printf("\t Platinum(Rs.100)per Seat\n" );
  printf("*************************************************************\n" );
  printf("\n\n" );

  printf("1.Gold\n" );
  printf("2.Silver\n" );
  printf("3.Platinum\n\n" );
  printf("Select Type of seat using Number : " );
  scanf("%d",&ticket_type );
  printf("*************************************************************\n" );

  printf("Enter How many seat you book : " );
  scanf("%d", &seats);
  printf("*************************************************************\n" );


  for (i = 1; i <= ticket_type; i++) {
      if (ticket_type == 1) {
        printf("You Purches %d Gold seats & Our Total Amt Is : %d \n", seats, seats*500 );
        break;
      }else if (ticket_type == 2) {
        printf("You Purches %d Silver seats & Our Total Amt Is : %d \n", seats, seats*300 );
        break;
      }else if (ticket_type == 3) {
        printf("You Purches %d Platinum seats & Our Total Amt Is : %d \n", seats, seats*100 );
        break;
      }
      printf("%d\n", ticket[i][j] );
  }


}
