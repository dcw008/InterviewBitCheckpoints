vector<vector<int> > Solution::prettyPrint(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int dimension = 2*A - 1; 
    int min = 0;
    int max = dimension - 1;
    vector<vector<int>> temp (dimension, vector<int> (dimension));
    
    
    for(; A > 0; A--){
        
        for(int i = min; i <= max; i++){
            
            for(int j = min; j <= max; j++){
                temp[i][j] = A;
            }
        }
        
        min++;
        max--;
    }
    
    return temp;
}

