//
//  UIColor+LHAddition.h
//  hh
//
//  Created by 李贺 on 2018/12/12.
//  Copyright © 2018年 Lihe. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (LHAddition)

/**
 使用 16 进制数字创建颜色，例如 0xFF0000 创建红色

 @param hex 16 进制无符号32位整数
 @return 颜色
 */
+ (instancetype)colorWithHex:(uint32_t)hex;

/**
 产生随机色

 @return 随机色
 */
+ (instancetype)aarandomColor;


/**
 支持三种格式颜色字符串@"123456"  @"0x123456"  @"#123456"输入

 @param color 十六进制颜色字符串
 @param alpha 透明度
 @return Color
 */
+ (UIColor *)colorWithHexString:(NSString *)color alpha:(CGFloat)alpha;

/**
 支持三种格式颜色字符串@"123456"  @"0x123456"  @"#123456"输入

 @param color 十六进制颜色字符串
 @return Color
 */
+ (UIColor *)colorWithHexString:(NSString *)color;
@end

NS_ASSUME_NONNULL_END
