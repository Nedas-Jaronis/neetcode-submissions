class Solution {
public:
    int compress(vector<char>& chars) {
        int write = 0, read = 0;
        while(read < chars.size()){
            char c = chars[read];
            int runStart = read;
            while(read < chars.size() && chars[read] == c){
                read++;
            }
            int len = read - runStart;
            chars[write] = c;
            write = write + 1;
            if(len > 1){
                for(char d : to_string(len)){
                    chars[write] = d;
                    write = write + 1;
                }
            }
        }

        return write;
    }
};