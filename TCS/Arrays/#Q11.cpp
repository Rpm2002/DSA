// https://www.geeksforgeeks.org/problems/sum-of-upper-and-lower-triangles-1587115621/1
// https://youtu.be/YuqtMC6Nvg8?feature=shared

#include<bits/stdc++.h>
using namespace std;

void printUpperAndLowerSum(const vector<vector<int>>& matrix, int n) {
    // Upper triangle sum
    int sum1 = 0, sum2 = 0;
    vector<int> ans;

    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j >= i; j--) {
            sum1 += matrix[i][j];
        }
    }

    // Lower triangle sum
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            sum2 += matrix[i][j];
        }
    }

    ans.push_back(sum1);
    ans.push_back(sum2);

    cout<<endl;    
    for (int i = 0; i < 2; i++) {
        cout << ans[i] << " ";
    }
}

int main() {
    int N;
    cout << "N : ";
    cin >> N;

    vector<vector<int>> arr(N, vector<int>(N));

    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> arr[i][j];
        }
    }

    printUpperAndLowerSum(arr, N);

    return 0;
}



// *************************************************************************************************


#include <iostream>
using namespace std;

void printUpperAndLowerSum(int **matrix, int n) {
    int sum1 = 0, sum2 = 0;

    // Upper triangle sum
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j >= i; j--) {
            sum1 += matrix[i][j];
        }
    }

    // Lower triangle sum
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            sum2 += matrix[i][j];
        }
    }

    cout << "Upper triangular sum: " << sum1 << endl;
    cout << "Lower triangular sum: " << sum2 << endl;
}

int main() {
    int N;
    cout << "Enter the size of square matrix (N*N): ";
    cin >> N;

    // Allocate memory for the matrix
    int **arr=new int*[N];
    for(int i=0;i<N;i++)
    {
        arr[i]=new int[N];
    }

    cout << "Enter elements of the matrix:" << endl;
    // Input matrix elements
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> arr[i][j];
        }
    }

    // Call the function
    printUpperAndLowerSum(arr, N);

    // Deallocate memory
   for(int i=0;i<N;i++)
   {
       delete[] arr[i];
   }
   
   delete[] arr;
    return 0;
}




// ******************************************************************************************************

#include <iostream>
using namespace std;

void printUpperAndLowerSum(int **matrix, int rows, int cols) {
    int sum1 = 0, sum2 = 0;

    // Upper triangle sum
    for (int i = 0; i < rows; i++) {
        for (int j = cols - 1; j >= i; j--) {
            sum1 += matrix[i][j];
        }
    }

    // Lower triangle sum
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i && j < cols; j++) {
            sum2 += matrix[i][j];
        }
    }

    cout << "Upper triangular sum: " << sum1 << endl;
    cout << "Lower triangular sum: " << sum2 << endl;
}

int main() {
    int N, M;
    cout << "Enter the number of rows (N): ";
    cin >> N;
    cout << "Enter the number of columns (M): ";
    cin >> M;

    // Allocate memory for the matrix
    int **arr = new int *[N];
    for (int i = 0; i < N; ++i) {
        arr[i] = new int[M];
    }

    cout << "Enter elements of the matrix:" << endl;
    // Input matrix elements
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> arr[i][j];
        }
    }

    // Call the function
    printUpperAndLowerSum(arr, N, M);

    // Deallocate memory
    for (int i = 0; i < N; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
