#include<stdio.h>
int main(){
    int totalSeats=50;
    int bookedSeats=0;
    int choice,seats;
    do{
        printf("\nTicket Booking System\n");
        printf("1.View Available Seats\n");
        printf("2.Book Tickets\n");
        printf("3.Cancel Tickets\n");
        printf("4.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            printf("Available Seats:%d\n",totalSeats-bookedSeats);
            break;
        case 2:
            printf("Enter number of tickets to book:");
            scanf("%d",&seats);
            if(seats<=(totalSeats-bookedSeats)){
                bookedSeats+=seats;
                printf("%d Ticket(s) Booked Successfully!\n",seats);
            }else{
                printf("Not enough seats available!\n");
            }
            break;
        case 3:
            printf("Enter number of tickets to cancel:");
            scanf("%d",&seats);
            if(seats<=bookedSeats){
                bookedSeats-=seats;
                printf("%d Ticket(s) Cancelled Successfully!\n",seats);
            }else{
                printf("Invalid number of tickets!\n");
            }
            break;
        case 4:
            printf("Thank You for Using the Ticket Booking System!\n");
            break;
        default:
            printf("Invalid Choice!\n");
        }
    }while(choice!=4);
    return 0;
}