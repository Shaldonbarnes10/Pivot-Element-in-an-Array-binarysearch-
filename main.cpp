#include<iostream>
#include <array>

using namespace std;
int main(){
    array<int,7> s = {5,6,7,1,2,3,4};
    int l=0,h=s.size()-1;
    while (l<h){
        int mid = l+(h-l)/2;
        if (s[mid]>=s[0]){
            l = mid+1;
        }else{
            h=mid;
        }
    }
    cout <<"The pivot index is "<<l<<" and the value at that index is : "<<s[l];
}