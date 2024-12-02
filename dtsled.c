
#define DTSLED_CNT      1               // device id nums
#define DTSLED_NAME     "dtsled"

/* dts device struct*/
struct dtsled_dev {
        dev_t devid;    /* device id */
        int major;      /* major id */
        int minor;      /* minor id */
        struct cdev cdev;  /* cdev */
};

struct dtsled_dev dtsled;       // led device structure

/* 入口 */
static int __int dtsled_int() {
        int ret = 0;

        /* 注册字符设备 */
        /* 1. 申请divid*/
        dtsled.major = 0;
        if (dtsled.major)       //
        {
                dtsled.devid = MKDEV(dtsled.major, 0);
                ret = register_chrdev_region(dtsled.devid, DTSLED_CNT, DTSLED_NAME);
        } else {
                ret = alloc_chrdev_region(dtsled.devid, 0, DTSLED_CNT, DTSLED_NAME);
                dtsled.major = MAJOR(dtsled.devid);
                dtsled.minor = MINOR(dtsled.devid);
        }
        if(ret < 0){
                goto fail_devid;
                printk("devid error\n");
        }

        /* 2. Add chrdev */
        
        


fail_devid:
        return ret;



        return ret;
}

/* 出口 */
static int __exit dtsled_exit() {
        return 0;
}

/* 注册和卸载驱动 */
module_init(dtsled_init);
moudle_exit(dtsled_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("WANGSHUQI");



