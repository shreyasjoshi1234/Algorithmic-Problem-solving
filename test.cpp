#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <utility>

using namespace std;

pair<int, int> permutations(int n) {
    unordered_map<char, int> count;
    string str = to_string(n);
    for (char cc : str) {
        count[cc]++;
    }

	string n1, n2;

    for (int digit = 9; digit >= 0; --digit) {
        char c = digit + '0';
        if (count.find(c) != count.end()) {
            n1 += string(count[c] / 2, c);
            n2 += string(count[c] / 2, c);
            count[c] %= 2;
        }
    }
    // if there are still remaining occurrences of digits, assign them to num1 or num2
    for (int digit = 0; digit <= 9; ++digit) {
        char c = digit + '0';
        if (count.find(c) != count.end()) {
            if (count[c] == 1) {
                if (n1.length() <= n2.length()) {
                    n1 += c;
                } else {
                    n2 += c;
                }
            }
        }
    }

   
    string result_str = n1 + n2;
    sort(result_str.begin(), result_str.end());
    sort(str.begin(), str.end());
    if (result_str == str) {
        return make_pair(stoi(n1), stoi(n2));
    } 
	else 
	{
        
        n1.clear();
        n2.clear();
        for (int digit = 9; digit >= 0; --digit) {
            char c = digit + '0';
            if (count.find(c) != count.end()) {
                n1 += string(count[c] / 2, c);
                n2 += string(count[c] / 2, c);
                count[c] %= 2;
            }
        }
        for (int digit = 0; digit <= 9; ++digit) {
            char c = digit + '0';
            if (count.find(c) != count.end()) {
                if (count[c] == 1) {
                    if (n2.length() <= n1.length()) {
                        n2 += c;
                    } else {
                        n1 += c;
                    }
                }
            }
        }

        result_str = n1 + n2;
        sort(result_str.begin(), result_str.end());
        if (result_str == str) {
            return make_pair(stoi(n1), stoi(n2));
        } else {
            return make_pair(-1, -1);
        }
    }
}

int find_min_sum(int n) {
    pair<int, int> per = permutations(n);
    if (per.first != -1 && per.second != -1) {
        return per.first + per.second;
    } 
	else 
	{
        
		return -1;
    }
}

int main() {
    int number;
	cin>>number;
    int min_sum_num = find_min_sum(number);
    cout << min_sum_num << endl; // Output: 233
    return 0;
}
