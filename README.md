# hxl-Login-demo
django练手，实现登录注册

遇到的问题：
  - 1、docker内django可以访问，容器外不可以
    解决方法：
      (运行需要带上 0.0.0.0)
      Python manage.py runser 0.0.0.0:8000
  - 2、启动后访问后台css错乱
    非完美解决方法：
      （setting 里设置DEBUG=True）
