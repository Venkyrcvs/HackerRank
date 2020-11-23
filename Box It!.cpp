#include<bits/stdc++.h>

using namespace std;
class Box{
    private:
    int l,b,h;
     
    public:
    Box(){
        l=0;
        b=0;
        h=0;
    }
    Box(int l,int b,int h){
        this->l=l;
        this->b=b;
        this->h=h;
    }
    Box(Box &b){
        this->l=b.l;
        this->b=b.b;
        this->h=b.h;
    }
    int getLength(){
        return l;
    } // Return box's length
    int getBreadth (){
        return b;
    } // Return box's breadth
    int getHeight (){
        return h;
    }  //Return box's height
    long long CalculateVolume(){
        return (long long) l*b*h;
    } 

    bool operator<(Box& b){
        if(this->l==b.l && this->b==b.b && this->h==b.h){
            return false;
        }
       else if(this->l < b.l){
            return true;
        }
        else if(this->b < b.b && this->l == b.l){
            return true;
        }
        else if(this->h < b.h && this->b == b.b && this->l == b.l){
            return true;
        }
        return false;
    }

//Overload operator << as specified
friend ostream& operator<<(ostream& out, Box& B);

};

ostream& operator<<(ostream& out, Box& B){
    out<<B.l<<" ";
    out<<B.b<<" ";
    out<<B.h<<" ";
    return out;
}

