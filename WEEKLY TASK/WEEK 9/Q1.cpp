//LUCKY NUMBERS
bool luck(int x,int n){
        if(n<x){
            return true;
        }
        if(n%x==0){
            return false;
        }

        n = n-(n/x);
        x++;
        return luck(x,n);
    }
bool isLucky(int n) {
    // code here
     int x = 2;
        return luck(x,n);
}

  