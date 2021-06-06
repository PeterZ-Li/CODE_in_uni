#include<iostream>
#include<cstring>
using namespace std;
char m[11][10];
int n,x,y,hor[10][2],can[10][2],act[4][2]={{1,0},{-1,0},{0,1},{0,-1}};

void general(int x,int y){
    bool f=0;
    for(int i=x; i>0; i--){
        if(f) break;
        if(m[i][y]!='\0'&&m[i][y]!='D') f=1;
        if(i<4) m[i][y]='D';
    }
    return;
}

void chariot(int x,int y){
    if(1<=x&&x<=3){
        bool f=0;
        if(y<=6){
            for(int i=y; i<7; i++){
                if(f) break;
                if(m[x][i]!='\0'&&m[x][i]!='D') f=1;
                else m[x][i]='D';
            }
        }
        else if(4<=y){
            for(int i=y; i>=4; i--){
                if(f) break;
                if(m[x][i]!='\0'&&m[x][i]!='D') f=1;
                else m[x][i]='D';
            }
        }
    }
    if(4<=y&&y<=6){
        general(x,y);
    }
    return;
}

bool check(int x,int y){
    if(1<=x&&x<=10&&1<=y&&y<=10&&(m[x][y]=='\0'||m[x][y]=='D')) return true;
    else return false;
}

void horse(int x, int y){
    if(check(x+1,y)){
        if(1<=x+2&&x+2<=10&&1<=y+1&&y+1<=10&&(m[x+2][y+1]=='\0'||m[x+2][y+1]=='D')) m[x+2][y+1]='D'; 
        if(1<=x+2&&x+2<=10&&1<=y-1&&y-1<=10&&(m[x+2][y-1]=='\0'||m[x+2][y-1]=='D')) m[x+2][y-1]='D'; 
    }
    if(check(x-1,y)){
        if(1<=x-2&&x-2<=10&&1<=y+1&&y+1<=10&&(m[x-2][y+1]=='\0'||m[x-2][y+1]=='D')) m[x-2][y+1]='D'; 
        if(1<=x-2&&x-2<=10&&1<=y-1&&y-1<=10&&(m[x-2][y-1]=='\0'||m[x-2][y-1]=='D')) m[x-2][y-1]='D'; 
    }
    if(check(x,y+1)){
        if(1<=x+1&&x+1<=10&&1<=y+2&&y+2<=10&&(m[x+1][y+2]=='\0'||m[x+1][y+2]=='D')) m[x+1][y+2]='D'; 
        if(1<=x-1&&x-1<=10&&1<=y+2&&y+2<=10&&(m[x-1][y+2]=='\0'||m[x-1][y+2]=='D')) m[x-1][y+2]='D'; 
    }
    if(check(x,y-1)){
        if(1<=x+1&&x+1<=10&&1<=y-2&&y-2<=10&&(m[x+1][y-2]=='\0'||m[x+1][y-2]=='D')) m[x+1][y-2]='D'; 
        if(1<=x-1&&x-1<=10&&1<=y-2&&y-2<=10&&(m[x-1][y-2]=='\0'||m[x-1][y-2]=='D')) m[x-1][y-2]='D'; 
    }
    return;
}

void cannon(int x,int y){
    if(1<=x&&x<=3){
        bool f=0,f2=0;
        if(y<=6){
            for(int i=y; i<7; i++){
                if(f&&f2) break;
                if(!f&&(m[x][i]!='\0'&&m[x][i]!='D')) f=1;
                else if(!f2&&(m[x][i]!='\0'&&m[x][i]!='D')) f2=1;
                else m[x][i]='D';
            }
        }
        else if(4<=y){
            for(int i=y; i>=4; i--){
                if(f&&f2) break;
                if(!f&&(m[x][i]!='\0'&&m[x][i]!='D')) f=1;
                else if(!f2&&(m[x][i]!='\0'&&m[x][i]!='D')) f2=1;
                else if(f&&!f2&&(m[x][i]=='\0'&&m[x][i]=='D')) m[x][i]='D';
            }
        }
    }
    if(4<=y&&y<=6){
        bool f=0,f2=0;
        for(int i=x; i>0; i--){
            if(f&&f2) break;
            if(!f&&(m[i][y]!='\0'&&m[i][y]!='D') ) f=1;
            else if(!f2&&(m[i][y]!='\0'&&m[i][y]!='D')) f2=1;
            else if(f&&!f2&&(m[i][y]=='\0'&&m[i][y]=='D')) m[i][y]='D';
        }
    }
    return;
}

bool checkmate(int x,int y){
    bool flag=1;
    if(m[x][y]!='D') flag=0;
    for(int i=0; i<4; i++){
        int x1=x+act[i][0];
        int y1=y+act[i][1];
        if(flag&&3<=x1&&x1<=6&&1<=y1&&y1<=3&&m[x1][y1]=='\0') flag=0;
    }
    return flag;

}
int main(){
    ios::sync_with_stdio(false);
    while(1){
        memset(m,0,sizeof(char)*10*10);
        memset(hor,0,sizeof(int)*10*2);
        memset(can,0,sizeof(int)*10*2);
        cin>>n>>x>>y;
        int num_horse=0,num_can=0;
        if(n==0||x==0||y==0) break;
        for(int i=0; i<n; i++){
            char c;
            int xi,yi;
            cin>>c>>xi>>yi;
            m[xi][yi]=c;
            if(c=='G') general(xi,yi);
            if(c=='H') {
                hor[num_horse][0]=xi;
                hor[num_horse][1]=yi;
                num_horse++;
            }
            if(c=='C'){
                can[num_can][0]=xi;
                can[num_can][1]=yi;
                num_can++;                
            }
            if(c=='R') chariot(xi,yi);
        }
        for(int i=0; i<num_horse; i++){
            horse(hor[i][0],hor[i][1]);
        }
        for(int i=0; i<num_can; i++){
            cannon(can[i][0],can[i][1]);
        }
        if(checkmate(x,y)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        cout<<endl;
    }
}