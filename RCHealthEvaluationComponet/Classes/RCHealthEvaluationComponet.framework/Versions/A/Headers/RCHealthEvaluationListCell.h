//
//  RCHealthEvaluationListCell.h
//  RCBaseComponent
//
//  Created by wtw on 2018/6/25.
//

#import <UIKit/UIKit.h>

@class RCHealthEvaluationListModel;
@interface RCHealthEvaluationListCell : UITableViewCell

@property (nonatomic,strong) RCHealthEvaluationListModel *model;

+ (instancetype)cellWithTableView:(UITableView *)tableView;

@end
