#include<stdio.h>
#include<string.h>


int single_room = 20;
int double_room = 20;

int single_room_no = 1;
int double_room_no = 101;


struct Customer {
    char name[50];
    int age;
    int room_no;
    char type[10];
};


struct Customer customers[100];
int count = 0;


void singleroom(){
    int n, i, age;

    printf("Enter number of rooms: ");
    scanf("%d",&n);

    if(n <= 0){
        printf("Invalid number of rooms!\n");
        return;
    }

    if(n > single_room){
        printf("Rooms not available!\n");
        return;
    }

    for(i=0;i<n;i++){
        char name[50];

        printf("\nEnter name: ");
        while(getchar()!='\n');
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = 0;

        printf("Enter age: ");
        scanf("%d",&age);

        printf("Allocated Room No: %d\n", single_room_no);

       
        strcpy(customers[count].name, name);
        customers[count].age = age;
        customers[count].room_no = single_room_no;
        strcpy(customers[count].type, "Single");

        count++;
        single_room_no++;
    }

    printf("\nTotal cost: %d\n", 1000 * n);
    single_room -= n;

    printf("Remaining Single Rooms: %d\n", single_room);
}


void doubleroom(){
    int n, i, age;

    printf("Enter number of rooms: ");
    scanf("%d",&n);

    if(n <= 0){
        printf("Invalid number of rooms!\n");
        return;
    }

    if(n > double_room){
        printf("Rooms not available!\n");
        return;
    }

    for(i=0;i<n;i++){
        char name[50];

        printf("\nEnter name: ");
        while(getchar()!='\n');
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = 0;

        printf("Enter age: ");
        scanf("%d",&age);

        printf("Allocated Room No: %d\n", double_room_no);

        
        strcpy(customers[count].name, name);
        customers[count].age = age;
        customers[count].room_no = double_room_no;
        strcpy(customers[count].type, "Double");

        count++;
        double_room_no++;
    }

    printf("\nTotal cost: %d\n", 1600 * n);
    double_room -= n;

    printf("Remaining Double Rooms: %d\n", double_room);
}

void viewBookings(){
    int i;

    if(count == 0){
        printf("No bookings yet!\n");
        return;
    }

    printf("\n--- Booking Details ---\n");

    for(i=0;i<count;i++){
        printf("\nName: %s", customers[i].name);
        printf("\nAge: %d", customers[i].age);
        printf("\nRoom No: %d", customers[i].room_no);
        printf("\nType: %s\n", customers[i].type);
    }
}


void cancelBooking(){
    int room, i, j;

    printf("Enter room number to cancel: ");
    scanf("%d",&room);

    for(i=0;i<count;i++){
        if(customers[i].room_no == room){

            printf("Booking cancelled for %s\n", customers[i].name);

            
            if(strcmp(customers[i].type, "Single") == 0){
                single_room++;
            } else {
                double_room++;
            }

            
            for(j=i;j<count-1;j++){
                customers[j] = customers[j+1];
            }

            count--;
            return;
        }
    }

    printf("Room not found!\n");
}


int main(){
    int choice;

    while(1){
        printf("\n===== HOTEL BOOKING SYSTEM =====\n");
        printf("1. Book Single Room\n");
        printf("2. Book Double Room\n");
        printf("3. View Bookings\n");
        printf("4. Cancel Booking\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                singleroom();
                break;

            case 2:
                doubleroom();
                break;

            case 3:
                viewBookings();
                break;

            case 4:
                cancelBooking();
                break;

            case 5:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
