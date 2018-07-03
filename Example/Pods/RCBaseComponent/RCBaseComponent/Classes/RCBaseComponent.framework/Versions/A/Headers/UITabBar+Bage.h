//
//  UITabBar+Bage.h
//  Pods-RCBaseComponent_Example
//
//  Created by wtw on 2018/2/27.
//

#import <UIKit/UIKit.h>

@interface UITabBar (Bage)

/**
 显示小红点

 @param index 显示的位置
 @param items 共有多少个items
 */
- (void)showBadgeOnItemIndex:(int)index totalItems:(int)items;   //显示小红点

- (void)hideBadgeOnItemIndex:(int)index; //隐藏小红点
@end
