ListNode* reverseKGroup(ListNode* head, int k) {
      vector<ListNode *> ele;
        
      ListNode * cur = head;
      while(cur)
      {
          ele.push_back(cur);
          cur = cur->next;
      }
      int length = ele.size();
      int times = length / k;
      for(int i = 0 ; i<times ;i++)
      {
          reverse(ele.begin() + i*k , ele.begin() + i*k + k);
          
      }
      for(int i =0;i<length-1 ;i++)
      {
          ele[i]->next = ele[i+1];
      }
      ele[length-1]->next = NULL;
        return ele[0];
      
    }