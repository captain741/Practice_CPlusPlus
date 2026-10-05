/*
Intuition: pattern là dạng bài mô phỏng lặp kết hợp phân tích thừa số nguyên tố 
1. Tính tổng các thừa số nguyên tố của số hiện tại, tính cả số lần lặp
2. Thay số hiện tại bằng tổng đó 
3. lặp đến khi số mới bằng số hiện tại 
Approach:
tách 2 phần 
1: hàm solve(x) phân tích x bằng cách thử các ước từ 2 trở đi. Mỗi lần chia hết thì cộng ước đó vào tổng và chia x cho ước đó
2. lặp phép biến đổi cho đến khi kêt quả không đổi
*/

//----------------------------
int solve(int x) {
    int sum = 0;
    for(int i = 2; i * i <= x; i++) {
        while( x % i == 0) {
            sum += i;
            x /= i;
        }
    }
     if(x > 1) {
        sum += x;
     }
     return sum;
}

int factorSum(int n) {
    while (true) {
        int next = solve(n);
        if (next == n) {
            return n;
        }
        n = next;
    }
}