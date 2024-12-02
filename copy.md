<<<<<<< HEAD
<!--
 * @Date: 2024-11-16
 * @LastEditors: GoKo Son626
 * @LastEditTime: 2024-11-23
 * @FilePath: \copy\copy.md
 * @Description: 
-->
1. 在根节点“/”最后面输入如下所示内容

1 stm32mp1_led {
2       compatible = "atkstm32mp1-led";
3       status = "okay";
4       reg = <0X50000A28 0X04 /* RCC_MP_AHB4ENSETR */
5       0X5000A000 0X04 /* GPIOI_MODER */
6       0X5000A004 0X04 /* GPIOI_OTYPER */
7       0X5000A008 0X04 /* GPIOI_OSPEEDR */
8       0X5000A00C 0X04 /* GPIOI_PUPDR */
9       0X5000A018 0X04 >; /* GPIOI_BSRR*/
10 };

`make dtbs`
`cp `
`cd proc/device-tree`





























































=======
>>>>>>> 971a863ca0dee485a6d370c08636e5353c763a58
