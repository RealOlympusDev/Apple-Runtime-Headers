//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <coreroutine/NSCopying-Protocol.h>

@class CMMotionActivity;

@interface RTStateTransitionActivityHistogramElement : NSObject <NSCopying>
{
    CMMotionActivity *_activity;
    double _interval;
}

@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(retain, nonatomic) CMMotionActivity *activity; // @synthesize activity=_activity;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithActivity:(id)arg1;

@end

