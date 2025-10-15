#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int,int>> a(n);
    for (int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;

    sort(a.begin(), a.end());

    auto exists = [&](pair<int,int> p) {
        return binary_search(a.begin(), a.end(), p);
    };

    long long dem = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            int x1 = a[i].first, y1 = a[i].second;
            int x2 = a[j].first, y2 = a[j].second;

            int sx = x1 + x2;
            int sy = y1 + y2;
            int dx = x2 - x1;
            int dy = y2 - y1;
        
            int rx2 = sx - dy;
            int ry2 = sy + dx;
            int sx2 = sx + dy;
            int sy2 = sy - dx;

            if ((rx2 % 2) || (ry2 % 2) || (sx2 % 2) || (sy2 % 2)) continue;

            pair<int,int> R = {rx2/2, ry2/2};
            pair<int,int> S = {sx2/2, sy2/2};

            if (exists(R) && exists(S))
                dem++;
        }
    }

    cout << dem / 2; 
    return 0;
}
