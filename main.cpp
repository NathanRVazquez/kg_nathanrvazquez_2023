#include <iostream>
#include <string>
#include <array>
using namespace std;



int indexOfNum( char x, string str1, int index){
    int count = 0;
    int indexes[100];
//this function will look for a charachter that matches the charachter that is given

for (int i = 0; i<str1.length();i++){
    //the for loop will look through all the charachters in the string and see which ones are the same

    if (str1[i] ==  x){
        //in the if statement when it determines that two charachters are the same the 
        // function saves it to an array that holds all the indexes 
        count ++;
        //the count details what position in the array it will go and also is the size of the array

        indexes[count]= i;
        
        }
    }
    return indexes[index];
}

int nums(char x,string str1){
    int count = 0;
    int indexes[100];
//this function will look for a charachter that matches the charachter that is given

    for (int i = 0; i<str1.length();i++){
        //the for loop will look through all the charachters in the string and see which ones are the same

        if (str1[i] ==  x){
        //in the if statement when it determines that two charachters are the same the 
        // function saves it to an array that holds all the indexes 
        count ++;
        
        }
    }
    return count;
}

bool ifFunc(char x,string str1, string str2){
    
    int count = nums(x,str1);
    
   
    char curr_val;
    //curr_val holds the first value of 
    //cout << curr_val << endl;
    for( int i = 0;i<count;i++ ){
        
        curr_val= str2[indexOfNum(x,str1,i)];
        //We are going to use this for loop to go throuogh each value of str2
        // with the indexes we found so we can test each value
        for (int j = 0; j<count-1;j++){
            
            //this for loops looks through the rest values of str2 with 
            // the indexes we found 
            
            if(curr_val == str2[indexOfNum(x,str1,(j+1))]){
                
                return false;
                //if it the first for loop provides a charachter
                // that is found later in the second string then 
                // it returns false because that would mean 
                // one charachter form str1 has 2 different values
            }
        }
    }
    return true;
    
    // the functin returns true if a charachter in str1
    // has multiple locations but all have the same value
}


bool test(string str1, string str2){
    //this is the function that will be called and will execute the entrire operation 
    for(int i = 0;i<str1.length();i++){
        //this parameter is being read but not tested 
        
        
        if (!ifFunc(str1[i], str1, str2)){
            
            return false;
        }
    }
    return true;
}

int main(){
    string str1;
    string str2;
    cin >> str1;
    cin >> str2;
    bool trying =  test(str1, str2);
        if (trying){
            cout << "True";
        }else {
            cout << "False";
        }
}