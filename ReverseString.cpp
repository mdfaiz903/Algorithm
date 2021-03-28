//User function Template for C++

string reverseWord(string str){
    
  //Your code here
  string temp="";
  for(int i=str.length()-1;i>=0;i--){
      temp+=str[i];
  }
  return temp;
}
