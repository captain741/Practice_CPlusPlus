/*
Cho 1 mảng nums phần tử só nguyên và 1 số nguyên target, trả về chỉ số của 2 phần tử  mà khi cộng chúng lại bằng target.
Giả định mỗi đầu vào sẽ có 1 giải pháp và không được sử dụng 1 phần từ 2 lần
Ex1:
Input: nums = [3,2,4] . target = 6
Output: [1,2]
Ex2:
Input: nums = [3,3] . target = 6
Output: [0,1]
*/
/*
*Intuition:
Với mỗi nums[i] ta cần tìm 1 giá trị complement sao cho 
   complemet = target - nums[i]
Nếu complement đã xuất hiện trước đó , ta tìm thấy đáp án 
Dùng unordered_map để lưu quan hệ : giá trị -> index
Nhờ đó việc kiểm tra sự tồn tại của complement có độ phức tạp trung bình O(1).
*Approach:
1. Tạo 1 unordered_map seen
2.Duyệt từng phần từ trong nums[i]
3.Tính complement = target - nums[i]
4.Kiểm tra complement trong trong seen không 
5.Nếu có trả về index đã lưu và i
6.Nếu chưa có lưu nums[i] cùng với index i
7.Nếu duyệt hết mảng không tìm thấy thì trả về mảng rỗng
*Complexity:
Time: O(n) trung bình
Space: O(n) 
*/

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int, int> seen;
    for(int i = 0; i < nums.size(); i++){
        int complement = target - nums[i];
        if(seen.count(complement)){
            return {seen[complement], i};
        }
        seen[nums[i]] = i;
    }
    return {};
}
int main(){
    vector<int> nums;
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    cout << "Nhap cac phan tu mang nums: ";
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int target;
    cout <<"Nhap target: ";
    cin >> target;
    vector<int> result = twoSum(nums, target);
    if(result.empty()) {
        cout <<"Not Found" << endl;
    }else{
        cout << result[0] <<" "<< result[1] << endl;
    }
    return 0;
}