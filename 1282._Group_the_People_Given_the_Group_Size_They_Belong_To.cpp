class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> res;
        map<int, queue<int>> people_groupsizes;

        for (int n = 0; n < groupSizes.size(); n++) {

            if (people_groupsizes.count(groupSizes[n])) {

                people_groupsizes[groupSizes[n]].push(n);
            }
            else {
                queue<int> q;
                q.push(n);
                people_groupsizes[groupSizes[n]] = q;
            }
        }

        for (auto i : people_groupsizes) {
            vector<int> tmp;
            while (!i.second.empty()) {
                if (tmp.size() == i.first) { res.push_back(tmp); tmp.clear(); }
                tmp.push_back(i.second.front());
                i.second.pop();
            }
            res.push_back(tmp);
        }
        return res;
    }
};
