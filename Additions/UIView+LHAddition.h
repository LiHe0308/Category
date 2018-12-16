//
//  UIView+LHAddition.h
//  hh
//
//  Created by 李贺 on 2018/12/12.
//  Copyright © 2018年 Lihe. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (LHAddition)

/// 返回屏幕截图
- (UIImage *)snapshotImage;

/// 找到自己所在的控制器,判断是否存在之后,使用
- (UIViewController *)viewController;

#pragma mark -- 基础属性
@property (nonatomic) CGFloat left;

/**
 * Shortcut for frame.origin.y
 *
 * Sets frame.origin.y = top
 */
@property (nonatomic) CGFloat top;

/**
 * Shortcut for frame.origin.x + frame.size.width
 *
 * Sets frame.origin.x = right - frame.size.width
 */
@property (nonatomic) CGFloat right;

/**
 * Shortcut for frame.origin.y + frame.size.height
 *
 * Sets frame.origin.y = bottom - frame.size.height
 */
@property (nonatomic) CGFloat bottom;

/**
 * Shortcut for frame.size.width
 *
 * Sets frame.size.width = width
 */
@property (nonatomic) CGFloat width;

/**
 * Shortcut for frame.size.height
 *
 * Sets frame.size.height = height
 */
@property (nonatomic) CGFloat height;

/**
 * Shortcut for center.x
 *
 * Sets center.x = centerX
 */
@property (nonatomic) CGFloat centerX;

/**
 * Shortcut for center.y
 *
 * Sets center.y = centerY
 */
@property (nonatomic) CGFloat centerY;
/**
 * Shortcut for frame.origin
 */
@property (nonatomic) CGPoint origin;

/**
 * Shortcut for frame.size
 */
@property (nonatomic) CGSize size;


#pragma mark -- 渐变的颜色设置
/*
 1. 按钮渐变颜色设置方法 :
 UIButton *makeSureBtn = [UIButton new];
 makeSureBtn.layer.cornerRadius = 8 * kViewHeightScale;
 makeSureBtn.clipsToBounds = YES;
 [makeSureBtn setGradientBackgroundWithColors:@[[UIColor colorWithHexString:@"A4B1FF"],[UIColor colorWithHexString:@"86B9FF"]] locations:nil startPoint:CGPointMake(0, 0) endPoint:CGPointMake(1, 0)];
 [makeSureBtn setTitle:@"下单" forState:UIControlStateNormal];
 [makeSureBtn setTitleColor:[UIColor colorWithHexString:@"ffffff"] forState:UIControlStateNormal];
 makeSureBtn.titleLabel.font = [UIFont systemFontOfSize:18 * kViewHeightScale];
 [makeSureBtn addTarget:self action:@selector(makeSureBtnClicked) forControlEvents:UIControlEventTouchUpInside];
 [bottomView addSubview:makeSureBtn];
 [makeSureBtn mas_makeConstraints:^(MASConstraintMaker *make) {
 make.centerX.mas_equalTo(0);
 make.bottom.mas_equalTo(-15 * kViewHeightScale);
 make.size.mas_equalTo(CGSizeMake(188 * kViewHeightScale, 38 * kViewHeightScale));
 }];
 
 2. view设置渐变方法 : 创建 -> CAGradientLayer ,添加即可
 UIView *view = [[UIView alloc] init];
 UIColor *colorOne = [UIColor colorWithRed:(0/255.0)  green:(0/255.0)  blue:(0/255.0)  alpha:0.0];
 UIColor *colorTwo = [UIColor colorWithRed:(0/255.0)  green:(0/255.0)  blue:(0/255.0)  alpha:0.4];
 NSArray *colors = [NSArray arrayWithObjects:(id)colorOne.CGColor, colorTwo.CGColor, nil];
 CAGradientLayer *gradient = [CAGradientLayer layer];
 gradient.startPoint = CGPointMake(0, 0);
 gradient.endPoint = CGPointMake(1, 0);
 gradient.colors = colors;
 gradient.frame = CGRectMake(0, 0, kViewWidthScale*100, SCREENHEIGHT);
 [view.layer insertSublayer:gradient atIndex:0];
 [self.view addSubview:view];
 [view mas_makeConstraints:^(MASConstraintMaker *make) {
 make.top.bottom.right.equalTo(self.view);
 make.width.mas_offset(kViewWidthScale*100);
 }];
 */
/* The array of CGColorRef objects defining the color of each gradient
 * stop. Defaults to nil. Animatable. */

@property(nullable, copy) NSArray *colors;

/* An optional array of NSNumber objects defining the location of each
 * gradient stop as a value in the range [0,1]. The values must be
 * monotonically increasing. If a nil array is given, the stops are
 * assumed to spread uniformly across the [0,1] range. When rendered,
 * the colors are mapped to the output colorspace before being
 * interpolated. Defaults to nil. Animatable. */

@property(nullable, copy) NSArray<NSNumber *> *locations;

/* The start and end points of the gradient when drawn into the layer's
 * coordinate space. The start point corresponds to the first gradient
 * stop, the end point to the last gradient stop. Both points are
 * defined in a unit coordinate space that is then mapped to the
 * layer's bounds rectangle when drawn. (I.e. [0,0] is the bottom-left
 * corner of the layer, [1,1] is the top-right corner.) The default values
 * are [.5,0] and [.5,1] respectively. Both are animatable. */

@property CGPoint startPoint;
@property CGPoint endPoint;

+ (UIView *_Nullable)gradientViewWithColors:(NSArray<UIColor *> *_Nullable)colors locations:(NSArray<NSNumber *> *_Nullable)locations startPoint:(CGPoint)startPoint endPoint:(CGPoint)endPoint;

- (void)setGradientBackgroundWithColors:(NSArray<UIColor *> *_Nullable)colors locations:(NSArray<NSNumber *> *_Nullable)locations startPoint:(CGPoint)startPoint endPoint:(CGPoint)endPoint;

@end

NS_ASSUME_NONNULL_END
