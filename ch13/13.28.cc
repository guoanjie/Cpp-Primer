#include <string>

class TreeNode {
public:
    TreeNode(): value(""), count(0), left(nullptr), right(nullptr) { }
    TreeNode(const TreeNode &orig):
            value(orig.value), count(orig.count),
            left(orig.left ? new TreeNode(*orig.left) : nullptr),
            right(orig.right ? new TreeNode(*orig.right) : nullptr) {
    }
    TreeNode& operator=(const TreeNode &rhs);
    ~TreeNode() {
        delete left;
        delete right;
    }
private:
    std::string value;
    int count;
    TreeNode *left;
    TreeNode *right;
};

TreeNode& TreeNode::operator=(const TreeNode &rhs) {
    if (&rhs != this) {
        delete left;
        delete right;
        value = rhs.value;
        count = rhs.count;
        left = new TreeNode(*rhs.left);
        right = new TreeNode(*rhs.right);
    }
    return *this;
}

class BinStrTree {
public:
    BinStrTree(): root(nullptr) { }
    BinStrTree(const BinStrTree &orig):
            root(orig.root ? new TreeNode(*orig.root) : nullptr) { }
    BinStrTree& operator=(const BinStrTree &rhs);
    ~BinStrTree() {
        delete root;
    }
private:
    TreeNode *root;
};

BinStrTree& BinStrTree::operator=(const BinStrTree &rhs) {
    if (&rhs != this) {
        delete root;
        root = new TreeNode(*rhs.root);
    }
    return *this;
}

int main() {
    return 0;
}
