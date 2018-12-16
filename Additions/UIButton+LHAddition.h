//
//  UIButton+LHAddition.h
//  hh
//
//  Created by 李贺 on 2018/12/12.
//  Copyright © 2018年 Lihe. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIButton (LHAddition)

/**
 快速创建按钮

 @param title 标题
 @param fontName 标题样式
 @param fontSize 标题大小
 @param normalColor 默认颜色
 @param selectedColor 选中颜色
 @return 按钮
 */
+ (instancetype)buttonWithTitleString:(NSString *)title fontName:(nullable NSString *)fontName fontSize:(CGFloat)fontSize normalColor:(NSString *)normalColor selectedColor:(NSString *)selectedColor;
@end

NS_ASSUME_NONNULL_END
