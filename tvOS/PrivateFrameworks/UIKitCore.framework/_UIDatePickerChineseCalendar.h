//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSCalendar.h>

__attribute__((visibility("hidden")))
@interface _UIDatePickerChineseCalendar : NSCalendar
{
    NSCalendar *realCalendar;
}

+ (id)cyclicalFromRelated:(id)arg1;
+ (id)relatedFromCyclical:(id)arg1;
@property NSCalendar *realCalendar; // @synthesize realCalendar;
- (struct _NSRange)rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3;
- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3;
- (id)calendarIdentifier;
- (struct _NSRange)maximumRangeOfUnit:(unsigned long long)arg1;
- (void)setTimeZone:(id)arg1;
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2;
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4;
- (id)dateFromComponents:(id)arg1;
- (id)initWithCalendar:(id)arg1;

@end

