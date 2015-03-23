睡眠助手
============

这是一个能够通过监测睡眠质量的闹钟。

该闹钟的灵感来自于 Sleep Cycle 之类的睡眠质量监测软件。这类软件能够通过手机中的加速度传感器和陀螺仪监测睡眠质量，并在睡眠最浅的时刻将人唤醒。我想尝试通过硬件实现同样的功能。

根据我的计划，该闹钟具有下面这些功能：

* **睡眠辅助**：</br>
帮助睡眠的一些小功能，例如到睡觉时间自动提醒用户、播放催眠曲等。
* **睡眠记录**：</br>
记录睡眠，包括**睡眠质量记录**、睡眠时间统计、睡前与起床心情记录、起床心情记录、梦话与鼾声录音等。
* **智能唤醒**：</br>
在睡眠最浅的时刻唤醒用户。同时提供贪睡功能、周末模式等，适合在不同情况下使用。
* **与其他设备连接**：</br>
通过无线功能与其他设备相连接。例如可以连接手环等，整合运动数据，研究运动对睡眠质量的影响；或者连接可联网控制的灯泡，夜里需要起床时自动开灯，早上通过灯光将人唤醒；或者连接电热水瓶等，起床后自动烧水。

暂时打算用 STM32 + MPU6050 实现。作品尚未完成，如果有问题或建议请与我联系。

图标素材来源：

- [http://www.freepik.com/free-vector/businessman-falls-asleep-at-his-desk_766634.htm](http://www.freepik.com/free-vector/businessman-falls-asleep-at-his-desk_766634.htm)
- http://www.flaticon.com/free-icon/information-button_8201
- http://www.flaticon.com/free-icon/music-notes_67936
- http://www.flaticon.com/free-icon/wifi-signal_61692
- http://www.flaticon.com/free-icon/three-oclock-alarm_254
- http://www.flaticon.com/free-icon/heart-with-lifeline_55194
- http://www.flaticon.com/free-icon/electrocardiogram-inside-heart_62453
- http://www.flaticon.com/free-icon/bars-graphic_33544
- http://www.flaticon.com/free-icon/musical-note_66869