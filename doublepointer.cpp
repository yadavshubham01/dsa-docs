#include<iostream>
using namespace std;
/*
void update(int **p2){
    //p2= p2+1;
    *p2 =*p2+1;
    **p2 =**p2+1;
}
int main(){
  
   int i =5;
   int *ptr1 =&i;
   int **ptr2 =&ptr1;

   cout<<ptr1<<endl;
   cout<<ptr2<<endl;
   cout<<**ptr2<<endl;
   

   //funtion with double pointer 
   int i =5;
   int *p =&i;
   int** p2 =&p;
    update(p2);
   cout<<"answer is: "<<i<<endl;
   cout<<"answer is: "<<p<<endl;
   */
  //2D array dyanmic allocation
  int row;
  cin>>row;
  int col;
  cin>>col;

  int** arr = new int*[row];
  for(int i=0; i<row; i++){
    arr[i] = new int[col];
  }

  for(int i=0; i<row; i++){
   for(int j=0; j<col; j++){
     cin >> arr[i][j];
   }
   }
   for(int i=0; i<row; i++){
   for(int j=0; j<col; j++){
     cout << arr[i][j] <<" ";
   }cout<<endl;
   }
   
  /*
  int n;
  cin >> n;
  //creating 2d array with same row or col
  int** arr =new int*[n];
  for(int i=0; i<n; i++){
    arr[i]=new int[n];
  }
   //creation done 
   //talking input
   for(int i=0; i<n; i++){
   for(int j=0; j<n; j++){
     cin >> arr[i][j];
   }
   }
   //taking output
   for(int i=0; i<n; i++){
   for(int j=0; j<n; j++){
     cout << arr[i][j] <<" ";
   }cout<<endl;
   }
   */
return 0;
}