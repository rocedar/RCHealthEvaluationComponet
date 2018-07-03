//
//  RCHealthEvaluationResultHeader.h
//  AFNetworking
//
//  Created by wtw on 2018/6/27.
//

#import <UIKit/UIKit.h>

@class RCHealthResultModel;
@interface RCHealthEvaluationResultHeader : UIView

@property (nonatomic,strong) RCHealthResultModel *model;

@property (nonatomic,copy) void(^remeasureBlock)(void);

@end
