//
//  NSObject+EmptyJudgemen.m
//  hh
//
//  Created by 李贺 on 2018/12/12.
//  Copyright © 2018年 Lihe. All rights reserved.
//

#import "NSObject+EmptyJudgemen.h"

@implementation NSObject (EmptyJudgemen)

- (BOOL)EmptyJudgemen{
    
    BOOL result = NO;
    
    if (self != nil && (NSNull *)self != [NSNull null]) {
        
        if ([self isKindOfClass:[NSString class]] ) {
            
            NSString *str = [(NSString *)self stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
            result = [str isEqualToString:@""]?NO:YES;
            
        }else if ([self isKindOfClass:[NSArray class]]) {
            
            result = [(NSArray *)self count];
            
        }else if ([self isKindOfClass:[NSDictionary class]]) {
            
            result = [(NSDictionary *)self count];
            
        }else {
            
            result = YES;
        }
        
    }
    
    return result;
    
}
@end
