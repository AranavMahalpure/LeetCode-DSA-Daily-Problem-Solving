// leetcode 455 Assign Cookies Problem 

int findContentChildren(vector<int>& g, vector<int>& s) {
    // Sort the greed factors of children and cookie sizes
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());

    int childIndex = 0; // Pointer for children
    int cookieIndex = 0; // Pointer for cookies

    // Iterate over the cookies
    while (childIndex < g.size() && cookieIndex < s.size()) {
        // If the current cookie can satisfy the current child
        if (s[cookieIndex] >= g[childIndex]) {
            // Move to the next child
            childIndex++;
        }
        // Move to the next cookie
        cookieIndex++;
    }

    // The number of satisfied children
    return childIndex;
    }