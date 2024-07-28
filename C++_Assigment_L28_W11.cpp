// #include<iostream>
// using namespace std;
// int sumOfDigits(int n, int sum = 0) {
//     if (n == 0) {
//         return sum;
//     }
//     return sumOfDigits(n / 10, sum + n % 10);
// }

// int main() {
//     int num;
//     cout << "Enter the number : ";
//     cin >> num;
//     cout << "The sum of the digits of the given number is : " << sumOfDigits(num) << endl;
// }

//                                2 Solution

// #include<iostream>
// using namespace std;
// int reverseNumber(int n, int rev = 0){
//     if(n == 0) return rev;
//     rev = rev * 10 + n % 10;
//     return reverseNumber(n / 10, rev);
// }

// int main(){
//     int num;
//     cout << "Enter the number : ";
//     cin >> num;
//     cout << "The reverse of the given number is : " << reverseNumber(num) << endl;
// }

//                                  3 Solution

// #include<iostream>
// using namespace std;
// int countSteps(int num){
//     int steps = 0;
//     while(num != 2){
//         if(num%2==0){
//             num /= 2;
//         }else{
//             num -= 1;
//         }
//         steps++;
//     }
//     return steps;
// }
// int main(){
//     int num;
//     cout << "Enter the number : ";
//     cin >> num;
//     cout << "The number of steps to reduce it to zero is : " << countSteps(num) << endl;
// }

//                                      4 Solution

//     Output is :-  fun(n) for any non-negative integer n is always 0.






