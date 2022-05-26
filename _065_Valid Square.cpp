//link: https://leetcode.com/problems/valid-square/

/*
based on distance formula sqrt( (x2-x1)^2 + (y2-y1)^2 );
*/

class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        float a=sqrt( pow((p1[0]-p2[0]),2) + pow((p1[1]-p2[1]),2) );
        float b=sqrt( pow((p3[0]-p2[0]),2) + pow((p3[1]-p2[1]),2) );
        float c=sqrt( pow((p3[0]-p4[0]),2) + pow((p3[1]-p4[1]),2) );
        float d=sqrt( pow((p1[0]-p4[0]),2) + pow((p1[1]-p4[1]),2) );
        float d1=sqrt( pow((p1[0]-p3[0]),2) + pow((p1[1]-p3[1]),2) );
        float d2=sqrt( pow((p2[0]-p4[0]),2) + pow((p2[1]-p4[1]),2) );
        vector<float> v;
        
        v.insert(v.end(),{a,b,c,d,d1,d2});
        sort(v.begin(),v.end());
        if(v[0]==v[5]) return 0;
        if(v[0]==v[1] && v[0]==v[2] && v[0]==v[3] && v[4]==v[5] ) return 1;
        return 0;
    }
};