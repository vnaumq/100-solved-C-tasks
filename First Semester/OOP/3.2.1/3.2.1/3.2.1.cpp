#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
vector<int> get_repeated_numbers() {
    unordered_map<int, int> num_counts;
    int num;
    int a;
    cout << "Enter the length of the sequence : " << endl;
    cin >> a;
    while (cin >> num && a != 1) {
        num_counts[num]++;
        a--;
    }
    vector<int> repeated_nums;
    for (auto& entry : num_counts) {
        if (entry.second > 1) {
            repeated_nums.push_back(entry.first);
        }
    }
    sort(repeated_nums.begin(), repeated_nums.end(), greater<int>());
    repeated_nums.erase(unique(repeated_nums.begin(), repeated_nums.end()), repeated_nums.end());
    return repeated_nums;
}

int main() {
    vector<int> NNN{ 10,20,30,40 };

    vector<int> MMM(NNN.begin() + 1, NNN.end() - 1);

    for (int q : MMM)
        cout << q << endl; 
    vector<int> repeated_nums = get_repeated_numbers();
    for (int num : repeated_nums) {
        cout << num << " ";
    }
    cout << std::endl;
    return 0;
}
