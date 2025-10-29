// Cho một mảng số nguyên A gồm N phần tử đã được sắp xếp giảm dần, hãy viết hàm tìm kiếm nhị phân bằng đệ quy để kiểm tra xem phần tử X có nằm trong mảng hay không.
#include <stdio.h>

int binarySearch(int a[], int x, int left, int right){
    if(left <= right){
        int mid = (left + right) / 2;
        if(a[mid] == x) return 1;
        else if(a[mid] > x ) return binarySearch(a, x, mid + 1, right);
        else return binarySearch(a, x, left, mid - 1);
    }else{
        return 0;
    }
    
    // while(low <= high){
    //     int mid = (low + high) / 2;
    //     if(x == a[mid])
    //         return mid;
    //     if(x > a[mid])
    //         high = mid - 1;
    //     else   
    //         low = mid + 1;
    // }
    // return 0;
}

int main() {
    int n; 
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int x;
    scanf("%d", &x);
    printf("%d", binarySearch(a, x, 0, n - 1));
    return 0;
}