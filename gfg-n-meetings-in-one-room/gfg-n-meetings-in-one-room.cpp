//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int, int>> vec;
        for (int i = 0; i < n; i++)
            vec.push_back({start[i], end[i]});

        sort(vec.begin(), vec.end(), [](pair<int, int> &x, pair<int, int> &y)
             { return (x.second < y.second); });

        int x, cnt;
        x = -1;
        cnt = 0;

        for (int i = 0; i < n; i++)
            if ((x == -1 || vec[i].first > x) && ++cnt)
                x = vec[i].second;

        return cnt;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++)
            cin >> start[i];

        for (int i = 0; i < n; i++)
            cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends