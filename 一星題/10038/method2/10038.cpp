#include <bits/stdc++.h>
using namespace std;


int main(){
  int a;
  while(cin >> a)
  {
    // 輸入
    int num[a];
    for (int i =0; i< a ;++i)
    {
      cin >> num[i];
    }


    // 處理
    std::unordered_set<int> uniqueSet;  // std::unordered_set 是一個保證唯一性但不排序的資料結構

    bool isJolly = true;  // 先設定 isJolly 為 true
    for (int i =0; i< a-1 ;++i)
    {
      int icurNum = abs(num[i] - num[i+1]); // 計算差後判斷範圍
      if (icurNum >= a || icurNum == 0)
      {
        isJolly = false;
        break;
      }
      uniqueSet.insert(icurNum);  // 添加到 uniqueSet 中
    }

    // 輸出
    if ( isJolly == false)  // 已經沒有繼續算的必要了，這部份直接輸出後處理下一組
    {
      cout << "Not jolly\n";
      continue;
    }

    // 輸出
    if(uniqueSet.size() == a-1) // 如果 uniqueSet的大小是 a-1 代表 1 到 a-1 都有出現
      cout << "Jolly\n";
    else
      cout << "Not jolly\n";
  }
}


