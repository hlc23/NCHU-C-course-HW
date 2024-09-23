#include<stdio.h>

int main(){
    int t, people, city, flight, daily_cost;
    float money, exchange;
    scanf("%d", &t);
    while (t--){
        scanf("%f %d %d", &money, &people, &city);
        
        switch (city) {
            case 0:
                flight = 15000;
                exchange = 4;
                daily_cost = 15000;
                money -= people * flight;
                if (money < 0) {
                    printf("-1");
                    break;
                }
                money *= exchange;
                money =(money /  (daily_cost * people));
                if (money > 0 ) printf("%d", (int)money);
                else printf("0");
                break;
            case 1:
                flight = 10000;
                exchange = 40;
                daily_cost = 60000;
                money -= people * flight;
                if (money < 0) {
                    printf("-1");
                    break;
                }
                money *= exchange;
                money =(money /  (daily_cost * people));
                if (money > 0 ) printf("%d", (int)money);
                else printf("0");
                break;
            case 2:
                flight = 12000;
                exchange = 1.1;
                daily_cost = 2000;
                money -= people * flight;
                if (money < 0) {
                    printf("-1");
                    break;
                }
                money *= exchange;
                money =(money /  (daily_cost * people));
                if (money > 0 ) printf("%d", (int)money);
                else printf("0");
                break;
            case 3:
                flight = 35000;
                exchange = 0.025;
                daily_cost = 200;
                money -= people * flight;
                if (money < 0) {
                    printf("-1");
                    break;
                }
                money *= exchange;
                money =(money /  (daily_cost * people));
                if (money > 0 ) printf("%d", (int)money);
                else printf("0");
                break;
            case 4:
                flight = 33000;
                exchange = 0.03;
                daily_cost = 180;
                money -= people * flight;
                if (money < 0) {
                    printf("-1");
                    break;
                }
                money *= exchange;
                money =(money /  (daily_cost * people));
                if (money > 0 ) printf("%d", (int)money);
                else printf("0");
                break;
            case 5:
                flight = 40000;
                exchange = 0.032;
                daily_cost = 220;
                money -= people * flight;
                if (money < 0) {
                    printf("-1");
                    break;
                }
                money *= exchange;
                money =(money /  (daily_cost * people));
                if (money > 0 ) printf("%d", (int)money);
                else printf("0");
                break;
            case 6:
                flight = 32000;
                exchange = 0.048;
                daily_cost = 250;
                money -= people * flight;
                if (money < 0) {
                    printf("-1");
                    break;
                }
                money *= exchange;
                money =(money /  (daily_cost * people));
                if (money > 0 ) printf("%d", (int)money);
                else printf("0");
                break;
            case 7:
                flight = 0;
                exchange = 1;
                daily_cost = 3000;
                money -= people * flight;
                if (money < 0) {
                    printf("-1");
                    break;
                }
                money *= exchange;
                money =(money /  (daily_cost * people));
                if (money > 0 ) printf("%d", (int)money);
                else printf("0");
                break;
            default:
                printf("-2");
                break;
        }
        printf(" ");
    }
}