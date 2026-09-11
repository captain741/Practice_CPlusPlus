/* bài toán: đếm số lần biến đổi 
với 2 số tự nhiên n và k hãy đếm số các số có thể biến đổi k lần về n 
với n chẵn : n -> n/2
với n lẻ: n -> 3*n + 1

-Intuition:
1.nhìn ngược tìm ra các số hơn tạo ra n 
2.với số n chẵn  số trước là 2*n  
với n lẻ thì số trước có thể là (n-1)/3 với điều kiện n-1 chia hết cho 3 và (n-1)/3 phải là số lẻ
3. bắt đầu từ n lùi ngược thì sẽ còn lại k -1 lần 
khi k = 0 là ta đếm đủ số bước 
- Approach:
1. gọi hàm đệ quy recursion(n, k)
2. với k == 0 thì count ++ và dừng
3. nếu n chẵn thì xét số trước 2*n
nếu n lẻ thì xét số trước là (n-1)/3 với điều kiện (n-1)%3==0 && ((n-1)/3)%2 == 0
gọi đệ quy 2 nhánh tương ứng với k giảm 1 
4. In ra count
Complexity:Time:O(2^k) vì mỗi bước tạo ra 2 nhánh đệ quy
Space: O(k) độ sâu đệ quy là 
*/

#include<iostream>
using namespace std;

int count = 0;

int Recursion(int n, int k){
    if(k == 0){
        count++;
    } else {
        Recursion(2*n, k-1);
        if((n - 1) % 3 == 0 && ((n - 1) / 3) % 2 == 1){
            Recursion((n - 1) / 3, k - 1);
        }
    }

    return count;
}

int main(){
    int n, k;
    cin >> n >> k;
    Recursion(n,k);
    cout << count;
    return 0;
}
