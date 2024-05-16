// Given an integer x, return true if x is a palindrome, and false otherwise.

// class Solution {
// public:
//     bool isPalindrome(int x) {
//         if (x < 0) {
//             return false;
//         }
        
//         if (x != 0 && x % 10 == 0) {
//             return false;
//         }
        
//         int number = x;
//         long long reverse = 0;
        
//         while (x != 0) {
//             int digit = x % 10;
//             reverse = reverse * 10 + digit;
//             x /= 10;
//         }
        
//         return number == reverse;
//     }
// };