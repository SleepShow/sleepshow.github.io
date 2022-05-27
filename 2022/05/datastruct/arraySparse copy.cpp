/* 
问题描述：  
使用稀疏数组，来保留类似前面的二维数组(棋盘、地图等等)  
把稀疏数组存盘，并且可以从新恢复原来的二维数组数  
  
思路分析  
遍历存放原始的二维数组，记录不同值得个数  
创建一个n+1行，3列的新二维数组，其中n为不同值的个数  
新二维数组第一行存放原数组总的行数，列数和不同值个数  
再次遍历原数组，将每个不同值的行，列和值存入新数组中
 */

#include <iostream>
const int rows = 11;
const int cols = 11;

using namespace std;

int main(){
    // 创建一个原始数组，存放五子棋
    int originArray[rows][cols];
    // 0 表示没有棋子 1 表示黑子 2 表示蓝子
    originArray[2][1] = 1;
    originArray[1][3] = 2;
    originArray[6][9] = 2;
    originArray[5][0] = 1;

    // 输出原始数组
    for(auto &n : originArray){
        for (auto &m : n){
            cout << m ;
        }
        cout << endl;        
    }
    
    return 0;
}