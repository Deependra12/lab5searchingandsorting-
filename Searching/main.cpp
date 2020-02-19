#include<iostream>

using namespace std;

bool search(int list[],int min,int max,int num){
    if (min <= max) {
      int mid = (min + max)/2;
      if (list[mid] == num)
         return true ;
      if (list[mid] > num)
         return search(list, min, mid-1, num);
      if (list[mid] < num)
         return search(list, mid+1, max, num);
   }
   return false;
}


int main(){
    int arr[]={1,2,6,9,10};
    int len= sizeof(arr)/sizeof(int);
    int number=0;
    if(search(arr,0,len-1,number)) cout<<number<< " is present in arrray";
    else cout<<number<<" is not present in array";
    return 0;

}
