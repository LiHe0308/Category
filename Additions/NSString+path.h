//
//  NSObject+EmptyJudgemen.h
//  hh
//
//  Created by 李贺 on 2018/12/12.
//  Copyright © 2018年 Lihe. All rights reserved.
//
#import <Foundation/Foundation.h>

@interface NSString (path)

/// 获取Documents目录
+ (NSString *)getDocumentsPath;
/// 获取Cache目录
+ (NSString *)getCachePath;
/// 获取tmp目录
+ (NSString *)getTempPath;

#pragma mark -- 根据url的最后一部分,来命名保存该url内容的路径
/// 保存在Documents目录下
- (NSString *)appendDocumentsPath;
/// 保存在Cache目录下
- (NSString *)appendCachePath;
/// 保存在Tmp目录下
- (NSString *)appendTempPath;

@end
