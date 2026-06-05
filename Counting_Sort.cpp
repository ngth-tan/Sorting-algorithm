#include <iostream>
#include <vector>
using namespace std;
void Print(vector<int> a, int n) {
    for (int i=0;i<n;i++)
        cout <<a[i]<<" ";
    cout << "\n";
}
void CountingSort(vector<int>& a, int n) {
    vector <int> count(1010),pos(1010), out(n);
    // tạo mảng count để đếm tần suất các số
    for(int i=0;i<n;i++)
        count[a[i]]++;
    //tạo mảng pos-> vị trí cuối cùng của i
    int temp=0;
    for(int i=0;i<1001;i++){
        temp+=count[i];
        pos[i]=temp-1;
    }
    //rải các giá trị của a[i] vào mảng out tăng dần
    for(int i=n-1;i>=0;i--){
        out[pos[a[i]]]=a[i];
        pos[a[i]]--;
        cout<<"chèn "<<a[i]<<" vào vị trí" <<pos[a[i]]<<": ";
        Print(out,n);
    }
    a=out;
}
int main() {
    vector<int> a = {0,3,5,2,6,8,1,0,9,5,8,4,6,10,2,10,2,4,10,9};
    int n=a.size();
    cout << "Mang ban dau: ";
    Print(a,n);
    CountingSort(a,n);
    cout << "Mang sau khi sap xep: ";
    Print(a,n);
    return 0;
}