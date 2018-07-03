//
//  RCRuler.h
//  RulerDemo
//
//  Created by long108 on 2017/11/22.
//  Copyright © 2017年 long108. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RCRuler : UIView
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
/** 单位 */
@property (copy, nonatomic) NSString *unit;
/** 刻度个数 */
@property (assign, nonatomic) int count;
/** 最大值 */
@property (assign, nonatomic) int maxValue;
/** 最小值 */
@property (assign, nonatomic) int minValue;
/** 当前值 */
@property (assign, nonatomic) int cureentValue;
/** 刻度 = 0.1; = 1 */
@property (assign, nonatomic) CGFloat scaleValue;

/** 结果回调 */
@property (copy, nonatomic) void(^valueBlock)(NSInteger value);

+ (instancetype)creatRuler;

@end
