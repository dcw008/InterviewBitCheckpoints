int Solution::longestConsecutive(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Ch6eckout www.interviewbit.com/pages/sample_codes/ for more details
    unordered_set <int> s;
    
    int count = 0;
    for(int num : A){
        s.insert(num);
    }
    
    for(int num : A){
        
        //check if it's the first number of any subsequence
        if(s.find(num - 1) == s.end()){
            
            int val = num;
            int local_counter = 0;
            while(s.find(val) != s.end()){
                local_counter++;
                val++;
            }
            
            count = max(count, local_counter);
        }
    }
    
    return count;
}

