class Solution{
public:	
    
    //Method 1: Time: O(N)  Space: O(1)  - Using two for Loops
// 	int print2largest(int arr[], int n) {
// 	    int maxx1 = arr[0];
// 	    int maxx2 = -1;
	    
// 	    //Finding Maximum element
// 	    for(int i=0; i<n; i++){
// 	        if(arr[i]>maxx1){
// 	            maxx1 = arr[i];
// 	        }
// 	    }
	    
// 	    //Finding second maximum element
// 	    for(int i=0; i<n; i++){
// 	        if(arr[i]>maxx2 and arr[i]!=maxx1){
// 	            maxx2 = arr[i];
// 	        }
// 	    }
	    
// 	    return maxx2;
// 	}
	
	//Method 2: Time: O(N) Space: O(1) - Using one for Loop
	int print2largest(int arr[], int n){
	    int maxx1 = arr[0];
	    int maxx2 = -1;
	    
	    for(int i=0; i<n; i++){
	        if(arr[i]>maxx1){
	            maxx2 = maxx1;
	            maxx1 = arr[i];
	        }
	        
	        else if(arr[i]<maxx1){
	            
	            if(arr[i]>maxx2){
	                maxx2 = arr[i];
	            }
	            
	        }
	    }
	    
	    return maxx2;
	}
};
