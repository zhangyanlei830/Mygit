主要内容：如何使用git 和 repo(多仓库管理工具)来进行日常开发
一、获取开发代码
	1.创建工作目录：
		mkdir ~/gx/v1.0
		cd ~/gx/v1.0
	2.获取仓库代码：
		goxceed 仓库：	repo init -u http://git.nationalchip.com/git/goxceed/manifests.git -b v1.9-dev
		spd 仓库：	repo init -u http://git.nationalchip.com/git/spd/manifests.git -b master
		docs 仓库：
			默认仓库：	repo init -u http://git.nationalchip.com/git/docs/manifests.git
			完整仓库(涉及权限)：	repo init -u http://git.nationalchip.com/git/docs/manifests.git -m all.xml
	3.查看仓库信息
		repo init 会在当前目录中产生一个.repo文件夹，可以在.repo/manifests.xml中查看分支的相关信息
	4.下载代码
		下载该分支下所有代码	repo sync
		下载单独仓库的代码	repo sync gxloader
二、代码开发与提交
	1.创建本地分支(gxloader下建立test分支)
		cd gxloader
		repo start test .
	2.代码开发
	3.将修改文件修改提交到本地缓存区
		git add 【修改的文件名】
	4.提交到本地缓存的文件提交到本地仓库，	添加软件任务号和说明	.
		git commit -m "[任务号]:[xxx方案，XXXX]"
	5.将本地仓库的修改提交到服务器上
		repo upload .
三、开发完成后删除分支
	repo abandon test
