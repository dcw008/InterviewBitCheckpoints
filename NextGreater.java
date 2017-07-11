public class Solution {
	public ArrayList<Integer> nextGreater(ArrayList<Integer> a) {
	    
	    //iterate through each index and set the next greater element
	    for(int i = 0; i < a.size(); i++){
	        int current = a.get(i);
	        int next = -1; //initialize next value
	        //search for the next greater element in the array
	        for(int j = i + 1; j < a.size(); j++){
                if(a.get(j) > current){
                next = a.get(j);
                break;
            }

	        }
	        a.set(i, next);
	    }
	    
	    return a;
	    
	}
}

