#define NULL_PTR ((void*)0)


typedef struct tree_node
{
    void *tree_data;
    struct tree_node *left_child;
    struct tree_node *right_child;
}TreeNode;


typedef struct tree_type
{
    TreeNode *root;
}TreeType;
















