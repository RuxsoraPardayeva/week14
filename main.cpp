#include <iostream>
using namespace std;
//problem 1
// void cyclic(int *ptra,int *ptrb,int *ptrc) {
//     int temp=*ptra;
//     *ptra=*ptrb;
//     *ptrb=*ptrc;
//     *ptrc=temp;
// }
// int main() {
//     int a;
//     int b;
//     int c;
//     cin>>a>>b>>c;
//     cyclic(&a,&b,&c);
//     cout<<"a: "<<a<<" b:"<<b<<" c: "<<c<<endl;
// }


//problem 4
// int sumkth(int *arr,int n,int k) {
//     int sum=0;
//
//     for(int i=0;i<n;i+=k) {
//         sum+=*(arr+i);
//     }
//     return sum;
// }
// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++) {
//         cin>>arr[i];
//     }
//     int k;
//     cin>>k;
//     int *ptr=&arr[0];
//    cout<<sumkth(ptr,n,k)<<endl;
//
// }


//problem 5
// int main() {
//     int arr[]={1,4,6,9, };
//     int *ptr=&arr[0];
//     int v=5;
//     int flag=0;
//     int newarr[5];
//
//     for(int i=0;i<5;i++) {
//         if (v>=*(ptr+i)) {
//             newarr[i]=*(ptr+i);
//         }
//         else if (flag==0 and v<*(ptr+i)){
//             newarr[i]=v;
//             flag=1;
//         }
//         else if (flag==1) {
//             newarr[i]=*(ptr+i-1);
//         }
//         else {
//             newarr[i]=v;
//         }
//
//     }
//     for (int j=0;j<5;j++) {
//         cout<<newarr[j]<<" ";
//     }
// }

//problem 6
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     int *ptr=&arr[0];
//     for (int i = 1; i <= n; i++) {
//         cin >> arr[i];
//     }
//     int target;
//     cin >> target;
//     int start,finish;
//     for (int i = 1; i <= n; i++) {
//         int sum = 0;
//         start=i;
//
//         for (int j = i; j <= n; j++) {
//             sum += *(ptr+j);
//             if (sum == target) {
//                 finish=j;
//                 break;
//             }
//             if (sum > target) {
//                 break;
//             }
//             }
//         cout<<sum<<endl;
//         if (sum == target) {
//             break;
//         }
//         }
//     cout<<*(ptr+start)<<" "<<*(ptr+finish)<<endl;
//     }


//problem 7
// int main() {
//    int m;
//    cin>>m;
//    int n;
//    cin>>n;
//
//    int arr[m][n];
//    int *ptr=&arr[0][0];
//    for(int i=0;i<m;i++) {
//       for(int j=0;j<n;j++) {
//          cin>>arr[i][j];
//       }
//    }
//    for(int i=0;i<m;i++) {
//       for(int j=0;j<n;j++) {
//          cout<<*(ptr+i*n+j)<<" ";
//
//       }
//       cout<<endl;
//    }
//    cout<<endl;
//
//    for(int i=0;i<n;i++) {
//       for(int j=0;j<m;j++) {
//          cout<<*(ptr+i+j*n)<<" ";
//       }
//       cout<<endl;
//    }
// }


