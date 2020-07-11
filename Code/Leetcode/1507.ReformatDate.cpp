class Solution {
public:
    string getMonth(string m){
        if(m == "Jan")
            return "01";
        else if(m == "Feb") return "02";
        else if(m == "Mar") return "03";
        else if(m == "Apr") return "04";
        else if(m == "May") return "05";
        else if(m == "Jun") return "06";
        else if(m == "Jul") return "07";
        else if(m == "Aug") return "08";
        else if(m == "Sep") return "09";
        else if(m == "Oct") return "10";
        else if(m == "Nov") return "11";
        return "12";
         
    }
    string reformatDate(string date) {
        int n = date.size();
        stringstream s(date); // Used for breaking words 
        string word; // to store individual words 
string d, m , y;
        int count = 0; 
        while (s >> word){
            if(count == 0){
                d = word;
            }else if(count == 1)
                m = word;
            else y = word;
            count+=1;
        } 
        
        if(n == 13){
           return y+"-"+ getMonth(m)+"-"+d.substr(0,2);
        }
        return y+"-"+getMonth(m)+"-0"+d.substr(0,1);
    }
};
