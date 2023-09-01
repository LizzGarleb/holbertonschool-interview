#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * _binary_tree_delete - Deallocate a binary tree
 *
 * @tree: Pointer to the root of the tree to delete
 */
static void _binary_tree_delete(binary_tree_t *tree)
{
    if (tree)
    {
        _binary_tree_delete(tree->left);
        _binary_tree_delete(tree->right);
        free(tree);
    }
}

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
    heap_t *root;
    heap_t *node;

    root = NULL;
    node = heap_insert(&root, 98);
    printf("Inserted: %d\n", node->n);
    binary_tree_print(root);
    node = heap_insert(&root, 402);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    node = heap_insert(&root, 12);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    node = heap_insert(&root, 46);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    node = heap_insert(&root, 128);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    node = heap_insert(&root, 256);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    node = heap_insert(&root, 512);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    node = heap_insert(&root, 50);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    _binary_tree_delete(root);
    return (0);
}


// Expected Outut:
// Inserted: 98
// (098)

// Inserted: 402
//   .--(402)
// (098)

// Inserted: 12
//   .--(402)--.
// (098)     (012)

// Inserted: 46
//        .--(402)--.
//   .--(098)     (012)
// (046)

// Inserted: 128
//        .-------(402)--.
//   .--(128)--.       (012)
// (046)     (098)

// Inserted: 256
//        .-------(402)-------.
//   .--(128)--.         .--(256)
// (046)     (098)     (012)

// Inserted: 512
//        .-------(512)-------.
//   .--(128)--.         .--(402)--.
// (046)     (098)     (012)     (256)

// Inserted: 50
//             .-------(512)-------.
//        .--(128)--.         .--(402)--.
//   .--(050)     (098)     (012)     (256)
// (046)