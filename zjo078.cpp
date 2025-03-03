#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    // 輸入
    string s;
    cin >> s;
    
    int n;
    cin >> n;

    string t;
    cin >> t;

    set<string> st;
    for (int i = 0; i <= t.size() - n; i++) {
        st.insert(t.substr(i, n));
    }

    string sub = "";
    for (int i = 1; i <= n; i++) sub += ".";

    int m = s.size();

    if (n == 1) {
        for (int p0 = 0; p0 < m; p0++) {
            sub[0] = s[p0];
            if (st.count(sub) == 0) {
                cout << sub << endl;
                return 0;
            }
        }
    } else if (n == 2) {
        for (int p0 = 0; p0 < m; p0++) {
            for (int p1 = 0; p1 < m; p1++) {
                sub[0] = s[p0];
                sub[1] = s[p1];
                if (st.count(sub) == 0) {
                    cout << sub << endl;
                    return 0;
                }
            }
        }
    } else if (n == 3) {
        for (int p0 = 0; p0 < m; p0++) {
            for (int p1 = 0; p1 < m; p1++) {
                for (int p2 = 0; p2 < m; p2++) {
                    sub[0] = s[p0];
                    sub[1] = s[p1];
                    sub[2] = s[p2];
                    if (st.count(sub) == 0) {
                        cout << sub << endl;
                        return 0;
                    }
                }
            }
        }
    } else if (n == 4) {
        for (int p0 = 0; p0 < m; p0++) {
            for (int p1 = 0; p1 < m; p1++) {
                for (int p2 = 0; p2 < m; p2++) {
                    for (int p3 = 0; p3 < m; p3++) {
                        sub[0] = s[p0];
                        sub[1] = s[p1];
                        sub[2] = s[p2];
                        sub[3] = s[p3];
                        if (st.count(sub) == 0) {
                            cout << sub << endl;
                            return 0;
                        }
                    }
                }
            }
        }
    } else if (n == 5) {
        for (int p0 = 0; p0 < m; p0++) {
            for (int p1 = 0; p1 < m; p1++) {
                for (int p2 = 0; p2 < m; p2++) {
                    for (int p3 = 0; p3 < m; p3++) {
                        for (int p4 = 0; p4 < m; p4++) {
                            sub[0] = s[p0];
                            sub[1] = s[p1];
                            sub[2] = s[p2];
                            sub[3] = s[p3];
                            sub[4] = s[p4];
                            if (st.count(sub) == 0) {
                                cout << sub << endl;
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    } else if (n == 6) {
        for (int p0 = 0; p0 < m; p0++) {
            for (int p1 = 0; p1 < m; p1++) {
                for (int p2 = 0; p2 < m; p2++) {
                    for (int p3 = 0; p3 < m; p3++) {
                        for (int p4 = 0; p4 < m; p4++) {
                            for (int p5 = 0; p5 < m; p5++) {
                                sub[0] = s[p0];
                                sub[1] = s[p1];
                                sub[2] = s[p2];
                                sub[3] = s[p3];
                                sub[4] = s[p4];
                                sub[5] = s[p5];
                                if (st.count(sub) == 0) {
                                    cout << sub << endl;
                                    return 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if (n == 7) {
        for (int p0 = 0; p0 < m; p0++) {
            for (int p1 = 0; p1 < m; p1++) {
                for (int p2 = 0; p2 < m; p2++) {
                    for (int p3 = 0; p3 < m; p3++) {
                        for (int p4 = 0; p4 < m; p4++) {
                            for (int p5 = 0; p5 < m; p5++) {
                                for (int p6 = 0; p6 < m; p6++) {
                                    sub[0] = s[p0];
                                    sub[1] = s[p1];
                                    sub[2] = s[p2];
                                    sub[3] = s[p3];
                                    sub[4] = s[p4];
                                    sub[5] = s[p5];
                                    sub[6] = s[p6];
                                    if (st.count(sub) == 0) {
                                        cout << sub << endl;
                                        return 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if (n == 8) {
        for (int p0 = 0; p0 < m; p0++) {
            for (int p1 = 0; p1 < m; p1++) {
                for (int p2 = 0; p2 < m; p2++) {
                    for (int p3 = 0; p3 < m; p3++) {
                        for (int p4 = 0; p4 < m; p4++) {
                            for (int p5 = 0; p5 < m; p5++) {
                                for (int p6 = 0; p6 < m; p6++) {
                                    for (int p7 = 0; p7 < m; p7++) {
                                        sub[0] = s[p0];
                                        sub[1] = s[p1];
                                        sub[2] = s[p2];
                                        sub[3] = s[p3];
                                        sub[4] = s[p4];
                                        sub[5] = s[p5];
                                        sub[6] = s[p6];
                                        sub[7] = s[p7];
                                        if (st.count(sub) == 0) {
                                            cout << sub << endl;
                                            return 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
