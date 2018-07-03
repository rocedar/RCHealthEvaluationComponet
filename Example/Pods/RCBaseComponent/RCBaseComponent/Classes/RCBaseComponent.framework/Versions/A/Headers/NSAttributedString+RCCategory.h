//
//  NSAttributedString+RCCategory.h
//  Pods-RCBaseComponent_Example
//
//  Created by wtw on 2018/2/27.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreText/CoreText.h>

@interface NSAttributedString (RCCategory)
/**
 *  改变一句话中某些字的颜色
 *
 *  @param color    需要改变成的颜色
 *  @param totalStr 整句话字符串
 *  @param subArray 需要改变颜色的文字数组（如果有相同的只取第一个）
 *
 *  @return 生成后的富文本
 */
+ (NSMutableAttributedString *)tw_changeCorlorWithColor:(UIColor *)color TotalString:(NSString *)totalStr SubStringArray:(NSArray *)subArray;

/**
 改变一句话中某些文字的大小
 
 @param font 需要改变的大小
 @param totalStr 所有的文字
 @param subArray 需要改变的文字
 @return 生成后的富文本
 */
+ (NSMutableAttributedString *)tw_changeFontWithFont:(UIFont *)font TotalString:(NSString *)totalStr SubStringArray:(NSArray *)subArray;
/**
 *  改变句子的字间距
 *
 *  @param totalString 需要改变的字符串
 *  @param space       字间距
 *
 *  @return 生成后的富文本
 */
+ (NSMutableAttributedString *)tw_changeSpaceWithTotalString:(NSString *)totalString Space:(CGFloat)space ;

/**
 *  改变段落的行间距
 *
 *  @param totalString 需要更改的字符串
 *  @param lineSpace   行间距
 *
 *  @return 生成后的富文本
 */
+ (NSMutableAttributedString *)tw_changeLineSpaceWithTotalString:(NSString *)totalString LineSpace:(CGFloat)lineSpace;

/**
 *  同时更改行间距和字间距
 *
 *  @param totalString 需要更改的字符串
 *  @param lineSpace   行间距
 *  @param textSpace   字间距
 *
 *  @return 生成后的富文本
 */
+ (NSMutableAttributedString *)tw_changeLineAndTextSpaceWithTotalString:(NSString *)totalString LineSpace:(CGFloat)lineSpace textSpace:(CGFloat)textSpace ;

/**
 *  设置某些文字的颜色 并单独设置其字体
 *
 *  @param font        设置的字体
 *  @param color       颜色
 *  @param totalString 总的字符串
 *  @param subArray    想要改变颜色的字符串
 *
 *  @return 生成的富文本
 */
+ (NSMutableAttributedString *)tw_changeFontAndColor:(UIFont *)font Color:(UIColor *)color TotalString:(NSString *)totalString SubStringArray:(NSArray *)subArray ;

/**
 改变部分字体大小
 */
+ (NSMutableAttributedString *)tw_changeTextFontWithFont:(UIFont *)font TotalString:(NSString *)totalStr;

+(NSAttributedString*)makeFirstString:(NSString*)firstString secondString:(NSString*)secondString firstColor:(UIColor*)firstColor secondColor:(UIColor*)secondColor firstFontSize:(CGFloat)firstFontSize secondFontSize:(CGFloat)secondFontSize;
+(NSAttributedString*)makeFirstString:(NSString*)firstString secondString:(NSString*)secondString thirdString:(NSString*)thirdString firstColor:(UIColor*)firstColor secondColor:(UIColor*)secondColor thirdColor:(UIColor*)thirdColor firstFontSize:(CGFloat)firstFontSize secondFontSize:(CGFloat)secondFontSize thirdFontSize:(CGFloat)thirdFontSize;
/** 改变某段文字的大小和颜色 */
+ (NSAttributedString *)attributedStringWithStr:(NSString *)str Color:(UIColor *)color FontSize:(CGFloat)fontSize range:(NSRange)range;

/**
 设置一段文字多种颜色
 
 @param str 显示的文字
 @param color 字体颜色数组
 @param fontSize 字体大小
 @param rangeArray 改变颜色字体的范围
 @param lineSpacing 字体间距
 */

/**
 NSString *oneString = @"参赛人员：默认家人版块中你关注的家人、关注你的人及与你关注同一家人的人(底部导航 - 家人 中可查看、添加家人)。";
 NSArray *color = @[@"1E92FF", @"FF6702", @"FF6702"];
 NSArray *rangeColor = @[@[@"7", @"2"], @[@"12", @"12"], @[@"25", @"10"]];
 self.firstTiltleLabel.attributedText = [NSAttributedString dy_attributedStringWithStr:oneString ColorArray:color FontSize:12 rangeArray:rangeColor lineSpacingValue:15];
 */
+ (NSAttributedString *)dy_attributedStringWithStr:(NSString *)str ColorArray:(NSArray<UIColor *> *)colorArray FontSize:(CGFloat)fontSize rangeArray:(NSArray *)rangeArray lineSpacingValue:(CGFloat)lineSpacing;

@end
