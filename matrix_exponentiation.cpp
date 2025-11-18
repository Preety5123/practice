#include <bits/stdc++.h>
using namespace std;
/* arr[][]*/

struct mat {
    int row;
    int col;
    int* arr;

    int& get(int x, int y) {
        return *(arr + x * col + y);
    }

    mat(int x, int y) {
        row = x;
        col = y;
        arr = (int*)malloc((x * y) * sizeof(int));
    }

    ~mat() {
        free(arr);
    }
};

int mat_get(mat& m1, int x, int y) {
    return *(m1.arr + x * m1.col + y);
}

using mat_t = vector<vector<int>>;
mat_t mul(mat_t& a, mat_t& b) {

}

void mul(mat& a, mat& b, mat& res) {
    for (int i = 0; i < a.row; i++) {
        for (int j = 0; j < b.col; ++j) {
            res.get(i, j) = 0;
            for (int k = 0; k < a.col; k++) {
                res.get(i, j) += a.get(i, k) * b.get(k, j);
            }
        }
    }
    // return move(res);
}

void matrix_mut(
    int **arr1, int row1, int col1,
    int **arr2, int row2, int col2,
    int **res
){
    assert(col1 == row2);

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            // res[i][j] = 0;
            *(*(res + i) + j) = 0;

            for (int k = 0; k < col1; k++) {
                // (*(*(arr2 + k) + j))
                *(*(res + i) + j) += (*(*(arr1 + i) + k)) * (*(*(arr2 + k) + j));
            }
        }
    }
}

int main(){
    int a[][2] = {
        {1, 2},
        {3, 4}
    };

    mat a_mat(2, 2);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            a_mat.get(i, j) = a[i][j];
        }
    }

    mat res(2, 2);
    mul(a_mat, a_mat, res);
    for (int i = 0; i < res.row; i++) {
        for (int j = 0; j < res.col; j++) {
            cout << res.get(i, j) << " ";
        }
        cout << endl;
    }

    struct color {
        float red, green, blue;
    };


    color c1, c2;
    c1.red = 1.0;
    c2.blue = 3.0;

    printf("%.2f %.2f %.2f\n", c1.red, c1.green, c1.blue);
    printf("%.2f %.2f %.2f\n", c2.red, c2.green, c2.blue);

}

