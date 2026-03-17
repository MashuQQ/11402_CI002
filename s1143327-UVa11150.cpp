#include<iostream>
using namespace std;
int main(){
int a,b,f,i,j;

while(cin >> a){
f=0;
i=0;
if(a%3 == 2){
b = (a+1)/3;
while(b >= 3){
    f+=b;
    i+=b%3;
    b=b/3;
        while(i>=3){
        b=b+1;
        i-=3;
    }
}
if(b+i >= 3)f++;

f += a+b;
}

if(a%3 == 1){
b = (a+2)/3;
j=2;
while(b >= 3){
    f+=b;
    i+=b%3;
    b=b/3;
     while(i>=3){
        b=b+1;
        i-=3;
    }

}
if(b+i >= 3)f++;
i=i+b;
    if(j>i)f--;

f += a+b;
}

if(a%3 == 0){
b = (a+3)/3;
j=3;
while(b >= 3){
    f+=b;
    i+=b%3;
    b=b/3;
        while(i>=3){
        b=b+1;
        i-=3;
    }
}
if(j>i+b)f--;

f += a+b;
}

cout<<f;
}
return 0;
}
