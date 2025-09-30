class Solution {
    public void mergeArrays(int a[], int b[]) {
        // code here
        int j=0;
        int c =j;
        for(int i=0;i<a.length;i++){
            
            if(a[i]>b[0]){
                int temp = a[i];
                a[i] = b[0];
                b[0] = temp;
                //j++;
            }
            c=0;
            if(c!= b.length-1 && b[c]>b[c+1]){
                while(c< b.length-1 && b[c]>b[c+1]){
                    int temp =b[c];
                    b[c] = b[c+1];
                    b[c+1]=temp;
                    c++;
                }
            }
        }
        
    }
}
