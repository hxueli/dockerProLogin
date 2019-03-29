# hxl-Login-demo
django练手，实现登录注册

遇到的问题：
   docker内django可以访问，容器外不可以
   (```)
     解决方法：
       (运行需要带上 0.0.0.0)
       Python manage.py runser 0.0.0.0:8000 
   (```)
 ---   启动后访问后台css错乱
     非完美解决方法：
      （setting 里设置DEBUG=True）
  - git push 无法上传超过50M文件
       非完美解决方法：
        （删除db的大文件，将会影响docker run 后的mysql数据，建议不挂载volumes，进容器db创建数据库login）
