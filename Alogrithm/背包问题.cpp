#include <iostream>
#define MAX_NUM 5
#define MAX_WEIGHT 10
using namespace std;

//动态规划求解
int zero_one_pack(int total_weight, int w[], int v[], int flag[], int n) {
  int c[MAX_NUM+1][MAX_WEIGHT+1] = {0}; //c[i][j]表示前i个物体放入容量为j的背包获得的最大价值
  // <span style="background-color: rgb(255, 0, 0);">状态转移方程：c[i][j] = max{c[i-1][j], c[i-1][j-w[i]]+v[i]}</span>
  //状态转移方程的解释：第i件物品要么放，要么不放
  //                 如果第i件物品不放的话,就相当于求前i-1件物体放入容量为j的背包获得的最大价值
  //                 如果第i件物品放进去的话,就相当于求前i-1件物体放入容量为j-w[i]的背包获得的最大价值
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= total_weight; j++) {
      if (w[i] > j) {
        // 说明第i件物品大于背包的重量，放不进去
        c[i][j] = c[i-1][j];
      } else {
        //说明第i件物品的重量小于背包的重量，所以可以选择第i件物品放还是不放
          if (c[i-1][j] > v[i]+c[i-1][j-w[i]]) {
            c[i][j] = c[i-1][j];
          }
          else {
            c[i][j] =  v[i] + c[i-1][j-w[i]];
          }
      }
    }
  }

  //下面求解哪个物品应该放进背包
  int i = n, j = total_weight;
  while (c[i][j] != 0) {
    if (c[i-1][j-w[i]]+v[i] == c[i][j]) {
      // 如果第i个物体在背包，那么显然去掉这个物品之后，前面i-1个物体在重量为j-w[i]的背包下价值是最大的
      flag[i] = 1;
      j -= w[i];
      //--i; 移到外面去
    }--i;
  }
  return c[n][total_weight];
}


int main() {
  int total_weight = 10;
  int w[4] = {0, 3, 4, 5};
  int v[4] = {0, 4, 5, 6};
  int flag[4]; //flag[i][j]表示在容量为j的时候是否将第i件物品放入背包
  int total_value = zero_one_pack(total_weight, w, v, flag, 3);
  cout << "需要放入的物品如下" << endl;
  for (int i = 1; i <= 3; i++) {
    if (flag[i] == 1)
      cout << i << "重量为" << w[i] << ", 价值为" << v[i] << endl;
  }
  cout << "总的价值为: " << total_value << endl;
  return 0;
}
