#include<bits/stdc++.h>

/*** Part 1 : 變數作用域 ***/

// (1) 請問輸出為何?
void f(int a, int b) {
    a = a + b;
    b = a - b;
}
int main() {
    int a = 5, b = 6;
    f(a, b);
    printf("%d %d\n", a, b);

    return 0;
}

// (2) 請問輸出為何?
int a = 5, b = 3 ;

void f(int a, int b) {
    int c = a + b ;
}

int g(int a, int b) {
    a = a + b ;
    b = a - b ;
    int c = a + b ;
    return c ;
}

int main() {
    int b = 7 ;
    int c = g(a, b) ;
    f(a, b) ;
    int a = 3 ;
    printf("%d %d %d\n", a, b, c) ;

    return 0;
}



/*** Part 2 : 邏輯運算、比較運算 ***/

// (1) 
// 如果 !x1 && !x2 && !x3 為 True 且 x1 為 False, 請問 x2 和 x3 應該為多少?

// (2) 請問下列何者會輸出 1?
int main(){
    int x, y, z;

    // (A)
    x = 1, y = 0, z = 0;
    printf("%d\n", (!(x >= y || y >= z) || x <= z));

    // (B)
    x = 7, y = 3, z = 5;
    printf("%d\n", (!(x >= y || y >= z) || x <= z));

    // (C)
    x = 5, y = 7, z = 3;
    printf("%d\n", (!(x >= y || y >= z) || x <= z));

    // (D)
    x = 3, y = 5, z = 7;
    printf("%d\n", (!(x >= y || y >= z) || x <= z));

    return 0;
}

// (3) 
int main(){
    bool x1 = true, x2 = false, x3 = true;

    printf("%d\n", x1 && (!(x1 && x2) || x3));
    // 請問此行輸出結果和下列哪個選項相同?

    // (A)
    printf("%d\n", x2);
    // (B)
    printf("%d\n", !(x1 && x3) && (x1||x2));
    // (C)
    printf("%d\n", !(x1) || !(x2 || x3));
    // (D)
    printf("%d\n", ((!(x1 && x3) || x2) && x3) || x1);

    return 0;
}



/*** Part 3 : 條件判斷 ***/

// (1) 請問輸出為何?
int main() {
    int x = 89, y = 70 ;
    char grade = 'D' ;
    
    if ((x >= 90 && y >= 60) || (y >= 90 && x >= 60)) {
        grade = 'A' ;
    }
    else if ((x >= 80 && y >= 60) || (y >= 80 && x >= 60)) {
        grade = 'B' ;
    }
    else if ((x >= 70 && y >= 60) || (y >= 70 && x >= 60)) {
        grade = 'C' ;
    }
    
    printf("%c", grade) ;
    return 0 ;
}

// (2) 請問輸出為何?
int main() {
	int a = 2 ;
	switch(a) {
	    case 2:
	        printf("A") ;
	    case 3:
	        printf("B") ;
	        break;
	    default:
	        printf("??") ;
	}
	return 0;
}



/*** Part 4 : 迴圈 ***/

// (1) 請問下列哪一行一定不會被執行到?
void f(int a){
    if (a < 8) a = a - 2;       // (A)
    if (a < 11) a = a + 3;      // (B)
    while (a < 12) a = a + 2;   // (C)
    if (a < 10) a = a * 5;      // (D)
}

// (2) 請問輸出為何?
int main() {
    int sum = 1, p = 5, a = 2 ;
    while (p >= 0) {
      sum = sum * a ;
      p = p - 1 ;
    }
    printf("%d", sum) ;
    return 0;
}

// (3) 請問輸出為何?
int main(){
    for(int i = 0; i <= 10; i++){
        printf("%d", i);
        i = i + 1;
    }
    printf("\n");
    return 0;
}



/*** Part 5 : 陣列 ***/

// (1) 請問輸出為何?
int main(){
    int num[10] ;
    for(int i = 0; i < 10; i++) 
        scanf("%d", &num[(i+6) % 10]) ;
    for(int i = 0; i < 10; i++) 
        printf("%d ", num[i]) ;
    return 0;
}

// (2) 請問輸出為何?
int main(){
    int a[5] = {9,2,4,7,3} ;
    int b[10] = {0,1,0,1,0,1,0,1,0,1} ;
    int c = 0 ;
    for (int i=0;i<5;i=i+1) {
        c += b[a[i]] ;
    }
    printf("%d", c);
    return 0 ;
}

// (3) 請問輸出為何?
int main(){
    int s1[2][2] = {{0, 1}, 
                    {2, 3}} ;
    int s2[2][2] = {{4, 3},
                    {2, 1}} ;
    for (int i=0;i<2;i++)
        for (int j=0;j<2;j++)
            printf("%d ", s1[i][j] * s2[j][i]) ;
    // (0, 0) (0, 1) (1, 0) (1, 1)
    //   0      2      6    3
    return 0;
}



/*** Part 6 : 遞迴 ***/

// (1) 請問輸出為何?
int F(int x, int y) {
  if (y == 0)
    return 1;
  return F(x, y - 1) * x;
}
int main(){
    printf("%d", F(2, 5));
}

// (2) 請問輸出為何?
int sum(int n){
    if (n <= 1){
        return n;
    }
    return n + sum(n-1);
}
int main(){
    printf("%d", sum(10));
    return 0;
}

// (3) 請問輸出為何?
void func(int n) {
    if (n > 0) {
        printf ("%d", n % 2);
        func(n / 2);
    }
}
int main(){
    func(21);
    return 0;
}

