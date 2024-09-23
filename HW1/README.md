# HW1 出國天數計算器
[Problem PDF](https://github.com/mcps5601/C-course-materials/blob/main/slides/hw1.pdf)

## 變數解釋

- `t` 測資數
- `people`: 人數
- `city`: 首都
- `flight`: 來回機票價格
- `daily_cost`: 每日花費
- `money`: 預算
- `exchange`: 匯率(考量小數使用 float)

## 流程

1. 接收測資數量 `t`, `while (t--)` 重複 `t` 次
2. 接收`money`(預算), `people`(人數), `city`(首都)
3. `switch` 判斷不同首都並做不同運算
    1. 計算 `money -= people * flight` 判斷是否足以支付所有⼈的機票
        ```c=15
        money -= people * flight;
        if (money < 0) {
            printf("-1");
            break;
        }
        ```
    2. 計算匯率與天數
        ```c=21
        money =(money /  (daily_cost * people));
        if (money > 0 ) printf("%d", (int)money);
        else printf("0");
        ```
