# ZTAnimation


<img src="/img/wave.gif" width="350" height="667">

### 初始化
##### 支持Storyboard和代码创建
```

// @IBOutlet weak var waveView: WaveView!
 
        //颜色
//        waveView.waveColor = UIColor.blue
        //动画时间2s
        waveView.speed = 2
        //浪高
        waveView.amplitude = 8
        //波长
        waveView.wavelength = 320
        //持续动画
    // waveView.alwaysAnimation = true
```    

##### 调用
```
waveView.startWave()

```