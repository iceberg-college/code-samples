#include<bits/stdc++.h>
using namespace std;

// (1)
int main() {
    int a = 1e9, b = 1e9; // 1e9 = 10 的 9 次方
    long long c = a * b;
    cout << c << '\n';
    return 0;
}

// (2)
int main() {
    vector<int> v;
    cout << v.size() - 1 << '\n';;
    return 0;
}

// (3) 
int main() {
    int a = 1, b = 3;
    int result = a + b & 3; // 預期輸出 a 和 b & 3 相加的結果
    cout << result << '\n';
    return 0;
}

// (4) 
int main() {
    int minimum = 1e6;
    for (int i = 1; i <= 10; i++) {
        int x; cin >> x; // 0 <= x <= 1e6
        minimum = min(minimum, x * x);
    }
    cout << minimum << '\n';
    return 0;
}

// (5)
int main() {
    int test_cases; 
    cin >> test_cases;
    while (test_cases--) {
        int n; cin >> n;
        if (n == 1) {
            cout << "YES\n";
            continue;
        }
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << "NO\n";
    }
    return 0;
}

// (6)
int main() {
    int minimum = 1e6;
    for (int i = 1; i <= 10; i++) {
        int x, y;
        cin >> x >> y; // 0 <= x,y <= 1e6
        minimum = min(minimum, x / y);
    }
    cout << minimum << '\n';
    return 0;
}

// (7)
int main() {
    int n, maximum = 1e9;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        maximum = max(maximum * maximum, x * x);
    }
    cout << maximum << '\n';
}

// (8)
int main() {
    int n;
    while(cin >> n) {
        if(n = 3) cout << "YES\n";
        else cout << "NO\n";
    }
}
