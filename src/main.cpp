#include<iostream>
using namespace std;
int main(){
    cout<<"Sanke Game Started\n";
    int height,width,foodX,foodY;
    cin>>height>>width;
    cin>>foodX>>foodY;

    int snakeX=height/2,snakeY=width/2;
    for(int i=0;i<height;i++){
        for(int j=0;j<width;j++){
            if(i==snakeX && j==snakeY){
                cout<<"O";
            }
            else if(i==snakeX && (j == snakeY-1 ||j == snakeY-2)){
                cout<<"o";
            }
            else if(i==foodX && j== foodY){
                cout<<"*";
            }
             else if(i==0 || i==height-1 || j==0 ||j==width-1){
                cout<<"#";
            }
            else{
                cout<<" ";
            }
           
            
        }
        cout<<endl;
    }
   
    return 0;
}