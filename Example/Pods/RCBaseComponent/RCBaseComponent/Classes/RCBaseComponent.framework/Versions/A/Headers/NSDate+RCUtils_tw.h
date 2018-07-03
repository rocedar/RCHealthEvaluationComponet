//
//  NSDate+RCUtils_tw.h
//  Pods-RCBaseComponent_Example
//
//  Created by wtw on 2018/3/14.
//

#import <Foundation/Foundation.h>

@interface NSDate (RCUtils_tw)

#pragma mark - 获取当前日期的年 月 日 时 分 秒
/**
 获取当天的包括“年”，“月”，“日”，“周”，“时”，“分”，“秒”的NSDateComponents
 */
- (NSDateComponents *)componentsOfDay;

/**
 获得NSDate对应的年份
 */
- (NSUInteger)year;

/**
 获得NSDate对应的月份
 */
- (NSUInteger)month;

/**
 获得NSDate对应的日期
 */
- (NSUInteger)day;

/**
 获得NSDate对应的小时数
 */
- (NSUInteger)hour;

/**
 获得NSDate对应的分钟数
 */
- (NSUInteger)minute;

/**
 获得NSDate对应的秒数
 */
- (NSUInteger)second;

/**
 获得NSDate对应的星期
 */
- (NSUInteger)weekday;

/**
 返回对应格式的日期字符串
 */
- (NSString *) stringWithFormat: (NSString *) format;

- (NSDate *) dateWithFormatter:(NSString *)formatter;

/**
 *  返回一个只有年月日的时间
 */
- (NSDate *)dateWithYMD;

/**
 字符串时间格式转换
 
 @param format format description
 @param dateStr 时间串
 @param fromFormat fromFormat description
 @return 返回格式化好的字符串
 */
+ (NSString *)dateToFomatter:(NSString *)format fromDateStr:(NSString *)dateStr fomatter:(NSString *)fromFormat;

/**
 获取当前周的周一日期  @return yyyyMMdd
 */
+ (NSString *)getCurrentWeekMonday;

/**
 根据日期获取当前周的周一日期
 
 @return yyyyMMdd
 */
+ (NSString *)getCurrentWeekMondayWithDate:(NSString *)dateStr;

/**
 判断是否是今天
 
 @param dateStr 传入日期判断  yyyyMMdd
 @return  0 否 1 是
 */
+ (BOOL)isSameDay:(NSString *)dateStr;

/**
 是否是本周
 
 @param dateStr yyyyMMdd
 */
+ (BOOL)isSameWeekOfYearWithDateStr:(NSString *)dateStr;

/**
 是否是本月
 
 @param dateStr 传入日期判断  yyyyMM
 @return 0 否 1 是
 */
+ (BOOL)isSameMonthWithDateStr:(NSString *)dateStr;

/**
 图表日期计算 根据日期计算7的倍数的日期
 
 @param dateStr 传入的日期
 @return 计算7的倍数的日期
 */
+ (NSString *)calculateDateWithDate:(NSString *)dateStr;

/**
 根据days计算日期
 
 @param dateStr 日期计算起点
 @param days 日期距离天数
 @return 返回距离传入日期days天数后的日期
 */
+ (NSString *)calculateDayWithDate:(NSString *)dateStr WithDays:(NSInteger)days;

/**
 根据month计算月日期
 
 @param dateStr 日期计算起点
 @param month 日期距离月数
 @return 返回距离传入日期months月后的日期
 */
+ (NSString *)calculateMonthsWithDate:(NSString *)dateStr
                           WithMonths:(NSInteger)month;

- (NSInteger)differenceFromStartDate:(NSDate *)startDate;

+ (NSDate *)getCurrentDate;

/**
 NSDate 转 NSString
 
 @param format 转换后的格式
 @param date 需要转换的时间
 @return 转换后的串
 */
+ (NSString *)dateFomatter:(NSString *)format fromDate:(NSDate *)date;

/**
 NSString 转NSDate
 
 @param string 时间串
 @param format 时间串的格式
 @return 返回NSDate
 */
+ (NSDate *)dateFromString:(NSString *)string withFormat:(NSString *)format;

@end

