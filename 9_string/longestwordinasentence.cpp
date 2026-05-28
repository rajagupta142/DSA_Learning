// // longest word in a sentence

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string s = "I love programming in cpp";

//     string word = "";
//     string longest = "";

//     for(int i = 0; i < s.length(); i++) {

//         if(s[i] != ' ') {
//             word += s[i];
//         }
//         else {
//             if(word.length() > longest.length()) {
//                 longest = word;
//             }
//             word = "";
//         }
//     }

//     // check last word
//     if(word.length() > longest.length()) {
//         longest = word;
//     }

//     cout << "Longest word: " << longest;

//     return 0;
// }