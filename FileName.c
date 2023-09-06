

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head) {
    //涉及head的改动时，定义一个假head
    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->next = head;

    //定义遍历指针
    struct ListNode* cur = dummy;

    //遍历
    while (cur->next && cur->next->next)
    {
        if (cur->next->val == cur->next->next->val)
        {
            int x = cur->next->val;
            while (cur->next && cur->next->val == x)
            {
                cur->next = cur->next->next;
            }
        }
        else cur = cur->next;
    }
    return dummy->next;
    //遇到相同元素
    //记录元素的值，继续向后判断是否有更多相同的值
    //指针向后移动

}