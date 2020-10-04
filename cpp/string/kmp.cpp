
//AAACAAAA

// implement lps array
// set the first element to zero
// loop through all the elemnts as long as i < pat.size
//initiatialize a variable for longest prefix
// if element is has been seen before increment prefix number and set lps[i] to prefix num
//if element isn't equal to the one before it and length is not zero,len[i]=lps[length-1]
// else set lps[i] to zero


void compute_lps(string pat,vector<int>&lps){
    int m=pat.size()-1;
    int len=0;
    lps[0]=0;

    int i=1;
    int len=0;
    while (i<m)
    {
        if (pat[i]==pat[len])
        {
            len++;
            lps[i]=len;
        }
        else
        {
            if (len!=0)
            {
                len=lps[len-1];
            }
            else
            {
                lps[i]=0;
                i++;
            }
            
        }
        
        
    }
}

// implement kmp
//compute lps array
// loop as long as i is less than length of text
//if  pat[i] == txt[i],increment i and j
// if j == length of pattern end serch and return starting found index(i-j)
// if pat[i != txt[j] , set j to be lps[j-1] and do not increment i
// else if j==0 just increment i

int kmp(string txt,string pat){
    vector<int>lps;
    compute_lps(pat,lps);
    int i,j=0;

    while (i< txt.size()-1)
    {
        if (txt[i]==pat[i])
        {
            i++;
            j++;
        }
        if(j==pat.size()-1){
            return i-j;
        }
        else if (txt[i]!= pat[j])
        {
            if (j!=0)
            {
                j=lps[j-1];
            }else
            {
                i=i+1;
            } 
        }
   
        
        
    }
    
}