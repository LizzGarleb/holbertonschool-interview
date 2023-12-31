#!/usr/bin/python3
"""
    You have n number of locked boxes
    in front of you. Each box is numbered
    sequentially from 0 to n - 1 and each
    box may contain keys to the other boxes.
"""


def canUnlockAll(boxes):
    """
        Method that determines if all the boxes
        can be opened.

        @boxes: is a list of lists

        Return: True if all boxes can be opened,
                else return False

        Description:
            A key with the same number as a box opens that box
            You can assume all keys will be positive integers
                There can be keys that do not have boxes
            The first box boxes[0] is unlocked
    """
    keyset = [0]
    for key in keyset:
        for content in boxes[key]:
            if content not in keyset and content < len(boxes):
                keyset.append(content)
    return len(keyset) == len(boxes)
