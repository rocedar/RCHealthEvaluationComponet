//
//  RCTestFillCell.h
//  AFNetworking
//
//  Created by wtw on 2018/6/27.
//

#import <UIKit/UIKit.h>

@interface RCTestFillCell : UITableViewCell

@property (copy, nonatomic) void(^fillBlock)(NSString *answer);

+ (instancetype)cellWithTableView:(UITableView *)tableView;

@end
