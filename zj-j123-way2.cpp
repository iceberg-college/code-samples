#include <bits/stdc++.h>
using namespace std;

vector<vector<vector<bool>>> shapes = {
    {
        {1},
        {1},
        {1},
        {1},
    },
    {
        {1, 1, 1},
    },
    {
        {1, 1},
        {1, 1},
    },
    {
        {0, 0, 1},
        {1, 1, 1},
    },
    {
        {0, 1},
        {1, 1},
        {1, 1},
    },
};

bool box[60][60];

int Y, X, n; // r 高度, c 寬度

int main() {
    // 輸入
    cin >> Y >> X >> n;

    // 左方牆壁
    for (int i = 0; i <= Y; i++) {
        box[i][0] = 1;
    }

    // 上下方牆壁
    for (int i = 0; i <= X; i++) {
        box[0][i] = 1;
        box[Y+1][i] = 1;
    }

    // 紀錄被丟掉幾個
    int out = 0;
    
    while (n--) {
        // 處理一個箱子
        char t;
        int y;
        cin >> t >> y;
        vector<vector<bool>> shape = shapes[t - 'A'];
        // 先把箱子放在倉庫外面
        int x = X + 4;
        y++;
        // 持續移動 & 判斷找到可以放的最裡面的位置
        while (1) {
            // 檢查往前移動一格是否會碰撞
            bool hit = false;
            for (int sy = 0; sy < shape.size(); sy++) {
                for (int sx = 0; sx < shape[0].size(); sx++) {
                    if (shape[sy][sx] && box[y+sy][x+sx-1]) {
                        // 碰撞
                        hit = true;
                    }
                }
            }
            if (hit) break;
            // 移動
            x -= 1;
        }
        // 檢查這個貨物放置下去會不會超出範圍
        bool out_bound = false;
        for (int sy = 0; sy < shape.size(); sy++) {
            for (int sx = 0; sx < shape[0].size(); sx++) {
                if (x + sx > X) out_bound = true;
            }
        }
        // 超出範圍就不放置了
        if (out_bound) {
            out++;
            continue;
        }
        
        // 放置貨物
        for (int sy = 0; sy < shape.size(); sy++) {
            for (int sx = 0; sx < shape[0].size(); sx++) {
                if (box[y+sy][x+sx] == 0) { // 如果該格為空
                    box[y+sy][x+sx] = shape[sy][sx]; // 填滿    
                }
            }
        }
    }

    // 計算缺空數量
    int empty = 0;
    for (int i = 1; i <= Y; i++) {
        for (int j = 1; j <= X; j++) {
            if (!box[i][j]) empty++;
        }
    }

    cout << empty << " " << out << endl;
}
