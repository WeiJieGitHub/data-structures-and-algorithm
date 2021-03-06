#include "avltree.h"

static int hide(AvlTree *tree, BiTreeNode *node, const void *data) {
  int compare, result;
  if (bitree_is_eob(node))
    return -1;
  compare = tree->compare(data, ((AvlTreeNode *)(bitree_data(node)))->data);
  if (compare < 0) {
    result = hide(tree, bitree_left(node), data);
  } else if (compare > 0) {
    result = hide(tree, bitree_right(node), data);
  } else {
    ((AvlTreeNode *)(bitree_data(node)))->hidden = 1;
    result = 0;
  }
  return result;
}

int avltree_remove(AvlTree *tree, const void *data) {
  return hide(tree, bitree_root(tree), data);
}
