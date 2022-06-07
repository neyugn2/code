#include<iostream>
using namespace std;

int maxValue(int a[], int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    return max;
}

int main(){
    int N, M, K;
    cout << "Nhap N, M va K(so lit): ";
    cin >> N >> M >> K;
    char type[101];
    int water1[101], water2[101];
    int result[101];
    int count[101];
    for (int i = 0; i < N; i++) {
        cin >> type[i];
        result[i] = 0;
    }

    for (int i = 0; i < M; i++) {
        cin >> water1[i];
        water2[i] = K;
    }

    int k = 0, p = 0;
    for (int i = 0; i < N; i++) {
        if (water2[k] == 0) {
            k++;
        }
        if (type[i] == 'E') {
            water2[k] -= 1;
            result[p++] = k;
        } else {
            int max = maxValue(water2,M);
            for (int j = k; j < M; j++) {
                if (water2[j] == max) {
                    water2[j] -= 1;
                    result[p++] = j;
                    break;
                }
            }
        }
    }
    for (int l = 0; l < M; l++) {
        for (int i = 0; i < M; i++) {
            if (water1[i] == water2[l] && water2[l] != K) {
                for (int j = 0; j < N; j++) {
                    if (result[j] == l) {
                        result[j] = i+(K+1);
                        water1[i] = -1;
                    }
                }
            }
        }
    }

    for (int i = 0; i < N; i++) {
        cout << result[i]-K << " ";
    }
}
 
