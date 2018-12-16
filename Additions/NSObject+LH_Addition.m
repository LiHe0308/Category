//
//  NSObject+LH_Addition.m
//  hh
//
//  Created by 李贺 on 2018/12/16.
//  Copyright © 2018年 Lihe. All rights reserved.
//

#import "NSObject+LH_Addition.h"

@implementation NSObject (LH_Addition)

+ (instancetype)model_ObjectWithDict:(NSDictionary *)dict{
    
    id obj = [[self alloc] init];
    [obj setValuesForKeysWithDictionary:dict];
    return obj;
}

- (void)setValue:(id)value forUndefinedKey:(NSString *)key{
    
}

@end
