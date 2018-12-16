//
//  UIButton+LHAddition.m
//  hh
//
//  Created by 李贺 on 2018/12/12.
//  Copyright © 2018年 Lihe. All rights reserved.
//

#import "UIColor+LHAddition.h"

@implementation UIButton (LHAddition)

+ (instancetype)buttonWithTitleString:(NSString *)title fontName:(nullable NSString *)fontName fontSize:(CGFloat)fontSize normalColor:(NSString *)normalColor selectedColor:(NSString *)selectedColor{
    
    UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
    
    [button setTitle:title forState:UIControlStateNormal];
    [button setTitleColor:[UIColor colorWithHexString:normalColor] forState:UIControlStateNormal];
    [button setTitleColor:[UIColor colorWithHexString:selectedColor] forState:UIControlStateSelected];
    
    if(fontName){
        [button.titleLabel setFont:[UIFont fontWithName:fontName size:fontSize]];
    }else{
        [button.titleLabel setFont:[UIFont systemFontOfSize:fontSize]];
    }
    [button sizeToFit];
    
    return button;
}
@end
