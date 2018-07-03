//
//  RCHealthQuestionHeader.h
//  RCBaseComponent
//
//  Created by wtw on 2018/6/26.
//

#import <UIKit/UIKit.h>

@class RCTopicModel,RCHealthQuestionModel;

@interface RCHealthQuestionHeader : UIView

@property (strong, nonatomic) RCTopicModel *topicModel;
@property (strong, nonatomic) RCHealthQuestionModel *questionModel;

@end
