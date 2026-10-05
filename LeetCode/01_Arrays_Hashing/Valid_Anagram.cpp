/*
Problem: Valid Anagram
Pattern: Frequency Counting
Data Structure: Fixed - Size array

*Intuition:
Đề bài xác định 2 chuỗi là anagram khi:
-Cùng độ dài 
-Mỗi kí tự cùng tần suất xuất hiện, thứ tự xuất hiện không quan trọng
=> Nghĩ đến pattern Frequency Counting, vì đề chỉ chứa chữ cái thường từ a-> z nên dùng mảng 26 phần tử chứa kí tự để đếm tần suất thay vì dùng hashmap

*Approach:
Dùng mảng int count[26] = {} để đếm tần suất kí tự
Quy ước: 'a' trong mã ASCII là  97
         'b' là 98, 'c' là 99; .... ';'z' là 100
    vì thế 'a' - 'a ' = 0; 'b' -'a' = 1; .....; 'c' - 'a' = 25
    count[c - 'a'] với c = 'a' tức là count[0] , count[]
*/