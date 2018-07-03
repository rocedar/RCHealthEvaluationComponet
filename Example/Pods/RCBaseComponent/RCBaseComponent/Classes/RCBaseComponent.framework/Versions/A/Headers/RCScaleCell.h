//
//  RCScaleCell.h
//  RulerDemo
//
//  Created by long108 on 2017/11/22.
//  Copyright © 2017年 long108. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RCScaleCell : UICollectionViewCell
@property (strong, nonatomic) NSIndexPath *indexPath;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *width;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *height;

@end
