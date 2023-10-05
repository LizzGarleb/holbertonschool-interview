# Heap Insert
![Heap Insert](https://media.giphy.com/media/5BI679ybkAhJm/giphy.gif)

## Requirement
- Allowed editors: `vi`, `vim`, `emacs`
- Programs and function will be compiles with `gcc` 4.8.4` usign the flags `-Wall -Werror -Wextra -pedantic`
- All files should end with a new line
- No global variable allowed
- No more than 5 function per file
- Standard library allowed
- All functions should be included in your header file called `binary_trees.h`

### Data Structure
```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;

};
```

### Max Binary Heap
`typedef struct binary_tree_s heap_t;`

### 0- binary_tree_node.c
Function that creates a binary tree node
- Prototype: `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`
- `parent` is a pointer to the parent node of the node to create
- `value` is the value to put in the new node
- When created, a node does not have any children
- Your function must return a pointer to the new node, or `NULL` on failure

### 1-heap_insert.c
Function that inserts a value into a Max Binary Heap:
- Prototype: `heap_t *heap_insert(heap_t **root, int value);`
- `root` is a double pointer to the root node of the Heap
- `value` is the value to store in the node to be inserted
- Your function must return a pointer to the inserted node, or `NULL` on failure
- If the address stored in `root` is `NULL`, the created node must become the root node.
- You have to respect a `Max Heap` ordering
- You are allowed to have up to `6` functions in your file
