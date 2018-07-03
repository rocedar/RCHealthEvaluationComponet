#import <UIKit/UIKit.h>

@class RCHealthQuestionModel;

@interface RCQuestionIntroView : UIView

@property (strong, nonatomic) RCHealthQuestionModel *questionModel;

+ (instancetype)createViewFromXib;

@end
