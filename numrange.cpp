int Solution::numRange(vector<int> &A, int B, int C) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int sum = 0;
    int counter = 0;
    for(int i = 0; i < A.size(); i++){
        sum = 0;
        for(int j = i; j < A.size(); j++){
            sum += A[j];
            if(sum > C) break;
            if(sum >= B && sum <=C){
                counter++;
            }
        }
        //sum = 0;
    }
    
    return counter;
}

