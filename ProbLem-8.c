class Solution {
public:
    void pattern8(int n) {
        for(int i=n;i>=1;i--)
        { // spaces
            for(int j=1;j<=n-i;j++)
            {
                cout<<" ";
            }
            // stars
            for(int j=1;j<=2*i-1;j++)
            {
                cout<<"*";
            }
            cout<<endl;

        }

    }
};
