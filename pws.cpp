//if n<0 make it (+)ve
//if n is odd number , make as {x * x^(n-1)} =>2^5=2*(2^4) =>makes n as even
//if n is even number, make as {(x*x)^(n/2)} =>2^6=(2*2)^(6/2)=4^3
//if n<0 return 1/ans else return ans

//Time Complexity: O(log n)
//Space Complexity: O(1)

class Solution {
public:
    double myPow(double x, int n) 
    {
        double ans=1.0;
        long long temp=n;
        if(temp<0) temp=(-1)*temp;
        while(temp)
        {
            if(temp%2!=0)
            {
                ans*=x;//2^11=2*2^10
                temp--;
            }
            else
            {
                x=x*x;
                temp/=2; //2^10=(2*2)^5=4^5
            }
        }
        return (n>0) ? ans: 1.0/ans;
    }
};
//please upvote