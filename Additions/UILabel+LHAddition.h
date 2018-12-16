//
//  UILabel+LHAddition.h
//  hh
//
//  Created by 李贺 on 2018/12/12.
//  Copyright © 2018年 Lihe. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UILabel (LHAddition)


/**
 快速初始化一个Label

 @param text 文本内容
 @param fontName 字体样式 nil就是默认系统样式
 @param fontSize 字体大小
 @param colorString 字体颜色
 @return Label
 */
+ (instancetype)labelWithText:(NSString *)text fontName:(nullable NSString *)fontName fontSize:(CGFloat)fontSize colorString:(NSString *)colorString;

@end

NS_ASSUME_NONNULL_END
