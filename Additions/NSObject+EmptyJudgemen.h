//
//  NSObject+EmptyJudgemen.h
//  hh
//
//  Created by 李贺 on 2018/12/12.
//  Copyright © 2018年 Lihe. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (EmptyJudgemen)

/// 校验一个字符串(附带去掉首尾空格)，字典，数组是否为空
- (BOOL)EmptyJudgemen;

@end

NS_ASSUME_NONNULL_END
