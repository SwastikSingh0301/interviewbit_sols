void Solution::arrange(vector<int> &A) {
    
    int l=A.size();
    for(int i=0;i<l;i++){
        if(A[A[i]]<l){
            int temp=A[A[i]];
            A[i]=l*temp+A[i];
        }else{
            int temp=A[A[i]]%l;
            A[i]=l*temp+A[i];
        }
    }
    for(int i=0;i<l;i++){
        int temp=A[i]%l;
        A[i]=(A[i]-temp)/l;
    }
}