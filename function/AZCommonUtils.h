//
//  AZCommonUtils.h
//  function
//
//  Created by zhangzexin on 16/6/25.
//  Copyright © 2016年 zhangzexin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface AZCommonUtils : NSObject
/**
 *  @brief 获取磁盘总空间大小
 *
 *  @return 磁盘总空间
 */
+ (CGFloat)diskOfAllMBytes;

/**
 *  @brief 取磁盘可用空间大小
 *
 *  @return 磁盘可用空间
 */
+ (CGFloat)diskOfFreeMBytes;

/**
 *  @brief  获取指定路径下某个文件的大小
 *
 *  @param filePath 指定文件路径
 *
 *  @return 文件大小
 */
+ (long long)fileSizeAtPath:(NSString *)filePath;

/**
 *  @brief 获取文件夹下所有文件的大小
 *
 *  @param folderPath 指定文件路径
 *
 *  @return 所有文件大小
 */
+ (long long)folderSizeAtPath:(NSString *)folderPath;

/**
 *  @brief 获取字符串(或汉字)首字母
 *
 *  @param string 特定字符串
 *
 *  @return 首字母
 */
+ (NSString *)firstCharacterWithString:(NSString *)string;

/**
 *  @brief 将字符串数组按照元素首字母顺序进行排序分组
 *
 *  @param array 特定的字符串数组
 *
 *  @return 按照元素首字母顺序进行排序分组的字典
 */
+ (NSDictionary *)dictionaryOrderByCharacterWithOriginalArray:(NSArray *)array;

/**
 *  @brief 获取当前时间
 *
 *  @param format format 格式 (HH 24小时/hh 12小时)
                         ===>@"yyyy-MM-dd HH:mm:ss"
                         ===>@"yyyy年MM月dd日 HH时mm分ss秒"
 *
 *  @return 格式化的当前时间
 */
+ (NSString *)currentDateWithFormate:(NSString *)format;

/**
 *  @brief 计算上次日期距离现在多久
 *
 *  @param lastTime    上次时间(需要和各式对应)
 *  @param formate1    上次时间格式
 *  @param currentTime 最近时间(需要和当前时间对应)
 *  @param formate2    最近时间格式
 *
 *  @return xx分钟前 xx小时前 xx天前
 */
+ (NSString *)timeIntervalFromLastTime:(NSString *)lastTime lastTimeFormate:(NSString *)formate1 toCurrentTime:(NSString *)currentTime currentTimeFormat:(NSString *)formate2;
/**
 *  @brief 校验手机号码的合法性
 *
 *  @param mobile 手机号码
 *
 *  @return 该手机号码是否合法
 */
+ (BOOL)valiMobile:(NSString *)mobile;

/**
 *  @brief 校验邮箱的合法性
 *
 *  @param email 邮箱地址
 *
 *  @return 该邮箱地址是否合法
 */
+ (BOOL)isAvailableEmail:(NSString *)email;

/**
 *  @brief 将十六进制颜色转换为 UIColor 对象
 *
 *  @param color 十六进制字符
 *
 *  @return 转换后的颜色
 */
+ (UIColor *)colorWithHexString:(NSString *)color;
/**
 *  @brief 对图片进行滤镜处理
 *
 *  @param image 要处理的图片
 *  @param name
 *  CIPhotoEffectInstant ===> 怀旧
 *  CIPhotoEffectMono ===> 单色
 *  CIPhotoEffectNoir ===> 黑白
 *  CIPhotoEffectFade ===> 褪色
 *  CIPhotoEffectTonal ===> 色调
 *  CIPhotoEffectProcess ===> 冲印
 *  CIPhotoEffectTransfer ===> 岁月
 *  CIPhotoEffectChrome ===> 略黄
 *  CiLinearToSRGBToneCurve,CIRGBToneCurveToLinear,CIGaussianBlur,CIBoxBlur,CIDisBlur,CISepiaTone,CIDepthOfField
 *
 */
+ (UIImage *)filterWithOriginalImage:(UIImage *)image filterName:(NSString *)name;

