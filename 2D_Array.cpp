#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int i,j,arr[5][5]{{0,0,0,0,0},{0,0,0,0,0}};
  //For user Input
    // for(i=0;i<5;i++){
    //     for(j=0;j<5;j++){

    //     cin>>arr[i][j];
    //     }
    // }
  //fing 2nd array length
    int row= sizeof(arr)/sizeof(arr[0]);
    int col= sizeof(arr[0])/sizeof(arr[0][0]);
    cout<<row<<" "<<col<<endl;
  
  //Display 2nd array
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){

        cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
