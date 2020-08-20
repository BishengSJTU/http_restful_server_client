# http_restful_server_client

需要保证以下依赖：

安装库文件：包括 jsoncpp zbar libhv
jsoncpp 的安装利用 apt-get 进行安装：sudo apt-get install libjsoncpp-dev
zbar 的安装利用 apt-get 进行安装：sudo apt-get install libzbar-dev
hv 的安装利用源码编译进行安装：
1） git clone https://github.com/BishengSJTU/libhv
2） cd libhv
3） make libhv
4） sudo make install
安装完成确认
/usr/include 目录下存在 jsoncpp 文件以及 zbar 文件夹
/usr/local/include 目录下存在 hv 文件夹
