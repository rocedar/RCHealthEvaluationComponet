//
//  UITableView+RCCategory.h
//
//  Created by wtw on 2018/2/27.
//

#import <UIKit/UIKit.h>

@interface UITableView (RCCategory)

/**
 *  注册cell ,identifier 为类名
 *
 *  @param classes 需要注册的类
 */
- (void)registerNibsWithClasses:(NSArray *)classes;

/**
 *  注册cell 有xib为注册同名Nib; 无xib为注册class, identifier 为类名
 *
 *  @param classes 需要注册的类
 */
- (void)registerCellsWithClasses:(NSArray *)classes;

@end

@interface UICollectionView (RCCategory)

/**
 *  注册cell ,identifier 为类名
 *
 *  @param classes 需要注册的类
 */
- (void)registerNibsWithClasses:(NSArray *)classes;

/**
 *  注册cell 有xib为注册同名Nib; 无xib为注册class, identifier 为类名
 *
 *  @param classes 需要注册的类
 */
- (void)registerCellsWithClasses:(NSArray *)classes;

@end
