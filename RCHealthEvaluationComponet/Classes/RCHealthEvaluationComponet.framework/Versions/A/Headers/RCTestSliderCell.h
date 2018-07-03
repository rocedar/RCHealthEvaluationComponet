//
//  DYTestSliderCell.h
//  DongYa
//
//  Created by long108 on 2018/5/22.
//  Copyright © 2018年 DY. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RCHealthQuestionModel.h"

@interface RCTestSliderCell : UITableViewCell

@property (strong, nonatomic) RCTopicModel *topicModel;

@property (copy, nonatomic) void(^sliderBlock)(NSString *value);

+ (instancetype)cellWithTableView:(UITableView *)tableView;
@end