/**
 *  @brief 对图片进行模糊处理
 *
 *  @param name
 *  CIGaussianBlur ===> 高斯模糊
 *  CIBoxBlur      ===> 均值模糊(Available in iOS 9.0 and later)
 *  CIDiscBlur     ===> 环形卷积模糊(Available in iOS 9.0 and later)
 *  CIMedianFilter ===> 中值模糊，用于消除图像噪点，无需设置radius(Available in iOS 9.0 and later)
 *  CIMotionBlur   ===> 运动模糊，用户模拟相机移动拍摄时的扫尾效果(Available in iOS 9.0 and later)
 */
+ (UIImage *)blurWithOriginalImage:(UIImage *)image blurName:(NSString *)name radius:(NSInteger)radius;

/**
 *  @brief 调整图片饱和度，亮度，对比度
 *
 *  @param image      目标图片
 *  @param saturation 饱和度
 *  @param brightness 亮度: -1.0 ~ 1.0
 *  @param contrast   对比度
 *
 *  @return 调整后的图片
 */
+ (UIImage *)colorControlsWithOriginalImage:(UIImage *)image saturation:(CGFloat)saturation brightness:(CGFloat)brightness contrast:(CGFloat)contrast;

/**
 *  @brief 创建一张实时模糊效果的view(毛玻璃效果)iOS8.0以后适用
 *
 *  @param frame 尺寸
 *
 *  @return 
 */
+ (UIVisualEffectView *)effectViewWithFrame:(CGRect)frame;

/**
 *  @brief 全屏截图
 *
 *  @return 截屏图片
 */
+ (UIImage *)shotScreen;

/**
 *  @brief 截取一张view生成图片
 *
 *  @param view 所需截取的view
 *
 *  @return 截取后生成的图片
 */
+ (UIImage *)shotWithView:(UIView *)view;

/**
 *  @brief 截取view中某个区域生成一张图片
 *
 *  @param view  所需截取的区域
 *  @param scope 尺寸
 *
 *  @return 截取后的图片
 */
+ (UIImage *)shotWithView:(UIView *)view scope:(CGRect)scope;

/**
 *  @brief 压缩图片到指定尺寸大小
 *
 *  @param image 需要压缩的图片
 *  @param size  指定大小
 *
 *  @return 压缩后的图片
 */
+ (UIImage *)compressOriginaleImage:(UIImage *)image toSize:(CGSize)size;
/**
 *  @brief 压缩图片到指定文件大小
 *
 *  @param image 所需压缩的图片
 *  @param size  压缩后的大小
 *
 *  @return 压缩后的图片
 */
+ (NSData *)compressOriginalImage:(UIImage *)image toMaxDataSizeKBytes:(CGFloat)size;

/**
 *  @brief 判断字符串中是否含有空格
 *
 *  @param string 字符串
 *
 *  @return 是否含有空格
 */
+ (BOOL)isHaveSpaceInString:(NSString *)string;

/**
 *  @brief 判断字符串中是否含有某个字符串
 *
 *  @param string1 子字符串
 *  @param string2 全字符串
 *
 *  @return 是否含有？
 */
+ (BOOL)isHaveString:(NSString *)string1 InString:(NSString *)string2;

/**
 *  @brief 判断字符串中是否含有中文
 *
 *  @param string 特定字符串
 *
 *  @return 是否含有该文字
 */
+ (BOOL)isHaveChineseInString:(NSString *)string;

/**
 *  @brief 判断字符串是否全部为数字
 *
 *  @param string 所传字符串
 *
 *  @return 是否全为数字
 */
+ (BOOL)isAllNum:(NSString *)string;

/**
 *  @brief 绘制虚线
 *
 *  @param lineFrame 虚线的frame
 *  @param length    虚线中短线的宽度
 *  @param spacing   虚线中短线之间的间距
 *  @param color     虚线中短线的颜色
 *
 *  @return 虚线
 */
+ (UIView *)createDashedLineWithFrame:(CGRect)lineFrame lineLength:(int)length lineSpacing:(int)spacing lineColor:(UIColor *)color;

@end
