int sockMerchant(int n, vector<int> ar) {
    sort(ar.begin(),ar.end());
    vector<int>:: iterator itr;
    int count=0;
    itr=ar.begin();
    while(itr!=ar.end()-1){
        if(*itr == *(itr+1)){
            count+=1;
            advance(itr,2);
        }
        else advance(itr,1);
    }
return count;
}

