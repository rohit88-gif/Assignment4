int main() {
    int n, i, t, r, s, f;
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        t = i;
        s = 0;
        while(t > 0) {
            r = t % 10;          
            f = 1;              
            while(r > 1)         
                f *= r--;
            s += f;             
            t /= 10;           
        }
        if(s == i)               
            printf("%d ", i);
    }
    
  
}