class Solution {
public:
    string interpret(string command) {
        string result = "";
        int i=0;
        while(i<command.size())
        {
            if(command[i]== '(' && command[i+1] == ')')
            {
                result += 'o';
                i+=2;
            }
            if(command[i]== '(' && command[i+1] == 'a' && command[i+2] == 'l' && command[i+3] == ')')
            {
                result += "al";
                i+=4;
               
            }
            if(command[i]=='G')
            {
                result += 'G';
                i+=1;
            }
        } 
        return result;
    }
};