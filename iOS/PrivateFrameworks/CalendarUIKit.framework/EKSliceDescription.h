//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarUIKit/NSCopying-Protocol.h>

@class EKEvent, EKSeriesDetails;

@interface EKSliceDescription : NSObject <NSCopying>
{
    EKEvent *_originalEventToSliceOn;
    EKSeriesDetails *_originalMainSeriesDetails;
}

@property(retain) EKSeriesDetails *originalMainSeriesDetails; // @synthesize originalMainSeriesDetails=_originalMainSeriesDetails;
@property(retain) EKEvent *originalEventToSliceOn; // @synthesize originalEventToSliceOn=_originalEventToSliceOn;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

