## MOV类指令

### 如何实现不同数据类型之间的转换？
源文件`cast.c`

```
long cast(unsigned char *sp, long * dp){
    *dp = (long) *sp;
}
```

汇编码

```
movzbl  (%rdi), %eax
movq    %rax, (%rsi)
```


![数据类型转换实现.png](https://upload-images.jianshu.io/upload_images/7066251-3de1e1ea679b039d.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)