
#include <iostream>
#include <vector>

using namespace std;

using namespace std;

vector<vector<double>> matrix(const vector<vector<double>>& A, const vector<vector<double>>& B) {
    int n = A.size();
    vector<vector<double>> C(n, vector<double>(n, 0.0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j] + B[i][k] * A[k][j];
            }
        }
    }

    return C;
}
int main() {
    vector<vector<double>> A = { {1, 2, 3},
                                {4, 5, 6},
                                {7, 8, 9} };

    vector<vector<double>> B = { {9, 8, 7},
                                {6, 5, 4},
                                {3, 2, 1} };

    vector<vector<double>> C = matrix(A, B);

    for (int i = 0; i < C.size(); i++) {
        for (int j = 0; j < C[i].size(); j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}