# HTC Vive 

ROSでHTC　Viveを使用するための説明

## Dependency

- [ROS Package](https://github.com/robosavvy/vive_ros)
- [SteamVR](https://store.steampowered.com/steamvr?l=japanese)

## ROS

Viveを立ち上げてROSで使用するときには下記のコマンドを実行します．

1. launch vive server

```
roslaunch vive_ros server_vr.launch
```

2.  launch ROS topic bridge

```
roslaunch vive_ros vive.launch
```

3. rvizで確認

```
rviz
```

Fixed Frame -> world
Add -> By Display Type -> TF

## 座標系

本棚の上のベースステーションが{world}の上に存在する．
ただ床から2.265m上空だと表示されるが，実際は2.1mなので誤差がある．


## トラブルシューティング

### roslaunchでエラーが起きてプロセスが死ぬ
1. steam -> steamVRを起動し，そちらからViveにアクセスする．
   そうするとrosからでもアクセスできるようになる．

2. steamVRが起動している場合，rosからはアクセスできない．steamを切ってからrosからアクセスしましょう

### steamVRでfaildというエラーが出る．
ROSからはアクセス可能な場合があります．ROSからアクセスできるか試してみてください．


