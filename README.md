# Luban-Lite SDK

Luban-Lite 是 ArtInChip 针对 RTOS 领域开发的一套 SDK。

相关帮助文档如下：

- [用户使用指南_Linux环境](doc/luban-lite_user_guid_linux.md)
- [用户使用指南_Windows环境](doc/luban-lite_user_guid_windows.md)
- [驱动开发指南](doc/luban-lite_driver_development_guid.md)

## Branch from https://gitee.com/artinchip/luban-lite
* v1.0.2
```
git clone https://gitee.com/artinchip/luban-lite.git
luban-lite/
git reset --hard d3bd993b5f6360b5797604e86708ad85c4afd49b

scons --help
scons --apply-def=d13x_kunlunpi88-nor_rt-thread_helloworld_defconfig
scons --menuconfig
scons -j8
```
