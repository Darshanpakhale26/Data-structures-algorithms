vector<int> res;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        res.push_back(sum / (i + 1));
    }
    return res;