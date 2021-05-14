#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--)
    {
        int arr[3][3];
        int countX = 0 , count_ = 0 , countO = 0 , winX = 0 , winO = 0;

        for(int i = 0 ; i < 3 ; i++) // INPUT
        {
            for(int j = 0 ; j < 3 ; j++)
            {
                cin >> arr[i][j];
                if(arr[i][j] == 'X')countX++;
                else if(arr[i][j] == 'O')countO++;
                else if(arr[i][j] == '_')count_++;
            }
        }

        for(int i = 0 ; i < 3 ; i++) // ROWS
        {
            if(arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][0] == 'X'){winX++;}
            if(arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][0] == 'O'){winO++;}
        }

        for(int i = 0 ; i < 3 ; i++) // COLUMNS
        {
            if(arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[0][i] == 'X'){winX++;}
            if(arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[0][i] == 'O'){winO++;}
        }

        // DIAGONALS
        if(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] == 'X'){winX++;}
        if(arr[0][2] == arr[1][1] && arr[1][1] == arr[2][2] && arr[2][0] == 'O'){winO++;}
        if(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] == 'O'){winO++;}
        if(arr[0][2] == arr[1][1] && arr[1][1] == arr[2][2] && arr[2][0] == 'X'){winX++;}


        if(countO > countX){cout<<3;}
        else if(countX - countO > 1){cout<<3;}
        else if(countX == countO && winO == 1 && winX == 0){cout<<1;}
        else if(countX > countO && winX == 1 && winO == 0){cout<<1;}
        else if(count_ == 0 && winX+winO==0){cout<<1;}
        else if(count_ == 0 && winX == 2){cout<<1;}
        else if(count_ > 0 && winX+winO == 0){cout<<2;}
        else{cout<<3;}

        cout << "\n";
        
    }


    return 0;
}
