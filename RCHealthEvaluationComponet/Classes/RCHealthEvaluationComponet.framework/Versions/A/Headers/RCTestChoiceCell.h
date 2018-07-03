//
//  RCTestChoiceCell.h
//  AFNetworking
//
//  Created by wtw on 2018/6/26.
//

#import <UIKit/UIKit.h>

@class RCOptionModel;
@interface RCTestChoiceCell : UITableViewCell

@property (strong, nonatomic) RCOptionModel *optionModel;

@property (copy, nonatomic) void(^selectBlock)(RCOptionModel*optionModel);

+ (instancetype)cellWithTableView:(UITableView *)tableView;

@end
