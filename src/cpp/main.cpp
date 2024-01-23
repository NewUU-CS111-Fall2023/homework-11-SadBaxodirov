/*
 USE THIS FILE FOR YOUR TESTS,
 AUTOGRADER WILL NOT EXECUTE THIS FILE.
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
#include "task_1.cpp"
#include "task_2.cpp"
#include "task_3.cpp"
#include "task_4.cpp"
#include "task_5.cpp"
#include "task_6.cpp"
#include "task_7.cpp"
#include "task_8.cpp"

using namespace std;

int main() {
    int tempValue;
    string tempString;
    int N;
    // write your code here
    
    cout<<"Problem 1"<<endl;
    Problem1 problem1;
    vector<int> nums1;

    int target1;

    cout<<"Enter the number of values: ";
    cin>>N;
    cout<<"Enter the values: ";
    for (int i=0;i<N;i++){
        cin>>tempValue;
        nums1.push_back(tempValue);
    }
    cout<<"Enter target sum: ";
    cin>>target1;
    cout<<"Result is: ";
    cout << problem1.problem1(nums1, target1,0,0) << endl;

    cout<<"Problem 2"<<endl;
    Problem2 problem2;
    vector<int> nums2;
    cout<<"Enter number of values: ";
    cin>>N;
    cout<<"Enter the values: ";
    for (int i=0;i<N;i++){
        cin>>tempValue;
        nums2.push_back(tempValue);
    }
    if (problem2.problem2(nums2))
        cout<<"True";
    else
        cout<<"False";
    cout<<endl;

    cout<<"Problem 3"<<endl;
    Problem3 problem3;
    string s3;
    vector<string> wordDict;
    cout<<"Enter the string: ";
    cin>>s3;
    cout<<"Enter number of words: ";
    cin>>N;
    cout<<"Enter the words: ";
    for (int i=0;i<N;i++){
        cin>>tempString;
        wordDict.push_back(tempString);
    }
    if(problem3.problem3(s3, wordDict))
        cout<<"True";
    else
        cout<<"False";
    cout<<endl;

    cout<<"Problem 4"<<endl;
    Problem4 problem4;
    int a5;
    vector<int> b5;
    cout<<"Enter a5: ";
    cin>>a5;
    cout<<"Enter the number of digits in b: ";
    cin>>N;
    for (int i=0;i<N;i++){
        cin>>tempValue;
        b5.push_back(tempValue);
    }
    cout<<problem4.power(a5,b5)<<endl;

    cout<<"Problem 5"<<endl;
    Problem5 problem5;
    string key5;
    string message5;
    cout<<"Enter the key: ";
    getline(cin,key5);
    cout<<"Enter the message: ";
    getline(cin,message5);
    string result5 = problem5.problem5(key5,message5);
    cout<<result5<<endl;

    cout<<"Problem 6"<<endl;
    Problem6 problem6;
    int n6;
    int prime1;
    int prime2;
    cout<<"Enter the number: ";
    cin>>n6;
    problem6.problem6(n6,prime1,prime2);
    cout<<prime1<<" "<<prime2<<endl;

    cout<<"Problem 7"<<endl;
    Problem7 problem7;
    long long unsigned int a7;
    long long unsigned int b7;
    cout<<"Enter the numbers: ";
    cin>>a7>>b7;
    cout<<problem7.euler(a7,b7)<<endl;

    cout<<"Problem 8"<<endl;
    Problem8 problem8;
    int p, q;
    cout << "Enter p and q: ";
    cin >> p >> q;
    int n = p * q;
    int phi_n = problem7.euler(p, q);
    int e = 2;
    while (e < phi_n && !problem8.areCoprime(e, phi_n)) {
        e++;
    }
    int d = problem8.modInverse(e, phi_n);
    cout << "Public Key (n, e): (" << n << ", " << e << ")" << endl;
    cout << "Private Key (d): " << d << endl;
    return 0;
}
