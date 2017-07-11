swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void permuteRec(vector<int> &a, vector<vector<int>> &b, int m, set<vector<int>> &s){
    
    if(m == a.size()-1){
        if(s.find(a) == s.end()) {
            b.push_back(a);
            s.insert(a);
        }
    } else{
        for(int i = m; i < a.size(); i++){
            swap(a[m], a[i]);
            permuteRec(a, b, m+1, s);
            swap(a[m], a[i]);
        }
    }
}

vector<vector<int> > Solution::permute(vector<int> &A) {
    
    vector<vector<int>> ret_vec;
    set<vector<int>> s;
    
    permuteRec(A, ret_vec, 0, s);
    sort(ret_vec.begin(), ret_vec.end());
    
    return ret_vec;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}

