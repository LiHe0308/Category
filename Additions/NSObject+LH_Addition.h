//
//  NSObject+LH_Addition.h
//  hh
//
//  Created by 李贺 on 2018/12/16.
//  Copyright © 2018年 Lihe. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (LH_Addition)
/**
 模型类字典转模型  -- 只需要写好对应属性即刻,其他都不用写,一步调用
 
 @param dict 需要转换的字典
 @return 返回模型对象
 */
+ (instancetype)model_ObjectWithDict:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
