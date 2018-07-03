//
//  UIImage+RCImage.h
//  Pods-RCBaseComponent_Example
//
//  Created by wtw on 2018/6/19.
//

#import <UIKit/UIKit.h>

@interface UIImage (RCImage)
/**
 *  把图片缩小到指定尺寸
 *
 *  @param imageSize 制定图片的尺寸
 *
 *  @return 新的图片
 */
- (UIImage *)scaleImageToSize:(CGSize)imageSize;

- (UIImage *)scaleImageToNewSize:(CGSize)dstSize;

/**
 *  把图片缩小到宽或高最大得长度
 *
 *  @param imageWdithOrHeight 图片的宽或高
 *
 *  @return 新图片
 */
- (UIImage *)scaleImageToMaxWidthOrHeight:(CGFloat)imageWdithOrHeight;


/**
 根据颜色返回图片
 */
+ (UIImage *)imageWithColor:(UIColor *)color;

/** 文字添加到图片上 */
+ (UIImage *)image:(UIImage *)image text:(NSString *)text;

/**
 *  对图片进行圆角处理
 *
 *  @param image 图片
 *  @param size  大小
 */
+ (UIImage *) createRoundedRectImage:(UIImage*)image size:(CGSize)size;

/**
 *  返回裁剪后的圆形图片  [image CirecleImage]
 *
 *  @return 返回裁剪后的圆形图片
 */
- (instancetype)CirecleImage;

/**
 *  传入图片名返回剪切后的图片   [UIIamge CirecleImage:@“XXX.png”]
 *
 *  @param name 图片名册
 *
 *  @return 返回剪切后的图片
 */
+ (instancetype)CirecleImage:(NSString *)name;

/* 使用方式
 [self.imageview sd_setImageWithURL:[NSURL URLWithString:topic.profile_image ] placeholderImage:[UIImage CircleImage:@"defaultUserIcon"] completed:^(UIImage *image, NSError *error, SDImageCacheType cacheType, NSURL *imageURL) {
         if (image == nil) return ;
         self.imageview.image =  [image CircleImage];
     }];
 
 */

/**
 *  等比压缩图片
 *
 *  @param image 传入图片
 *
 *  @return 返回图片
 */
- (UIImage *)compressImage;

/**
 *  @brief  根据颜色生成纯色图片
 *
 *  @param color 颜色
 *
 *  @return 纯色图片
 */
- (UIImage *)imageWithColor:(UIColor *)color;

/**
 截取当前控制器视图
 
 @param view 当前控制器的View
 */
+ (UIImage *)imageOfView:(UIView *)view;

@end
