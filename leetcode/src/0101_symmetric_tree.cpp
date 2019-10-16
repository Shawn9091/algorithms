/*
* Copyright(c) 2019 Jiau Zhang
* For more information see <https://github.com/JiauZhang/algorithms>
* 
* This repo is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation
*
* It is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with THIS repo. If not, see <http://www.gnu.org/licenses/>.
*/

/*
* https://leetcode-cn.com/problems/symmetric-tree
* 题目描述：
*     给定一个二叉树，检查它是否是镜像对称的。
*     例如，二叉树 [1,2,2,3,4,4,3] 是对称的。
*         1
*        / \
*       2   2
*      / \ / \
*     3  4 4  3
* 
*     但是下面这个 [1,2,2,null,3,null,3] 则不是镜像对称的:
*         1
*        / \
*       2   2
*        \   \
*        3    3
* 
* 解题思路：
*     因为是要判断树是否是对称的，首先判断两个树是否相等的问题
*     可以分为根节点、左子树、右子树的问题来解决
*     同样的，判断是否是对称树，我们可以按照相反的次序来解决这个问题
*     同样按照根节点、左子树、右子树的思路做，不同的是，我们访问的
*     都是同一棵树，并且用一棵树的左子树与一棵树的右子树进行比较
*     这样就好比做了一次对称，如果他们完全相同，那么这个树就是对称的
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return do_symmetric(root, root);
    }

    bool do_symmetric(TreeNode *left, TreeNode *right) {
        if (left == NULL && right == NULL)
            return true;
        if (left == NULL || right == NULL)
            return false;

        bool res = (left->val == right->val);
        if (!res)
            return false;
        res = do_symmetric(left->left, right->right);
        if (!res)
            return false;
        res = do_symmetric(left->right, right->left);
        return res;
    }
};