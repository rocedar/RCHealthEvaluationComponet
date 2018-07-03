//
//  NSDate+RCUtils.h
//  RCBaseComponent
//
//  Created by wtw on 2018/3/13.
//

#import <Foundation/Foundation.h>

#define RC_D_MINUTE         60
#define RC_D_HOUR           3600
#define RC_D_DAY            86400
#define RC_D_WEEK           604800
#define RC_D_YEAR           31556926

@interface NSDate (RCUtils)

#pragma mark -- 距离当前日期的日期
//明天
+ (NSDate *) dateTomorrow;
//昨天
+ (NSDate *) dateYesterday;
///距离今天 days 天的日期
+(NSDate *)dateWithDaysFromNow:(NSInteger)days;
///距离当前时间 hours 小时的日期
+ (NSDate *)dateWithHoursFromNow:(NSInteger)hours;
///距离当前时间 minutes 分钟的日期
+ (NSDate *)dateWithMinutesFromNow:(NSInteger)minutes;

#pragma mark -- 时间比较

///比较年月日是否相同
- (BOOL) sameDayWithDate:(NSDate *)date;
///是否是今天
- (BOOL) isToday;
///是否是明天
- (BOOL) isTomorrow;
///是否是昨天
- (BOOL) isYesterday;

///是否是同一周
- (BOOL) isSameWeekAsDate:(NSDate *)date;
///是否是本周
- (BOOL) isThisWeek;
///是否是本周的下周
- (BOOL) isNextWeek;
///是否是本周的上周
- (BOOL) isLastWeek;

///是否是同一月
- (BOOL) isSameMonthAsDate:(NSDate *)aDate;
///是否是本月
- (BOOL) isThisMonth;
///是否是本月的下月
- (BOOL) isNextMonth;
///是否是本月的上月
- (BOOL) isLastMonth;

///是否是同一年
- (BOOL) isSameYearAsDate:(NSDate *)aDate;
///是否是今年
- (BOOL) isThisYear;
///是否是今年的下一年
- (BOOL) isNextYear;
///是否是今年的上一年
- (BOOL) isLastYear;

///是否是工作日
- (BOOL) isWorkday;
///是否是周末
- (BOOL) isWeekend;

#pragma mark -- Adjusting dates 调节时间

///增加 years年
- (NSDate *) dateByAddingYears:(NSInteger)years;
///增加 months月
- (NSDate *) dateByAddingMonths:(NSInteger)months;
///增加 days天
- (NSDate *) dateByAddingDays:(NSInteger)days;
///增加 hours小时
- (NSDate *) dateByAddingHours:(NSInteger)hours;
///增加 minutes分钟
- (NSDate *) dateByAddingMinutes:(NSInteger)minutes;

#pragma mark -- 时间间隔

///与anotherDate间隔几天
- (NSInteger) distanceDaysToDate:(NSDate *)anotherDate;
///与anotherDate间隔几月
- (NSInteger) distanceMonthsToDate:(NSDate *)anotherDate;
///与anotherDate间隔几年
- (NSInteger) distanceYearsToDate:(NSDate *)anotherDate;

@end
