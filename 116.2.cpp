#include <iostream>
#include <vector>

using namespace std;

vector<int> pre, post;

// root: 当前子树根结点在 pre 中的下标
// tail: 当前子树最后一个结点在 pre 中的下标
// isMirror: 是否按镜像 BST 规则判断
void getPostOrder(int root, int tail, bool isMirror) {
    if (root > tail) return;
    
    // i 从左往右找右子树起点，j 从右往左找左子树终点
    int i = root + 1;
    int j = tail;
    
    if (!isMirror) {
        // 正常 BST：左子树 < root，右子树 >= root
        while (i <= tail && pre[i] < pre[root]) i++;
        while (j > root && pre[j] >= pre[root]) j--;
    } else {
        // 镜像 BST：左子树 >= root，右子树 < root
        while (i <= tail && pre[i] >= pre[root]) i++;
        while (j > root && pre[j] < pre[root]) j--;
    }
    
    // 如果区间切分不完美，说明混入了不符合规则的结点，直接返回，树结构不合法
    if (i - j != 1) return;
    
    // 递归处理左子树和右子树
    getPostOrder(root + 1, j, isMirror);
    getPostOrder(i, tail, isMirror);
    
    // 左右子树处理完毕，最后把根结点加入后序遍历序列
    post.push_back(pre[root]);
}

int main() {
    int n;
    if (!(cin >> n)) return 0;
    
    pre.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> pre[i];
    }
    
    // 1. 先尝试当做普通的二叉搜索树进行处理
    getPostOrder(0, n - 1, false);
    
    // 2. 如果后序遍历数组长度不等于 n，说明普通 BST 处理失败了
    if (post.size() != n) {
        post.clear(); // 清空之前的部分错误结果
        // 尝试当做镜像二叉搜索树处理
        getPostOrder(0, n - 1, true);
    }
    
    // 3. 输出结果
    if (post.size() == n) {
        cout << "YES\n";
        for (int i = 0; i < n; i++) {
            cout << post[i] << (i == n - 1 ? "" : " ");
        }
        cout << "\n";
    } else {
        cout << "NO\n";
    }
    
    return 0;
}
