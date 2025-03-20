#include <bits/stdc++.h>
#define shape vector<int>

using namespace std;

int r, c, n;
int a[100];
int tmp[100];

// 紀錄每個貨物的「寬度」
vector<shape> shapes = {
    {1, 1, 1, 1},
    {3},
    {2, 2},
    {1, 3},
    {1, 2, 2}
};

// 計算每個貨物的體積
int vol(int t) {
    int res = 0;
    shape s = shapes[t];
    for (int i = 0; i < s.size(); i++) res += s[i];
    return res;
}

// 保存變更（將 tmp 陣列覆蓋 a）
void commit() {
    for (int i = 0; i < r; i++) {
        a[i] = tmp[i];
    }
}

// 回朔到上個版本（將 a 陣列覆蓋 tmp）
void rollback() {
    for (int i = 0; i < r; i++) {
        tmp[i] = a[i];
    }
}

int main() {
    cin >> r >> c >> n;
    
    int fail = 0; // 失敗次數
    int tot = r * c; // 空餘格數
    
    while (n--) {
        // 輸入貨物資料
        char t;
        int y;
        cin >> t >> y;
        shape s = shapes[t - 'A'];

        bool successful = true; // 目前成敗狀態
        int mx = 0; // 最右邊會佔用到哪格

        // 將貨物先拆開放進去
        for (int i = 0; i < s.size(); i++) {
            // i 為目前貨物本身的 y 位置
            // ii 為對應到倉庫的真實 y 位置
            int ii = i + y;
            tmp[ii] += s[i];
            mx = max(mx, tmp[ii]);
            // 如果超出倉庫範圍，就判定為失敗
            if (mx > c) successful = false;
        }

        // 讓貨物右邊切齊
        for (int i = 0; i < s.size(); i++) {
            // i 為目前貨物本身的 y 位置
            // ii 為對應到倉庫的真實 y 位置
            int ii = i + y;
            tmp[ii] = mx;
        }

        // 貨物放置成功
        if (successful) {
            commit(); // 保存版本變更
            tot -= vol(t - 'A'); // 扣掉使用掉的空間
        // 貨物放置失敗
        } else {
            rollback() // 回朔到上個版本
            fail++; // 增加失敗次數
        }
    }

    // 最後輸出剩餘空位和失敗次數
    cout << tot << " " << fail << endl;
}
