#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans = -1;
    cin>>n;
    vector<int > arr;
    for(int i = 0;i<n;i++){
        int elem;
        cin>>elem;
        arr.push_back(elem);
    }
    int low = 0,high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[low]<=arr[high]){
            //entire array is sorted
            ans = low;
        }
        else if(arr[mid]<=arr[high]){
            ans = mid;
            high = mid-1;
        }
        else{
            ans =low;
            low = mid+1;
        }
    }
    cout<<"Rotation: "<<ans;
}















import numpy as np
import pandas as pd
import seaborn as sns

Data = pd.read_csv('/content/drive/MyDrive/lr.csv')

Data.columns


Data.columns = ['X','Y']

Data


Data.iloc[1,0]


epochs = 100
lr = 0.1
m = 0
c = 0
batch_size = 20



import random

def mse(batch_size = 99,Data = Data,m = m,c = c):
    l = [x for x in range(0,99)]
    x = random.sample(l,batch_size)
    
    s = []
    for i in x:
        s.append(((m*Data.iloc[i,0]+c)-Data.iloc[i,1]))
    return s,batch_size,x,m,c
        

from sklearn.preprocessing import MinMaxScaler
scaler = MinMaxScaler()


x1 = np.array(Data['X']).reshape(-1,1)
scaler.fit(x1)
l1 = scaler.transform(x1)


x1 = l1.reshape(1,-1)[0]



Data['X'] = x1


Data.iloc[98,1]

Data


m = 0
c = 0
lr = 0.1

m

Data

Data.iloc[3,1]

loss = []



import random
for i in range(0,epochs):
    l = [x for x in range(0,99)]
    x = random.sample(l,1)
    loss_m = 0
    loss_c = 0
    for j in x:
        loss_m += (m*Data.iloc[j,0]+c-Data.iloc[j,1])*Data.iloc[j,0]
        loss_c+= m*Data.iloc[j,0]+c-Data.iloc[j,1]
    m = m-lr*loss_m
    c = c-lr*loss_c
    loss.append((m*Data.iloc[j,0]+c-Data.iloc[j,1])**2)
        


m

loss = loss[len(loss)-100:len(loss)]
line = [y for y in range(0,100)]
sns.lineplot(x = line,y = loss)


len(loss)

c

loss

import matplotlib.pyplot as plt
sns.scatterplot(Data = Data,x = 'X',y = 'Y')

x_line = np.linspace(min(Data['X']),max(Data['X']),99)
y_line = m * x_line + c
plt.plot(x_line,y_line,color='red')


x_line = np.linspace(min(Data['X']),max(Data['X']),99)
y_line = m * x_line + c
plt.plot(x_line,y_line,color='red')













