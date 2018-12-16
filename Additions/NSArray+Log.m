//
//  UIColor+LHAddition.m
//  hh
//
//  Created by 李贺 on 2018/12/12.
//  Copyright © 2018年 Lihe. All rights reserved.
//

#import "NSArray+Log.h"

@implementation NSArray (Log)

- (NSString *)descriptionWithLocale:(id)locale indent:(NSUInteger)level{
    NSMutableString *strM = [NSMutableString stringWithString:@"(\n"];

    [self enumerateObjectsUsingBlock:^(id obj, NSUInteger idx, BOOL *stop) {
        [strM appendFormat:@"\t%@,\n", obj];
    }];

    [strM appendString:@")"];
    
    return strM;
}

@end

@implementation NSDictionary (Log)

- (NSString *)descriptionWithLocale:(id)locale indent:(NSUInteger)level{
    NSMutableString *strM = [NSMutableString stringWithString:@"{\n"];

    [self enumerateKeysAndObjectsUsingBlock:^(id key, id obj, BOOL *stop) {
        [strM appendFormat:@"\t%@ = %@;\n", key, obj];
    }];

    [strM appendString:@"}\n"];

    return strM;
}

@end
