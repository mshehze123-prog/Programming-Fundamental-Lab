#include <stdio.h>

int main() {
    int vehicleType, parkingType, hours;
    int rate = 0, totalFee;
    printf("Select Vehicle Type:\n");
    printf("1. Car\n");
    printf("2. Bike\n");
    printf("3. Bus\n");
    printf("Enter choice: ");
    scanf("%d",&vehicleType);
    printf("Enter hours parked: ");
    scanf("%d",&hours);
    switch (vehicleType) {
        case 1:
            printf("Select Parking Type for Car:\n");
            printf("1. Regular (Rs. 50/hr)\n");
            printf("2. VIP (Rs. 100/hr)\n");
            printf("Enter choice: ");
            scanf("%d", &parkingType);

            switch (parkingType){
                case 1:
                	rate = 50;
               		break;
                case 2:
                    rate = 100;
                    break;
                default:
                    printf("Invalid parking type for Car!\n");
                    return 0;
            }
            break;
        case 2:
            printf("Select Parking Type for Bike:\n");
            printf("1. Regular (Rs. 20/hr)\n");
            printf("2. Premium (Rs. 40/hr)\n");
            printf("Enter choice: ");
            scanf("%d", &parkingType);
            switch (parkingType){
                case 1:
                    rate = 20;
                    break;
                case 2:
                    rate = 40;
                    break;
                default:
                    printf("Invalid parking type for Bike!\n");
                    return 0;
            }
            break;

        case 3:
            rate = 200;
            break;

        default:
            printf("Invalid vehicle type!\n");
            return 0;
    }
    totalFee = rate * hours;
    printf("Total Parking Fee = Rs. %d\n", totalFee);
    return 0;
}
