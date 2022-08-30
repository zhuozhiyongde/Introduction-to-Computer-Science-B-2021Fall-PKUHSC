#include <iostream>
using namespace std;

// 记录活动的权重以及起始时间
struct Activity {
    int w;      // weight
    int s;      // star
    int f;      // finish
};

// 根据活动结束时间从小到大排序
int compareByF(const void * a1, const void * a2) {
    return ((Activity *)a1)->f > ((Activity *)a2)->f;
}

// 通过二分查找找到最后一个与当前活动相容的活动，即找到使f(index) < s的最大index
// 因为动态规划求解问题的方向是从活动0到活动n，所以必须让找到的兼容的活动是最后一个，这样才能使用的子问题的解是正确的
// 故该函数返回的是right，而且当找到f(index) < s后还必须使用一个循环使index最大
int binarySearch(Activity* as, int left, int right, int s) {
    int mid = 0;
    while(left <= right) {
        mid = (left + right) / 2;
        if(as[mid].f > s) {
            right = mid - 1;
        }
        else if(as[mid].f < s) {
            left = mid + 1;
        }
        else {
            while(mid < right && as[mid + 1].f == s) {
                ++mid;
            }
            return mid;
        }
    }
    return right;
}

int main(int argc, const char * argv[]) {
    // 共m个问题
    int m;
    cin >> m;
    while((m--) > 0) {
        // 共n个活动
        int n;
        cin >> n;
        if(n == 0) {
            cout << 0 << endl;
            continue;
        }
        
        // 输入活动
        // 需要一个所有值都等于0的活动作为边界
        Activity* as = new Activity[n + 1];
        Activity a;
        a.s = 0;
        a.f = 0;
        a.w = 0;
        as[0] = a;
        for(int i = 1; i < n + 1; ++i) {
            cin >> a.s >> a.f >> a.w;
            as[i] = a;
        }
        
        // 排序
        qsort(as, n + 1, sizeof(Activity), compareByF);
        
        // 开始动态规划
        // dp[i]代表了到活动i为止最大的权值组合，同样也需要设置一个为0的边界
        int* dp = new int[n + 1];
        dp[0] = 0;
        for(int i = 1; i < n + 1; ++i) {
            // 如果当前活动与上一个活动兼容，则可以直接选择当前活动
            if(as[i].s >= as[i - 1].f) {
                dp[i] = dp[i - 1] + as[i].w;
            }
            // 如果不兼容，则比较下列两项
            // 1. 当前活动的权值与到上一个与当前活动兼容的活动为止的最大权值的和
            // 2. 到上一个活动为止的最大权值
            // 这样做是为了决定是否选择当前活动
            else {
                dp[i] = max(
                    as[i].w + dp[binarySearch(as, 0, i, as[i].s)],
                    dp[i - 1]
                );
            }
        }
        
        // 输出结果并释放资源
        cout << dp[n] << endl;
        delete [] as;
    }

    return 0;
}
