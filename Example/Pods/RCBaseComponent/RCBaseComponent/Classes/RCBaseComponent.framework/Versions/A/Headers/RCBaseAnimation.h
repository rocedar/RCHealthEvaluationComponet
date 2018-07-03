//
//  TYBaseAnimation.h
//  RCAlertControllerDemo
//
//  Created by SunYong on 15/9/1.
//  Copyright (c) 2015年 tanyang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RCAlertController.h"

@interface RCBaseAnimation : NSObject<UIViewControllerAnimatedTransitioning>

@property (nonatomic, assign, readonly) BOOL isPresenting; // present . dismiss

+ (instancetype)alertAnimationIsPresenting:(BOOL)isPresenting;

// if you only want alert or actionsheet style ,you can judge that you don't need and return nil
//  code : only support alert style
//  if (preferredStyle == RCAlertControllerStyleAlert) {
//      return [super alertAnimationIsPresenting:isPresenting];
//  }
//  return nil;
+ (instancetype)alertAnimationIsPresenting:(BOOL)isPresenting preferredStyle:(RCAlertControllerStyle) preferredStyle;


// override transiton time
- (NSTimeInterval)transitionDuration:(id<UIViewControllerContextTransitioning>)transitionContext;

// override present
- (void)presentAnimateTransition:(id<UIViewControllerContextTransitioning>)transitionContext;

// override dismiss
- (void)dismissAnimateTransition:(id<UIViewControllerContextTransitioning>)transitionContext;

@end
