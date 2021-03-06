//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKHeartRateSummaryStatistics.h>

@class NSDictionary;

@interface HKHeartRateSummaryWorkoutRecoveryStatistics : HKHeartRateSummaryStatistics
{
    unsigned long long _workoutActivityType;
    NSDictionary *_perMinuteReadings;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic, setter=_setPerMinuteReadings:) NSDictionary *perMinuteReadings; // @synthesize perMinuteReadings=_perMinuteReadings;
@property(readonly, nonatomic) unsigned long long workoutActivityType; // @synthesize workoutActivityType=_workoutActivityType;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDateInterval:(id)arg1 numberOfBuckets:(long long)arg2 workoutUUID:(id)arg3 workoutActivityType:(unsigned long long)arg4;

@end

