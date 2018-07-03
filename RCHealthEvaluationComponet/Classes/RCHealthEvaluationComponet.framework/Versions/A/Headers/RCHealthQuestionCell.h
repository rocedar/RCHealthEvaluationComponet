//
//  RCHealthQuestionCell.h
//  AFNetworking
//
//  Created by wtw on 2018/6/26.
//

#import <UIKit/UIKit.h>

@class RCHealthQuestionModel,RCTopicModel;
@interface RCHealthQuestionCell : UICollectionViewCell

@property (strong, nonatomic) RCHealthQuestionModel *questionModel;

@property (strong, nonatomic) RCTopicModel *topicModel;

@property (copy, nonatomic) void(^selectBlock)(void);

+ (instancetype)CellWithCollectionView:(UICollectionView *)collectionView indexPath:(NSIndexPath *)indexPath;

@end
