//
//  UILabel+LHAddition.m
//  hh
//
//  Created by 李贺 on 2018/12/12.
//  Copyright © 2018年 Lihe. All rights reserved.
//

#import "UILabel+LHAddition.h"
#import "UIColor+LHAddition.h"

@implementation UILabel (LHAddition)

+ (instancetype)labelWithText:(NSString *)text fontName:(nullable NSString *)fontName fontSize:(CGFloat)fontSize colorString:(NSString *)colorString {
    UILabel *label = [[self alloc] init];
    
    label.text = text;
    if(fontName){
        label.font = [UIFont fontWithName:fontName size:fontSize];
    }else{
        label.font = [UIFont systemFontOfSize:fontSize];
    }
    label.textColor = [UIColor colorWithHexString:colorString];
    label.numberOfLines = 0;
    
    return label;
}

@end
